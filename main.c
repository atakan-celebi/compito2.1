#include <stdio.h>

int main(void) {
    float a, b, c;
    printf("inserisci primo numero:");
    scanf("%f", &a);
    printf("inserisci secondo numero:");
    scanf("%f", &b);
    c = (a+b)/2;
    printf("la media e':");
    printf("%f \n",c);
}
