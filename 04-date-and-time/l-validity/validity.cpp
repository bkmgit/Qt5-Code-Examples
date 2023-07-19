#include <QTextStream>
#include <QDate>

int main(void) {

	QTextStream out(stdout);

	QList<QDate> dates {
		QDate(2020, 5, 11), QDate(2020, 8, 1),
			QDate(2020, 2, 30)
	};

	for (int i=0; i < dates.length(); i++) {
		if (dates.at(i).isValid()) {
			out << "Date " << i+1 << " is a valid date" << Qt::endl;
		} else {
			out << "Date " << i+1 << " is not a valid date" << Qt::endl;
		}
	}
	return 0;
}
