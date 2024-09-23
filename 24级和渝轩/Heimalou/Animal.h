#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

/*
public�����Ա������еĺ���������ĺ�������Ԫ�������ʣ�Ҳ�����ɸ���Ķ�����ʡ�
protected�����Ա������еĺ���������ĺ�������Ԫ�������ʣ����������ɸ���Ķ�����ʡ�
private�����Ա������еĺ�������Ԫ�������ʣ���������������ĺ���������Ķ�����ʡ�
private�ؼ��ֵ��������ڸ��õ���������ڲ�ʵ�֡�
*/
using namespace std;

class Animal {
public:
    string Name;
    int HP;
    int MP;
    virtual string move() const = 0;
    virtual string speak() const = 0;
    virtual ~Animal() {}
};

#endif