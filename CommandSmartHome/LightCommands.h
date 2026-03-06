#ifndef LIGHTCOMMANDS_H
#define LIGHTCOMMANDS_H

#include "ICommand.h"
#include "Devices.h"

class LightOnCommand : public ICommand {
    Light* light;
public:
    LightOnCommand(Light* l) : light(l) {}
    void execute() override { light->on(); }
    void undo() override { light->off(); }
};

class LightOffCommand : public ICommand {
    Light* light;
public:
    LightOffCommand(Light* l) : light(l) {}
    void execute() override { light->off(); }
    void undo() override { light->on(); }
};

#endif
