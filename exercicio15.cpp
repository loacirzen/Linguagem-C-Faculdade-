#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<string.h>


int main () {

char string1[100], string2[100];
     int tam, i, y=0;

         printf("Digite uma palavra ");
         gets(string1);

         tam = strlen(string1);

                    for (i=tam-1; i>=0; i--) {
                        string2[y] = string1[i];
                                   y++;
                                   }
                                   
                                   string2[y] = '\0';

                                   printf("%s", string2);

                                   getch();
                                   return 0;
}


