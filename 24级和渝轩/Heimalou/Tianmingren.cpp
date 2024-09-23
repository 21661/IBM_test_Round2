#include "Tianmingren.h"
using namespace std;

Tianmingren::Tianmingren(const string Name, int HP, int MP,
    const vector<string> skills1, const vector<string> skills2) :
    Monkey(Name, HP, MP), MagicSkills(skills1), StickSkills(skills2) {}

string Tianmingren::speak() const {
    return Name + " ˵�������գ����������Ҳ����";
}

string Tianmingren::transform() const {
    if (!MagicSkills.empty()) {
        return Name + " ʹ����ʮ���䣬����� " + MagicSkills.front();
    }
    else {
        return Name + " û���κμ��ܣ�";
    }
}

string Tianmingren::attack() const {
    if (!StickSkills.empty()) {
        return Name + " ʹ�ý𹿰������� " + StickSkills.front() + " ����";
    }
    else {
        return Name + " û���κι�����";
    }
}

void Tianmingren::displayStats() const {
    cout << Name << " �� HP��" << HP << "��MP��" << MP << endl;
}