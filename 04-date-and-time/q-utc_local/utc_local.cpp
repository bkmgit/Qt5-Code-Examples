#include <QTextStream>
#include <QDateTime>

int main(void) {

	QTextStream out(stdout);

	QDateTime cdt = QDateTime::currentDateTime();

	out << "Universal datetime: " << cdt.toUTC().toString() << Qt::endl;
	out << "Local datetime: " << cdt.toLocalTime().toString() << Qt::endl;

	return 0;
}
