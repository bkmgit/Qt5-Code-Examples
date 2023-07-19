#include <QTextStream>
#include <QString>
#include <QStringView>

int main(void) {

	QTextStream out(stdout);

	QString str = { "The night train" };

	out << str.right(5) << Qt::endl;
	out << str.left(9) << Qt::endl;
	out << str.mid(4, 5) << Qt::endl;

	QStringView str2view{ u"The big apple" };
	QStringView sub = str2view.sliced(0,7);

	out << sub.toString() << Qt::endl;

	return 0;
}
