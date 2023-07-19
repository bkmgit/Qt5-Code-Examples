#include <QTextStream>
#include <QDate>
#include <QLocale>

int main(void) {

	QTextStream out(stdout);

	QDate cd = QDate::currentDate();
	int wd = cd.dayOfWeek();

	QLocale locale(QLocale("en_US"));

	out << "Today is " << locale.dayName(wd) << Qt::endl;
	out << "Today is " << locale.dayName(wd, QLocale::ShortFormat) << Qt::endl;

	return 0;
}
