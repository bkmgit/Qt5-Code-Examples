#include <QVector>
#include <QTextStream>

int main(void) {

	QTextStream out(stdout);

	QVector<int> vals = {1, 2, 3, 4, 5};

	out << "The length of the vector is: " << vals.length() << Qt::endl;

	out << "The first item is: " << vals.first() << Qt::endl;
	out << "The last item is: " << vals.last() << Qt::endl;

	vals.append(6);
	vals.prepend(0);

	out << "Elements: ";

	for (int val : vals) {
		out << val << " ";
	}

	out << Qt::endl;

	return 0;
}
