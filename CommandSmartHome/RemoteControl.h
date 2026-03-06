#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "ICommand.h"
#include <stack>
#include <iostream>

class RemoteControl {
    std::stack<ICommand*> history;
    std::stack<ICommand*> redoStack;

public:

    void pressButton(ICommand* command) {
        command->execute();
        history.push(command);
    }

    void undo() {
        if (history.empty()) {
            std::cout << "Nothing to undo\n";
            return;
        }

        ICommand* cmd = history.top();
        history.pop();
        cmd->undo();
        redoStack.push(cmd);
    }

    void redo() {
        if (redoStack.empty()) {
            std::cout << "Nothing to redo\n";
            return;
        }

        ICommand* cmd = redoStack.top();
        redoStack.pop();
        cmd->execute();
        history.push(cmd);
    }
};

#endif
