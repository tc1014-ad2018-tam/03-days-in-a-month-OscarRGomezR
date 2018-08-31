#include <iostream>

int main() {

    int number;

    printf("\n\n List of Months:" );
    printf("\n 1. January" );
    printf("\n 2. February ");
    printf("\n 3. March" );
    printf("\n 4. April" );
    printf("\n 5. May" );
    printf("\n 6. June" );
    printf("\n 7. July" );
    printf("\n 8. August" );
    printf("\n 9. September" );
    printf("\n 10. October" );
    printf("\n 11. November" );
    printf("\n 12. December" );
    printf("\n Give me the number of the Month: ");

    scanf("%d", &number);

    switch ( number )
    {
        case 1 : printf("\n It's the month of January and it has 31 days." );
            break;
        case 2 : printf("\n It's the month of February and it has 28 days." );
            break;
        case 3 : printf("\n It's the month of March and it has 31 days." );
            break;
        case 4 : printf("\n It's the month of April and it has 30 days.");
            break;
        case 5 : printf("\n It's the month of May and it has 31 days." );
            break;
        case 6 : printf("\n It's the month of June and it has 30 days." );
            break;
        case 7 : printf("\n It's the month of July and it has 31 days." );
            break;
        case 8 : printf("\n It's the month of August and it has 32 days." );
            break;
        case 9 : printf("\n It's the month of September and it has 30 days." );
            break;
        case 10 : printf("\n It's the month of October and it has 31 days." );
            break;
        case 11 : printf("\n It's the month of November and it has 30 days." );
            break;
        case 12 : printf("\n It's the month of December and it has 31 days." );
            break;
        default : printf("\n MISTAKE: %d It's a invalid number.", number );
    }
    return 0;
}