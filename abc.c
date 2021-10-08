#include<stdio.h>

int main()
{
float F,s,a,b;
printf("F: ");

scanf("%f%f%f",&F,&a,&b);
//where a == 5 && b== 9

s = (a / b);

printf("S: %.2lf", s);
float C = (F-32) * s;

printf("\nC: %.2f", C);

return 0;
}