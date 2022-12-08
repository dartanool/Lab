#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool qwerty(string q)
{
	regex w("[A-Z][a-z]*?");
	return regex_search(q, w);
}


int main()
{
	setlocale(LC_ALL, " ");
	cout << "Please, write your name" <<endl;
	string q;
	cin >> q;
	if (qwerty(q)) cout << q << endl;
	else cout << "Error " << endl;

	smatch result;
	string e= "апсрмоилд xyremail33@mail.ru чаапмриол vyrafmail33@mail.ru спмрило 123dcyremail33@mail.ru ";
	regex regular("([\\w-]+)(@)([\\w-]+)(\.)([a-z]{2,5})");
	auto words_begin = sregex_iterator(e.begin(), e.end(), regular);
	auto words_end = sregex_iterator();

	for (sregex_iterator it = words_begin; it != words_end; ++it)
		cout << it->str() << endl;
}

