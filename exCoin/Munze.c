#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char geld[100];
    int munze = 0;
    float menge;

    printf("Wie viel Geld?\n");
    scanf("%99s", geld);

    menge = atof(geld);

    int cents = (int)(munze * 100);

    munze += cents / 25;
    cents %= 25;

    munze += cents / 10;
    cents %= 10;

    munze += cents / 1;

    printf("insgesamt Münzen: %d\n", munze);
}