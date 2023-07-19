#include <QTextStream>
#include <QString>

int main(void) {

	QTextStream out(stdout);

	int digits = 0;
	int letters = 0;
	int spaces = 0;
	int puncts = 0;

	QString str { "7 white, 3 red roses." };

	for (QChar s: str) {

		if (s.isDigit()) {
			digits++;
		} else if (s.isLetter()) {
			letters++;
		} else if (s.isSpace()) {
			spaces++;
		} else if (s.isPunct()) {
			puncts++;
		}
	}

	out << QString("There are %1 characters").arg(str.length()) << Qt::endl;
	out << QString("There are %1 letters").arg(letters) << Qt::endl;
	out << QString("There are %1 digits").arg(digits) << Qt::endl;
	out << QString("There are %1 spaces").arg(spaces) << Qt::endl;
	out << QString("There are %1 punctuation characters").arg(puncts) << Qt::endl;

	return 0;
}
