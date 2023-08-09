#include <stdio.h>
#include <stdlib.h>

int main()
{
int nsec,sec,min,heures;
printf("entrer les secondes \n");
scanf("%d",&nsec);
sec=nsec%60;
min=nsec/60%60;
heures=nsec/3600;
printf("%d valent : %d heures et %d minutes et %d secondes",nsec,sec,min,heures);
}
