#include "ChatMediator.h"
#include "User.h"

int main() {

    ChatMediator mediator;

    User user1("Ali", &mediator, "tech");
    User user2("Dana", &mediator, "tech");
    User user3("Max", &mediator, "games");

    mediator.addUser("tech", &user1);
    mediator.addUser("tech", &user2);
    mediator.addUser("games", &user3);

    user1.send("Hello Tech channel");

}
