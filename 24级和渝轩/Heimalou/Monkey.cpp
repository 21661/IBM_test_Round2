#include "Monkey.h"
using namespace std;

Monkey::Monkey(const string Name, int HP, int MP) : Name(Name), HP(HP), MP(MP) {}

string Monkey::move() const {
    return Name + " ��������!";
}

string Monkey::speak() const {
    return Name + " ������Ooh ooh ah ah!��������";
}

void Monkey::displayStats() const {
    cout << Name << " �� HP��" << HP << "��MP��" << MP << endl;
}