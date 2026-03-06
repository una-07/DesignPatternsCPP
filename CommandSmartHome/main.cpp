#include "Devices.h"
#include "LightCommands.h"
#include "ACCommands.h"
#include "TVCommands.h"
#include "MacroCommand.h"
#include "RemoteControl.h"

int main() {

    Light light;
    AirConditioner ac;
    TV tv;

    LightOnCommand lightOn(&light);
    ACOnCommand acOn(&ac);
    TVOnCommand tvOn(&tv);

    RemoteControl remote;

    remote.pressButton(&lightOn);
    remote.pressButton(&acOn);

    remote.undo();
    remote.redo();

    std::vector<ICommand*> partyMode = { &lightOn, &acOn, &tvOn };
    MacroCommand party(partyMode);

    remote.pressButton(&party);

}
