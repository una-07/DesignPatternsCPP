#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include "ICommand.h"
#include <vector>

class MacroCommand : public ICommand {
    std::vector<ICommand*> commands;

public:
    MacroCommand(std::vector<ICommand*> cmds) : commands(cmds) {}

    void execute() override {
        for (auto c : commands)
            c->execute();
    }

    void undo() override {
        for (auto c : commands)
            c->undo();
    }
};

#endif
