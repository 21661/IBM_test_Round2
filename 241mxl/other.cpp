#include "monkey.h"
#include "enermy.h"
#include<iostream>

void gate(Destiner& des, KALAMI& ka, int ch)
{
	switch (ch)
	{
	case 1:
		des.basic_hit(ka);
		ka.showblood();
		break;
	case 2:
		des.mag_skill_level1(ka);
		ka.showblood();
		break;
	case 3:
		des.phy_skill_level1(ka);
		ka.showblood();
	default:
		break;
	}
}
void gate(BigBroMONKEY& bro, Boss& bo, int ch)
{
	switch (ch)
	{
	case 1:
		bro.basic_hit(bo);
		bo.showblood();
		break;
	case 2:
		bro.mag_skill_level2(bo);
		bo.showblood();
		break;
	case 3:
		bro.phy_skill_level2(bo);
		bo.showblood();
		break;
	case 4:
		bro.BIGBANG(bo);
		bo.showblood();
		break;
	}
}
bool detect_enermy_dead(KALAMI &ka)
{
	if(!ka.dect_eblood())
	{
		std::cout << "��ɱ����С�����ף�����\a";
		std::cout << std::endl << "��Ӯ�ˣ�\a";
		return 1;
	}
	return 0;
}
bool detect_enermy_dead(Boss &bo)
{
	if (!bo.dect_eblood())
	{
		std::cout << "��ɱ����boss������\a";
		std::cout << std::endl << "��Ӯ�ˣ�\a";
		return 1;
		
	}
	return 0;
}
void press()
{
	using std::cin;
	std::cout << "�񰴻س�����ʥ������";
	cin.get();cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get(); cin.get();
}

void use_drug(Monkey &mo,int ch)
{
	switch (ch)
	{
	case 1:
		mo.heal_blood();
		break;
	case 2:
		mo.add_magic();
		break;
	case 0:
		break;
	}
}