#include <QTextStream>
#include <QString>

int main(void) {
	QTextStream out(stdout);
	QString a { "love"}; 
	a.append(" chess");
	a.prepend("I ");
	out << a << Qt::endl;
	out << "The a string has " << a.length()
		<< " characters" << Qt::endl;
	out << a.toUpper() << Qt::endl;
	out << a.toLower() << Qt::endl;

	return 0;
}

