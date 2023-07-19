#include <QTextStream>
#include <QString>

int main(void) {

	QTextStream out(stdout);

	QString s1 = "Eagle";
	QString s2 = "Eagle\n";
	QString s3 = "Eagle ";
	QString s4 = "opeл";

	out << s1.length() << Qt::endl;
	out << s2.length() << Qt::endl;
	out << s3.length() << Qt::endl;
	out << s4.length() << Qt::endl;

	return 0;
}
