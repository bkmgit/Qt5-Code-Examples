#include <QTextStream>
#include <QDir>

int main(void) {

	QTextStream out{stdout};

	out << "Current path: " << QDir::currentPath() << Qt::endl;
	out << "Home path: " << QDir::homePath() << Qt::endl;
	out << "Temporary path: " << QDir::tempPath() << Qt::endl;
	out << "Root path: " << QDir::rootPath() << Qt::endl;

	return 0;
}
