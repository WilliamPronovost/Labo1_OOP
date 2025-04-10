#include "entrypoint.h"

//Creer votre class Engin ici et appeler une fonction start que vous définisser à la classe dans la fonction raylib_start plus bas.
void Q1(){
    int chiffre1, chiffre2, chiffre3, chiffre4 ;
    float resultatVirgule;
    printf("Veuillez choisir vos chiffres\n");
    scanf_s("%d", &chiffre1);
    scanf_s("%d", &chiffre2);
    scanf_s("%d", &chiffre3);
    scanf_s("%d", &chiffre4);
    int resultatEntier = chiffre1 + chiffre2 + chiffre3 + chiffre4;
    printf("%d", resultatEntier);

    resultatVirgule = (chiffre1 + chiffre2 + chiffre3 + chiffre4)/4.0f;
    printf("%f", resultatVirgule);

    resultatEntier = chiffre1 * chiffre2 * chiffre3 * chiffre4;
    printf("%d", resultatEntier);

    if ((chiffre1 > chiffre2) && (chiffre1 > chiffre3) && (chiffre1 > chiffre4)) {
        printf("%d", chiffre1);
    }
    if ((chiffre2 > chiffre1) && (chiffre2 > chiffre3) && (chiffre2 > chiffre4)) {
        printf("%d", chiffre2);
    }
    if ((chiffre3 > chiffre1 && chiffre3 > chiffre2 && chiffre3 > chiffre4)) {
        printf("%d", chiffre3);
    }
    if ((chiffre4 > chiffre1) && (chiffre4 > chiffre2) && (chiffre4 > chiffre3)) {
        printf("%d", chiffre4);
    }

    if ((chiffre1 > chiffre2) && (chiffre1 > chiffre3) && (chiffre1 > chiffre4)) {
        printf("%d", chiffre1);
    }
    if ((chiffre2 > chiffre1) && (chiffre2 > chiffre3) && (chiffre2 > chiffre4)) {
        printf("%d", chiffre2);
    }
    if ((chiffre3 > chiffre1) && (chiffre3 > chiffre2) && (chiffre3 > chiffre4)) {
        printf("%d", chiffre3);
    }
    if ((chiffre4 > chiffre1) && (chiffre4 > chiffre2) && (chiffre4 > chiffre3)) {
        printf("%d", chiffre4);
    }
   
}
void Q2(){
int rayon;
float circonference, aire;
printf("Veuillez entrer votre rayon\n");
scanf_s("%d", &rayon);
circonference = 2 * 3,1416 + rayon;
printf("%f", circonference);
aire = 3,1416 *(rayon*rayon);
printf("%f", aire);
}
void Q3(){
char* nom[512];
int i;
scanf_s("%d", &nom[i]);
printf("%d", nom[i]);
}
void Q4(){
int n1, resultat;

}
int main(){
Q1();
// printf("Ceci est un test"); 
}