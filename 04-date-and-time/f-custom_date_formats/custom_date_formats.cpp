#include <QTextStream>
#include <QDate>

int main(void) {

	QTextStream out(stdout);

	QDate cd = QDate::currentDate();

	out << "Today is " << cd.toString("yyyy-MM-dd") << Qt::endl;
	out << "Today is " << cd.toString("yy/M/dd") << Qt::endl;
	out << "Today is " << cd.toString("d. M. yyyy") << Qt::endl;
	out << "Today is " << cd.toString("d-MMMM-yyyy") << Qt::endl;

	return 0;
}
