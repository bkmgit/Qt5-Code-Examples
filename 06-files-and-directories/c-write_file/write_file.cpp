#include <QTextStream>
#include <QFile>

int main(void) {

	QTextStream out{stdout};

	QString filename = "distros.txt";
	QFile f{filename};

	if (f.open(QIODevice::WriteOnly)) {

		QTextStream out{&f};
		out << "Xubuntu" << Qt::endl;
		out << "Arch" << Qt::endl;
		out << "Debian" << Qt::endl;
		out << "Redhat" << Qt::endl;
		out << "Slackware" << Qt::endl;

	} else {
		qWarning("Could not open file");
	}

	return 0;
}
