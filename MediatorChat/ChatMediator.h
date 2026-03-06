#ifndef CHATMEDIATOR_H
#define CHATMEDIATOR_H

#include "IMediator.h"
#include "IUser.h"
#include <map>
#include <vector>

class ChatMediator : public IMediator {

    std::map<std::string, std::vector<IUser*>> channels;

public:

    void addUser(std::string channel, IUser* user) {
        channels[channel].push_back(user);
    }

    void sendMessage(std::string msg, IUser* sender, std::string channel) override {

        for (auto user : channels[channel]) {
            if (user != sender)
                user->receive(msg, "User");
        }
    }
};

#endif
