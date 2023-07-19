#include <QTextStream>
#include <QDate>

int main(void) {

	QTextStream out(stdout);

	QDate cd = QDate::currentDate();

	out << "Gregorian date for today: " << cd.toString(Qt::ISODate) << Qt::endl;
	out << "Julian day for today: " << cd.toJulianDay() << Qt::endl;

	return 0;
}
