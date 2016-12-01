#pragma once
/*
#include "Frame.h"
#include "ExArray.h"

void main()
{
ExArray<int> arr1(3);
ExArray<char> arr2(4);
ExArray<double> arr3(5);

arr1.addData(2);
arr2.addData('A');
arr3.addData(32.12);

arr1.printData();
arr2.printData();
arr3.printData();

int num1 = 10;
int num2 = 40;

cout << "before : " << num1 << ", " << num2 << endl;
mySwap<int>(num1, num2);
cout << "after : " << num1 << ", " << num2 << endl;

double num1d = 121.11;
double num2d = 10.5;

cout << "before : " << num1d << ", " << num2d << endl;
mySwap<double>(num1d, num2d);
cout << "after : " << num1d << ", " << num2d << endl;

ExArray<int> arr4(5);
arr4.addData(10);

cout << "before ----------- " << endl;
arr1.printData();
arr4.printData();

mySwap<ExArray<int>>(arr1, arr4);

cout << "after ------------ " << endl;
arr1.printData();
arr4.printData();
}
*/
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>

using namespace std;

class Word
{
private:
	string word;
public:
	Word(string word)
	{
		this->word = word;
	}

	string getWord()
	{
		return this->word;
	}
};

int main()
{
	map<char, list<Word>> m;

	list<Word> aList;
	list<Word> bList;

	aList.push_back(Word("apple"));
	aList.push_back(Word("appear"));
	aList.push_back(Word("avoid"));

	bList.push_back(Word("bow"));
	bList.push_back(Word("bread"));
	bList.push_back(Word("bring"));

	m['a'] = aList;
	m['b'] = bList;

	map<char, list<Word>>::const_iterator iter = m.begin();

	while (iter != m.end())
	{
		cout << iter->first << " : " << endl;

		list<Word> temp = iter->second;
		list<Word>::const_iterator iter_list = temp.begin();

		while (iter_list != temp.end())
		{
			Word word = *iter_list;

			cout << word.getWord() << ", ";
			iter_list++;
		}

		cout << "\n===" << endl;
		iter++;
	}

	/*
	map<string, int> m;

	m["seoul"] = 100;
	m["daegu"] = 120;
	m["busan"] = 200;

	cout << "Train to Seoul = " << m["eoul"] << "$" << endl;
	cout << "Train to daegu = " << m["daegu"] << "$" << endl;
	cout << "Train to busan = " << m["busan"] << "$" << endl;
	*/

	return 0;
}


/*
void dump(list<string> &l)
{
list<string>::iterator iter = l.begin();

while (iter != l.end())
{
cout << *iter << endl;
iter++;
}
}

int main()
{
list<string> names;

names.insert(names.begin(), "Konkuk");
names.insert(names.end(), "University");
names.insert(names.end(), "SCLAB");
names.insert(names.end(), "CSY");

dump(names);

cout << "===" << endl;
names.reverse();

dump(names);

return 0;
}
*/

/*
int main()
{
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);

v.insert(v.begin(), 40);
v.insert(v.end(), 50);

for (int i = 0; i < v.size(); i++)
cout << v[i] << endl;

cout << "access index at 1 : " << v.at(1) << endl;

v.erase(v.begin());
v.erase(v.end() - 1);

vector<int>::iterator iter = v.begin();

cout << "access index at 1 with iterator : " << iter[1] << endl;

while (iter != v.end())
{
cout << *iter << endl;
iter++;
}

return 0;
}
*/