#include <QTextStream>
#include <QString>

int main(void) {
	QTextStream out(stdout);

	QString a { "Eagle" };

	out << a[0] << Qt::endl;
	out << a[4] << Qt::endl;

	out << a.at(0) << Qt::endl;

	if (a.at(5).isNull()) {
		out << "Outside the range the string" << Qt::endl;
	}

	return 0;
}
