#include <QTextStream>
#include <QString>

#define STR_EQUAL 0

int main(void) {

	QTextStream out(stdout);

	QString a { "Rain" };
	QString b { "rain" };
	QString c { "rain\n" };

	if (QString::compare(a,b) == STR_EQUAL) {
		out << "a and b are equal" << Qt::endl;
	} else {
		out << "a and b are not equal" << Qt::endl;
	}

	out << "In case insensitive comparison:" << Qt::endl;

	if (QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL) {
		out << "a and b are equal" << Qt::endl;
	} else {
		out << "a and b are not equal" << Qt::endl;
	}

	if (QString::compare(b, c) == STR_EQUAL) {
		out << "b and c are equal" << Qt::endl;
	} else {
		out << "b and c are not equal" << Qt::endl;
	}

	c.chop(1);

	out << "After removing the new line character" << Qt::endl;

	if (QString::compare(b, c) == STR_EQUAL) {
		out << "b and c are equal" << Qt::endl;
	} else {
		out << "b and c are not equal" << Qt::endl;
	}

	return 0;
}

