#include <QTextStream>
#include <QString>
#include <QStringList>

int main(void) {

	QTextStream out(stdout);

	QString string = "coin, book, cup, pencil, clock, bookmark";
	QStringList items = string.split(",");
	QStringListIterator it(items);

	while (it.hasNext()) {

		out << it.next().trimmed() << Qt::endl;

	}

	return 0;
}
