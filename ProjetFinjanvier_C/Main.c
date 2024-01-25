#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct PlayerStats {
    char Name[50];
    int Health;
    int Damage;
    int MultiplicatorX;

};



struct PlayerStats player;


void SelectHeavy(int Health, int Damage, int MultiplicatorX) {
    printf("\nheavy soldier successfully selected\n");
    Health = +50;
    Damage = +10;
    MultiplicatorX = +1;

}
void SelectLight(int Health, int Damage, int MultiplicatorX) {
    printf("\nlight soldier successfully selected\n");
    Health = +10;
    Damage = +5;
    MultiplicatorX = +4;
}

void SelectSP(int Health, int Damage, int MultiplicatorX) {
    printf("\nSuperMan is selected\n");
    Health = +100;
    Damage = +10;
    MultiplicatorX = +4;
}

enum soldiertype {
    Heavy = 1,
    Light,
    SuperMan,
};

void displayMenu() {
    printf("\n1/ an heavy soldier\n");
    printf("2/ a light soldier\n");
    printf("3/ The SUPERMAN\n");
}

int main() {
    enum soldiertype Menuchoice;
    int choice;

    struct PlayerStats player;

    player.Health = 100;
    player.Damage = 5;
    player.MultiplicatorX = 1;
    

    displayMenu();

    printf("\nChoose an option: ");
    scanf(" %d", &choice);

    Menuchoice = (enum soldiertype)choice;

    switch (Menuchoice) {
    case Heavy:
        printf("heavy");
        SelectHeavy(&player);
        break;

    case Light:
        printf("light");
        SelectLight(&player);
        break;

    case SuperMan:
        printf("SuperMan");
        SelectSP(&player);
        break;

    default:
        printf("ERROR!");
    }

    return 0;
}
