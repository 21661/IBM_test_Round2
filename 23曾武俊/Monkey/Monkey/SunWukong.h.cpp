// SunWukong.cpp
#include "SunWukong.h"
#include <iostream>

// ���캯��
SunWukong::SunWukong(const std::string& name, int age, int power)
    : Monkey(name, age), power(power) {}

// ��Ա����
void SunWukong::useMagic(const std::string& magic) {
    std::cout << name << " uses " << magic << " with power " << power << "." << std::endl;
}

void SunWukong::display() const {
    Monkey::display();
    std::cout << "Sun Wukong's Power: " << power << std::endl;
}
