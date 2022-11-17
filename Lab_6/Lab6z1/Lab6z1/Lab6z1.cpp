
#include <iostream>
using namespace std;

void first(int q)
{
	if (q == 1) cout << "Один\n";
	if (q == 2) cout << "Два\n";
	if (q == 3) cout << "Три\n";	
}	

enum class qwerty
{
	NEGATIVE,
	FALSE,
	TOOOLD

};

class HBDexc : public std::exception
{
public:
	HBDexc(qwerty code) : code(code) {};
	const char* what() const throw() override {
		if (code == qwerty::NEGATIVE) return "Вы ввели отрицательное число!";
		if (code == qwerty::TOOOLD) return "Что-то не верится...";
		if (code == qwerty::FALSE) return "Вы ещё не родились";
	}
private:
	qwerty code;
};


int main()
{
    setlocale(LC_ALL, "");
		int q;
		cout << "Введите число от 1 до 3" << endl;
		cin >> q;
	try 
	{
		if (q < 1 or q > 3) throw "Некорректное значение";
		first(q);
	}
	catch (const char* msg) {
		cout << "Warning: " << msg << endl;
	}
/*
	int w;
	cout << "Введите год своего рождения" << endl;
	cin >> w;
	try
	{
		if (w < 1850) throw " Что-то не верится...";
		if (w > 2022) throw "Вы ещё не родились";
		if (w < 0) throw "Вы ввели отрицательное число!";
		if ((w > 1850) and (w < 2022)) cout<<"Спасибо!"<< endl;
	}
	catch (const char* msg) {
		cout << "Ошибка: " << msg << endl;
	}*/

	int r;
	cout << "Введите год своего рождения" << endl;
	cin >> r;
	try {
		if ((r > 1850) and (r < 2022)) cout << "Спасибо!" << endl;
		if (r < 0) throw HBDexc(qwerty::NEGATIVE);
		if (r < 1850) throw HBDexc(qwerty::TOOOLD);
		if (r > 2022) throw HBDexc(qwerty::FALSE);
	}
	catch (HBDexc& msg) {
		cout << msg.what() << endl;
	}
	catch (exception& msg) {
		cout << msg.what() << endl;
	}
	
}

