#include <stdio.h>

int main(int argc, char *argv[]) {
    // Vérifiez s'il y a exactement deux arguments (le nom du programme compte comme le premier)
    if (argc != 3) {
        printf("Usage: %s <argument1> <argument2>\n", argv[0]);
        return 1; // Quitte le programme avec un code d'erreur
    }

    // Récupérez les arguments et affichez-les
    char *argument1 = argv[1];
    char *argument2 = argv[2];

    printf("Argument 1: %s\n", argument1);
    printf("Argument 2: %s\n", argument2);

    return 0; // Tout s'est bien passé
}

