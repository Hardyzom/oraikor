#include <stdio.h>
#include <math.h>

float kerulet(int r){
    return 2*r*M_PI;
}

float terulet(int r){
    return r*r*M_PI;
}

int main(){

int sugar;
printf("Adja meg a sugarat\n");
scanf("%d",&sugar);
printf("A kör kerülete: %f\n",kerulet(sugar));
printf("A kör területe: %f\n",terulet(sugar));
return 0;

}