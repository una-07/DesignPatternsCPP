#ifndef DEVICES_H
#define DEVICES_H

#include <iostream>

class Light {
public:
    void on() { std::cout << "Light ON\n"; }
    void off() { std::cout << "Light OFF\n"; }
};

class AirConditioner {
public:
    void on() { std::cout << "AC ON\n"; }
    void off() { std::cout << "AC OFF\n"; }
};

class TV {
public:
    void on() { std::cout << "TV ON\n"; }
    void off() { std::cout << "TV OFF\n"; }
};

#endif
