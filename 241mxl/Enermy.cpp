#include "monkey.h"
#include "enermy.h"
#include <iostream>
bool Enermy::dect_eblood(){
	if (eblood <= 0)
		return false;
	else
		return true;
}
void Enermy::show()
{
	using std::cout;
	using std::endl;
	cout <<"����������" << pow << endl;
	cout << "����Ѫ����" << eblood << endl;
}
void Enermy::showblood()
{

	if (eblood < 0)
		eblood = 0;
	using std::cout;
	using std::endl;
	cout << "����Ѫ�����У� ";
	cout << eblood << endl;
	std::cin.get();
}



//void KALAMI::Enermy_attack(Monkey& mo)
//{
//	mo.blood -= pow;
//}
//void Boss::Enermy_attack(Monkey& mo)
//{
//	mo.blood -= pow;
//}