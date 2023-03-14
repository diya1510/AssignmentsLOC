#include<stdio.h>

int main(){
    int r,d,area, circum;
    printf("Enter the radius of a circle:");
    scanf("%d",&r);
    d=2*r;
    printf("Diameter =%d\n",d);
    area=3.14*r*r;
    printf("Area = %d\n",area);
    circum=2*3.14*r;
    printf("Circumference = %d\n",circum);
}