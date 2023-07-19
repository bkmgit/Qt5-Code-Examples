#include <QTextStream>
#include <QString>

int main() {

	QTextStream out(stdout);

	QString s1 = "There are %1 white roses";
	int n = 12;

	out << s1.arg(n) << Qt::endl;

	QString s2 = "The tree is %1 m high";
	double h = 5.65;

	out << s2.arg(h) << Qt::endl;

	QString s3 = "We have %1 lemons and %2 oranges";
	int ln = 12;
	int on = 4;

	out << s3.arg(ln).arg(on) << Qt::endl;

	return 0;
}

