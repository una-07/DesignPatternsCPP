#ifndef USER_H
#define USER_H

#include "IUser.h"
#include "IMediator.h"
#include <iostream>

class User : public IUser {

    IMediator* mediator;
    std::string name;
    std::string channel;

public:

    User(std::string n, IMediator* m, std::string c)
        : name(n), mediator(m), channel(c) {}

    void send(std::string msg) {
        mediator->sendMessage(msg, this, channel);
    }

    void receive(std::string msg, std::string from) override {
        std::cout << name << " received: " << msg << "\n";
    }
};

#endif
