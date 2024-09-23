#include "Tiger.h"
#include "Monkey.h"
#include "Tianmingren.h"
using namespace std;

int main() {
    vector<string> skills1 = { "����", "�Ļ�" };
    vector<string> skills2 = { "����","����","����","�ع�","ն��" };

    Tiger tiger("���ȷ�", 10000, 100);
    Monkey monkey1("��� A", 10, 1);
    Tianmingren tianmingren("������", 9999, 9999, skills1, skills2);

    cout << tiger.move() << endl;
    cout << monkey1.move() << endl;
    cout << monkey1.speak() << endl;
    cout << tianmingren.move() << endl;
    cout << tianmingren.speak() << endl;
    cout << tiger.speak() << endl;
    cout << tianmingren.attack() << endl;
    cout << tianmingren.transform() << endl << endl;

    cout << "���ֹ��󣬸���״̬Ϊ" << endl;
    tiger.displayStats();
    monkey1.displayStats();
    tianmingren.displayStats();

    return 0;
}