#include<iostream>
using namespace std;
class Animal
{
public:
	int age;
	string food;
};

class Monkey:public Animal
{
public:
	
	void SetData(int age, string food, string name) {
		this->age = age;
		this->food = food;
		this->name = name;
	}
	string name;
	void Show() {
		cout << "���䣺" << age << " " << "ʳ�" << food << " " << "���֣�" << name << endl;
	}
};

class MonkeyKing:public Monkey
{
public:
	string MagicalPower;
	void MagicalShow() {
		cout << "����������" << MagicalPower << endl;
	}
};

int main() {
	Monkey monkey;//��ͨ����
	monkey.SetData(10, "�㽶", "����");
	monkey.Show();
	cout << "------------" << endl;
	MonkeyKing King;//�����
	King.SetData(500, "����", "�����");
	King.MagicalPower = "��ʮ����";
	King.Show();
	King.MagicalShow();
	
	system("pause");
	return 0;
}