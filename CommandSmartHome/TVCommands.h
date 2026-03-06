#ifndef TVCOMMANDS_H
#define TVCOMMANDS_H

#include "ICommand.h"
#include "Devices.h"

class TVOnCommand : public ICommand {
    TV* tv;
public:
    TVOnCommand(TV* t) : tv(t) {}
    void execute() override { tv->on(); }
    void undo() override { tv->off(); }
};

class TVOffCommand : public ICommand {
    TV* tv;
public:
    TVOffCommand(TV* t) : tv(t) {}
    void execute() override { tv->off(); }
    void undo() override { tv->on(); }
};

#endif
