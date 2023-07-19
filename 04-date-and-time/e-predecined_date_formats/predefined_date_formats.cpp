#include <QTextStream>
#include <QLocale>
#include <QDate>

int main(void) {

	QTextStream out(stdout);

	QDate cd = QDate::currentDate();

	out << "Today is " << cd.toString(Qt::TextDate) << Qt::endl;
	out << "Today is " << cd.toString(Qt::ISODate) << Qt::endl;
	out << "Today is " << cd.toString(QLocale::system().dateFormat(QLocale::ShortFormat)) << Qt::endl;
	out << "Today is " << cd.toString(QLocale::system().dateFormat(QLocale::LongFormat)) << Qt::endl;

	// set default locale, if not set get default
        QLocale::setDefault(QLocale::German);
	QLocale defaultLocale; // Construct default locale
	out << "Today is " << cd.toString(defaultLocale.dateFormat(QLocale::ShortFormat)) << Qt::endl;
	out << "Today is " << cd.toString(defaultLocale.dateFormat(QLocale::LongFormat)) << Qt::endl;
	out << "Today is " << cd.toString(QLocale::system().dateFormat()) << Qt::endl;
	out << "Today is " << cd.toString(defaultLocale.dateFormat()) << Qt::endl;

	return 0;
}
