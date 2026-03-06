#ifndef IUSER_H
#define IUSER_H

#include <string>

class IUser {
public:
    virtual void receive(std::string msg, std::string from) = 0;
};

#endif
