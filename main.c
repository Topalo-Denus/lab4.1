#include <stdio.h>
#include <math.h>
int main(void) {
printf("\nt = log2((1-y)/1+x))+z");//4 laba 1 exercise 22 option

float t,num,x,y,z;
metka:

printf ("\n\nedit x=");
scanf("%f",&x);

printf ("\nedit y=");
scanf("%f",&y);

printf ("\nedit z=");
scanf("%f",&z);

while (x==-1){
printf ("\ncan't share on 0,try again");
goto metka;
}

num=((1-y)/(1+x))+z;

while (num<0){
printf ("\ncan't be negative number in logarithm,try again");
goto metka;
}

t=log2(num);
printf ("\nt=%f",t);

return 0;
}