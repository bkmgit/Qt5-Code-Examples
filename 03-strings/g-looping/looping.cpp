#include <QTextStream>
#include <QString>

int main(void) {

	QTextStream out(stdout);

	QString str { "There are many stars." };

	for (QChar qc: str) {
		out << qc << " ";
	}

	out << Qt::endl;

	for (QChar *it=str.begin(); it!=str.end(); ++it) {
		out << *it << " ";
	}

	out << Qt::endl;

	for (int i = 0; i < str.size(); ++i) {
		out << str.at(i) << " ";
	}

	out << Qt::endl;

	return 0;
}
