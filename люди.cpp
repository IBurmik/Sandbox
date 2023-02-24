#include<iostream>
#include <string>
using namespace std;
class chelovek
{
public:
	int age;
	int rost;
	string name;
	string surname;
	
};

int main()
{
	setlocale(LC_ALL, "ru");
	chelovek one;
	cout << "первый человек" << endl;
	cout << "введите имя" << endl;
	cin >> one.name;
	cout << "введите фамилию" << endl;
	cin >> one.surname;
	cout << "введите возраст" << endl;
	cin >> one.age;
	cout << "введите рост" << endl;
	cin >> one.rost;


	chelovek two;
	cout <<endl<< "второй человек" << endl ;
	cout << "введите имя" << endl;
	cin >> two.name;
	cout << "введите фамилию" << endl;
	cin >> two.surname;
	cout << "введите возраст" << endl;
	cin >> two.age;
	cout << "введите рост" << endl;
	cin >> two.rost;


}