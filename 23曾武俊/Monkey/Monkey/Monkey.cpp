// Monkey.cpp
#include "Monkey.h"
#include <iostream>

// ���캯��
Monkey::Monkey(const std::string& name, int age) : name(name), age(age) {}

// ��Ա����
void Monkey::eat(const std::string& food) {
    std::cout << name << " is eating " << food << "." << std::endl;
}

void Monkey::sleep() {
    std::cout << name << " is sleeping." << std::endl;
}

void Monkey::display() const {
    std::cout << "Monkey's Name: " << name << ", Age: " << age << std::endl;
}
