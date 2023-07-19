#include <QTextStream>
#include <QList>
#include <algorithm>

int main(void) {

	QTextStream out(stdout);

	QList<QString> authors = {"Balzac", "Tolstoy",
		"Gulbranssen", "London"};

	for (int i=0; i<authors.length(); ++i) {

		out << authors.at(i) << Qt::endl;

	}

	authors << "Galsworthy" << "Sienkiewicz";

	out << "***********************" << Qt::endl;

	std::sort(authors.begin(), authors.end());

	out << "Sorted:" << Qt::endl;
	for (QString author : authors) {

		out << author << Qt::endl;

	}

	return 0;
}
