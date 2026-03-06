#ifndef IMEDIATOR_H
#define IMEDIATOR_H

#include <string>

class IUser;

class IMediator {
public:
    virtual void sendMessage(std::string msg, IUser* user, std::string channel) = 0;
};

#endif
