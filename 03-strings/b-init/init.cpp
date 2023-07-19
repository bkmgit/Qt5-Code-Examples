#include <QTextStream>
#include <QString>

int main(void) {
	QTextStream out(stdout);
	QString str1 = "The night train";
	out << str1 << Qt::endl;
	
	QString str2("A yellow rose");
	out << str2 << Qt::endl;
	
	QString str3 {"An old falcon"};
	out << str3 << Qt::endl;
	
	std::string s1 = "A blue sky";
	QString str4 = s1.c_str();
	out << str4 << Qt::endl;

	std::string s2 = "A thick fog";
	QString str5 = QString::fromLatin1(s2.data(), s2.length());
	out << str5 << Qt::endl;

	char s3[] = "A deep forest";
	QString str6(s3);
	out << str6 << Qt::endl;

	return 0;
}
