#include "Tiger.h"
using namespace std;

Tiger::Tiger(const string Name, int HP, int MP) : Name(Name), HP(HP), MP(MP) {}

string Tiger::move() const {
    return Name + " ��������";
}

string Tiger::speak() const {
    return Name + " ������Haoooooo�����ĺ��";
}

void Tiger::displayStats() const {
    cout << Name << " �� HP��" << HP << "��MP��" << MP << endl;
}