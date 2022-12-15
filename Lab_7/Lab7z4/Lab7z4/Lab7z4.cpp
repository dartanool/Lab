#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Settings
{
private:
	static map <string, int> map;

public:

	static void add(string q, int w)
	{
		map.insert(make_pair(q, w));
	}

	static int get(string q)
	{
		return map[q];
	}

	static void print()
	{
		cout << "map: " << endl;
		for (auto i = map.begin(); i != map.end(); i++) {

			cout << i->first << " = " << i->second << "\n";
		}
	}


};

void print(vector<float> v)
{
	cout << "Vector: ";
	for (float n : v) cout << n << " ";
	cout << endl;
}

int main()
{
	vector<float> v = { 1.1,2.2,3.3,4.4,5.5 };
	print(v);

	auto iter = v.cbegin();
	v.emplace(iter + 3, 1.2);
	print(v);

	v.pop_back();
	print(v);


	/*
	Settings q("wertyuio", 11);
	q.add("sdf", 21);
	q.add("fyvh", 13);
	q.print();
	cout<<  q.get("fyvh")<< endl;*/


	Settings mp;
	mp.add("qwert", 567);
	mp.add("qwerty", 789);
	mp.print();
	cout <<  mp.get("qwert")<<endl;
}