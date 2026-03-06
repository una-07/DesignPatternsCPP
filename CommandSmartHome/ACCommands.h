#ifndef ACCOMMANDS_H
#define ACCOMMANDS_H

#include "ICommand.h"
#include "Devices.h"

class ACOnCommand : public ICommand {
    AirConditioner* ac;
public:
    ACOnCommand(AirConditioner* a) : ac(a) {}
    void execute() override { ac->on(); }
    void undo() override { ac->off(); }
};

class ACOffCommand : public ICommand {
    AirConditioner* ac;
public:
    ACOffCommand(AirConditioner* a) : ac(a) {}
    void execute() override { ac->off(); }
    void undo() override { ac->on(); }
};

#endif
