#include <QTextStream>
#include <QMap>

int main(void) {

	QTextStream out(stdout);

	QMap<QString, int> items = { {"coins", 5}, {"books", 3} };

	items.insert("bottles", 7);

	QList<int> values = items.values();

	out << "Values:" << Qt::endl;

	for (int val : values) {
		out << val << Qt::endl;
	}

	QList<QString> keys = items.keys();

	out << "Keys:" << Qt::endl;

	for (QString key : keys) {
		out << key << Qt::endl;
	}

	QMapIterator<QString, int> it(items);

	out << "Pairs:" << Qt::endl;

	while (it.hasNext()) {
		it.next();
		out << it.key() << ":" << it.value() << Qt::endl;
	}

	return 0;
}
