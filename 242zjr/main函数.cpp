#include"Monkey.h"
#include"SunWukong.h"

int main()
{
	Monkey Feature;
	Feature.set_app("ë��Ũ�ܶ����й�����֫�޳�������");
	Feature.set_abi("���������������˫��");
	SunWukong Black_Wukong;
	Black_Wukong.set_mag("��ʮ���䣬���۽�");
	cout << "����յ���ò��" << Feature.get_app() << endl;
	cout << "����յ�������" << Feature.get_abi() << endl;
	cout << "����յ���ͨ��" << Black_Wukong.get_mag() << endl;
	return 0;
}