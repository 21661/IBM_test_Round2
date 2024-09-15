// Monkey.h
#ifndef MONKEY_H
#define MONKEY_H

#include <string>

class Monkey {
public:
    // ���캯��
    Monkey(const std::string& name, int age);

    // ��Ա����
    void eat(const std::string& food);
    void sleep();
    void display() const;

protected:
    std::string name;
    int age;
};

#endif // MONKEY_H
