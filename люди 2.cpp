#include <iostream>
#include<string>
using namespace std;

class chelovek
{
public:
	int age;
	int rost;
	string name;
	string surname;
	void one();
	void two();
};

void chelovek::one()
{
cout << "введите имя"<<endl;
	cin >> name;
	cout << "введите фамилию" << endl;
	cin >> surname;
	cout << "введите возраст" << endl;
	cin >> age;
	cout << "введите рост" << endl;
	cin >> rost;
	
}

void chelovek::two()
{
	cout << name << " " << surname << " " << age << " " << rost<<endl;
}
int main()
{
	setlocale(LC_ALL, "ru");
	chelovek a;
	a.one();
	a.two();
	
	
}