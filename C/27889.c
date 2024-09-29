#include <stdio.h>
int main(){
    char n[5];
    scanf("%s",n);

    switch (n[0]){
        case 'N':
            printf("North London Collegiate School");
            break;
        case 'B':
            printf("Branksome Hall Asia");
            break;
        case 'K':
            printf("Korea International School");
            break;
        case 'S':
            printf("St. Johnsbury Academy");
    }

    return 0;
}