#include <QTextStream>
#include <QTime>

int main(void) {

	QTextStream out(stdout);

	QTime ct = QTime::currentTime();

	out << "The time is " << ct.toString("hh:mm:ss.zzz") << Qt::endl;
	out << "The time is " << ct.toString("h:m:s a") << Qt::endl;
	out << "The time is " << ct.toString("H:m:s A") << Qt::endl;
	out << "The time is " << ct.toString("h:m AP") << Qt::endl;

	return 0;
}
