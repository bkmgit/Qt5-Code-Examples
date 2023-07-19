#include <QTextStream>
#include <QDateTime>
#include <ctime>

int main(void) {

	QTextStream out(stdout);

	time_t t = time(0);
	out << t << Qt::endl;

	QDateTime dt;
	dt.setSecsSinceEpoch(t);
	out << dt.toString() << Qt::endl;

	QDateTime cd = QDateTime::currentDateTime();
	out << cd.toSecsSinceEpoch() << Qt::endl;

	return 0;
}
