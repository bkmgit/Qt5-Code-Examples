#include <QTextStream>
#include <QString>

int main(void) {

	QTextStream out(stdout);

	QString str { "Lovely" };
	str.append( " season");

	out << str << Qt::endl;

	str.remove(10, 3);
	out << str << Qt::endl;

	str.replace(7, 3, "girl");
	out << str << Qt::endl;

	str.clear();

	if (str.isEmpty()) {
		out << "The string is empty" << Qt::endl;
	}

	return 0;
}
