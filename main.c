#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* This section of code is for the selection menu */

    int selection = 0;  //initially set to an invalid option

    while(selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != 5 && selection != 6)  {
        printf("Select from the following options:\n\n");
        printf("1) Classic rail-fence cipher encryption.\n");
        printf("2) 2-Level rail-fence cipher encryption.\n");
        printf("3) 2-Level rail-fence cipher decryption.\n");
        printf("4) Substitution cipher decryption.\n");
        printf("5) Unseen text substitution cipher decryption.\n");
        printf("6) Close program.\n\n");
        scanf("%d", &selection);    //stores the choice in variable selection
            if(selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != 5 && selection != 6) {
                printf("\nInvalid selection. Please try again.\n\n");
        }
    }

    /* This section of code uses switch cases to decide between various coding fuctions */

    switch(selection)   {   //uses the value of selection to decide what program to run
        case 1: //This section of code is for selection: 1 = classic rail fence cypher encryption
            printf("\nYou have selected: 1) Classic rail-fence cipher encryption.\n\n");
            break;

        case 2: // This section of code is for selection: 2 = 2 level rail fence cypher encryption
            printf("\nYou have selected: 2) 2-Level rail-fence cipher encryption.\n\n");
            break;

        case 3: //This section of code is for selection: 3 = 2 level rail fence cypher decrpytion
            printf("\nYou have selected: 3) 2-Level rail-fence cipher decryption.\n\n");
            break;

        case 4: // This section of code is for selection: 4 = substitution cypher decrpytion
            printf("\nYou have selected: 4) Substitution cipher decryption.\n\n");
            break;

        case 5: // This section of code is for selection: 5 = unseen text substitution cypher
            printf("\nYou have selected: 5) Unseen text substitution cipher decryption.\n\n");
            break;

        case 6: // This section of code is for selection: 6 = close program
            printf("\nYou have selected: 6) Close program.\n");
            printf("Press any key to close program.\n");    //Pressing any key will close the terminal
            break;

        default:        //if no valid selection is made the default will display an error message
            printf("\nERROR\nYour selection: %d is not valid.\n", selection);
            return 0;
    }


    return 0;
}
