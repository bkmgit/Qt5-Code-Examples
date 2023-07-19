#include <QTextStream>
#include <QLocale>
#include <QTime>

int main(void) {

	QTextStream out(stdout);

	QTime ct = QTime::currentTime();

	out << "The time is " << ct.toString(Qt::TextDate) << Qt::endl;
	out << "The time is " << ct.toString(Qt::ISODate) << Qt::endl;
	out << "The time is " << ct.toString(QLocale::system().timeFormat(QLocale::ShortFormat)) << Qt::endl;
	out << "The time is " << ct.toString(QLocale::system().timeFormat(QLocale::LongFormat)) << Qt::endl;

	// set default locale, if not set get default
        QLocale::setDefault(QLocale::German);
	QLocale defaultLocale; // Construct default locale
	out << "The time is " << ct.toString(defaultLocale.timeFormat(QLocale::ShortFormat)) << Qt::endl;
	out << "The time is " << ct.toString(defaultLocale.timeFormat(QLocale::LongFormat)) << Qt::endl;
	out << "The time is " << ct.toString(QLocale::system().timeFormat()) << Qt::endl;
	out << "The time is " << ct.toString(defaultLocale.timeFormat()) << Qt::endl;

	return 0;
}
