#include <stdio.h>
int main(){
    char start, end;
    printf("Enter the starting alphabet of a country: ");
    scanf(" %c", &start);  // Added space before %c

    switch (start){
        case 'A':
        case 'a':
            printf("Enter last alphabet of country: ");
            scanf(" %c", &end);  // Added space before %c
            switch (end){
                case 'A':
                case 'a':
                    printf("\nAlbania\nAlgeria\nAndorra\nAngola\nAntigua\nArgentina\n");
                    break;  
                default:
                    printf("No such country\n");
                    break;
            }
            break;  // Break after case A to prevent fall-through

        case 'B':
        case 'b':
            printf("Enter last alphabet of country: ");
            scanf(" %c", &end);  // Added space before %c
            switch (end){
                case 'A':
                case 'a':
                    printf("\nBolivia\nBotswana\nBurma\n");
                    break;
                default:
                    printf("No such country\n");
                    break;
            }
            break;  // Break after case B

        default:
            printf("Invalid Alphabet\n");
            break;
    }

    return 0;
}

