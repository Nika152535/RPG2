#include <iostream>
#include "Enemy/Enemy.h"
#include "Player/Player.h"
#include "Combat/Combat.h"
#include <queue>

using namespace std;

int main() {
    Player *player = new Player("--Player without light--", 100, 125, 100, 150); //Nombre, vida, ataque, defensa, velocidad.
    Enemy *enemy = new Enemy("--Malenia--", 140, 150, 100, 130);
    Enemy *enemy2 = new Enemy("--Radahn--", 160, 70, 100, 80);

    vector<Character*> participants;
    participants.push_back(player);
    participants.push_back(enemy);
    participants.push_back(enemy2);

    Combat* combat = new Combat(participants);
    combat->doCombat();

    delete player;
    delete enemy;
    delete enemy2;
    delete combat;

    return 0;
}
