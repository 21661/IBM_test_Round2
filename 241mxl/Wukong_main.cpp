#include "monkey.h"
#include "enermy.h"
#include <iostream>
using namespace std;
void gate(Destiner& des, KALAMI & ka, int ch);
void gate(BigBroMONKEY& bro, Boss& bo, int ch);
bool detect_enermy_dead(Boss &bo);
bool detect_enermy_dead(KALAMI &ka);
void use_drug(Monkey& mo,int ch);
int main()
{
	int choice;
	Monkey Player;
	Destiner player(Player);
	player.Set_des(player);
	KALAMI kalami;
	
	//��һ��
	player.show();
	kalami.show();
	cout << "��һ�أ����������ˣ�" << endl;
	while (player.dect_blood())
	{
		cout << "��ѡ���Ƿ�ʹ��ҩ�1��ҩ 2��¶ 0���ã�";
		cin >> choice;
		use_drug(player,choice);
		cout << "��ѡ����Ĺ�����ʽ��1����������2ħ����3��������\a" << endl;
		cin >> choice;

		gate(player, kalami, choice);
		if (detect_enermy_dead(kalami))
			break;
		player.sub_blood(kalami);
		
		player.showblood();
		if (!player.dect_blood())
		{
			cout << "�����ˣ���Ϸ������\a";
			return 0;
		}
	}
	cin.get();
	cin.get();
	//�ڶ���
	cout << endl;
	cout<<"�ڶ��أ����������ʥ��\a";
	Boss boss;
	BigBroMONKEY player1(player);
	player1.Set_big(player1);
	player1.show();
	boss.show();
	while (player1.dect_blood())
	{
		cout << "��ѡ���Ƿ�ʹ��ҩ�1��ҩ 2��¶ 0���ã�";
		cin >> choice;
		use_drug(player1, choice);
		cout << "��ѡ����Ĺ�����ʽ��1����������2ħ����3������,4���У�\a";
		cin >> choice;
		gate(player1,boss,choice);
		if (detect_enermy_dead(boss))
			break;
		player1.sub_blood(boss);
		player1.showblood();
		if (!player1.dect_blood())
		{
			cout << "�����ˣ���Ϸ������";
			return 0;
		}
	}
	cout << "��Ϸ����\a";
	cin.get();
	cin.get();
	return 0;
}
