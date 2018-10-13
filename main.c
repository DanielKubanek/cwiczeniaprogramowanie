#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void asci();
void Rownania();
void Delta();
void Menu();
void silnia();

int main(){

{

    Menu();
    int wyb;
    do {
        scanf(" %i", &wyb);
        switch (wyb) {
            case 1:
                Rownania();
                system("clear");
                Menu();
                break;
                //system("clear");
            case 2:
                Delta();
                system("clear");
                Menu();
                break;
            case 3:
                silnia();
                system("clear");
                Menu();
                break;
            case 4:
                Rownania();
                system("clear");
                Menu();
                break;
            case 5:
                Rownania();
                system("clear");
                Menu();
                break;
            case 6:
                system("clear");
                asci();
                system("clear");
                Menu();
                break;
        }
    }    while(wyb!=9);



return 0;
}

return 0;
}
void Menu() {
    system("clear");
    printf("................................CWICZENIA WSPOL............................\n");
    printf(".............................Wybierz co chcesz obliczyć.........................\n");
    printf("1.Układ równań\t\t 2.Równanie kwadratowe\t\t3. Silnia\n");
    printf("4.Silnia na forze\t\t 5.Wyswietlanie elementów ciągu Fibonacciego\n");
    printf("6.CHAR-> ASCII \t\t9.Wyjście z programu\n");
}

void Rownania() {
    int odp;
    do {
        system("clear");
        double a1, a2, b1, b2, c1, c2;
        double w, wx, wy, x, y;
        printf("Podaj a1\n");
        scanf(" %lf", &a1);
        printf("Podaj a2\n");
        scanf("%lf", &a2);
        printf("Podaj b1\n");
        scanf("%lf", &b1);
        printf("Podaj b2\n");
        scanf("%lf", &b2);
        printf("Podaj c1\n");
        scanf("%lf", &c1);
        printf("Podaj c2\n");
        scanf("%lf", &c2);

        w = a1 * b2 - b1 * a2;
        printf("W=%lf\t", w);
        wx = c1 * b2 - b1 * c2;
        printf("WX=%lf\t", wx);
        wy = a1 * c2 - c1 * a2;
        printf("WY=%lf\t", wy);
        if (w != 0) {
            x = wx / w;
            y = wy / w;
            printf("\nUkład równań jest oznaczony posiada jedno rozwiązanie x=%lf", x);
            printf("\n y=%lf", y);
        } else if (w == 0 && wx == 0 && wy == 0)

            printf("Układ jest nieoznaczony i posiada nieskończenie wiele rozwiązań");

        else if (w == 0 && wx != 0 || wy != 0)
            printf("Układ jest sprzeczny");
        printf("\nChcesz ponownie obliczyć ?? T=1 N=2\n");
        scanf("%i", &odp);
    }
        while (odp == 1);

}

void Delta() {
    system("clear");
    double odp;
    double a, b, c;
    double delta, pdelta;
    double x1, x2;
    do {
        printf("Podaj a\n");
        scanf(" %lf", &a);
        printf("Podaj b\n");
        scanf(" %lf", &b);
        printf("Podaj c\n");
        scanf(" %lf", &c);
        delta = b * b - 4 * a * c;
        printf("DELTA =%lf\n", delta);
        if (delta < 0) {
            printf("Delta ujemna!!!");

        } else if (delta == 0) {
            x1 = -b / 2 * a;
            printf("Jeden pierwiastek: %f\n", x1);
        } else {
            pdelta = sqrt(delta);
            x1 = ((b * (-1)) + pdelta) / (2 * a);
            x2 = ((b * (-1)) - pdelta) / (2 * a);
            printf("Pierwsze miejsce:%lf\n", x1);
            printf("Drugie miejsce:%lf\n", x2);

        }
        while(getchar()!='\n');
        printf("czy chcesz ponownie obliczyc delte?? T=1 N=2\n");
        scanf(" %lf", &odp);
    }while (odp==1);
}

void asci(){
    double odp;
do {

    char z;
    system("clear");
    printf("Podaj znak\n");
    scanf(" %c", &z);
    printf("%i", z);
    printf("\n Jeszcze raz? T=1 N=2");
    scanf("%lf" , &odp);

}while(odp!=2);

}

void silnia (){
    double odp;
    do {
        system("clear");
        double n, silnia;
        printf("Podaj liczbę z której chcesz obliczyć silnie\n");
        scanf(" %lf", &n);
        if (n < 2) {
            silnia = 1;
            printf("Silnia= %lf", silnia);
        } else {
            silnia=1;
            for (int i = 1; i <= n; i++) {
                silnia = silnia * i;
            }
            printf("silnia=%lf", silnia);
        }
            printf("Czy chcesz policzyć kolejną silnie? T=1 N=2\n");
            scanf("%lf", &odp);
    }while(odp!=2);

}