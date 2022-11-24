#include <iostream>
#include <string>
using namespace std;

void print(string q) 
{
	cout << q << endl;
}

int main()
{
	cout << "Please, in English " << endl;
	string q;
	cin >> q;
	print(q.substr(2, 3));
	
	int index = q.find("a");
	print(to_string(index));
	if (index == 0) cout << "Символа а не найдено" << endl;

}

