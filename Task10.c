#include <stdio.h>
int basicAttack(int dmg, int hp) {
    printf("-> Basic Attack! Deals %d damage.\n", dmg);
    return hp - dmg;
}
int powerStrike(int dmg, int hp) {
    int actual_dmg = (int)(dmg * 2.5);
    printf("-> Power Strike! Deals %d damage.\n", actual_dmg);
    return hp - actual_dmg;
}
int heal(int dmg, int hp) {
    printf("-> Heal! Restores 20 HP.\n");
    return hp + 20;
}

int poisonAttack(int dmg, int hp) {
    int actual_dmg = dmg / 2;
    printf("-> Poison Attack! Deals %d damage. Target is Poisoned!\n", actual_dmg);
    return hp - actual_dmg;
}
int main() {
    int hp = 100;
    int dmg = 25;
    int choice;

    int (*action)(int, int);
    for (int i = 0; i < 3; i++) {
        printf("\n--- Turn %d ---\n", i + 1);
        printf("Enemy HP: %d\n", hp);
        printf("1. Basic Attack\n2. Power Strike\n3. Heal\n4. Poison Attack\n");
        printf("Select action (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: action = basicAttack; break;
            case 2: action = powerStrike; break;
            case 3: action = heal; break;
            case 4: action = poisonAttack; break;
            default:
                printf("Invalid choice! Defaulting to Basic Attack.\n");
                action = basicAttack;
        }

        hp = action(dmg, hp);
    }

    printf("\nBattle Over! Final Enemy HP: %d\n", hp);

    return 0;
}
