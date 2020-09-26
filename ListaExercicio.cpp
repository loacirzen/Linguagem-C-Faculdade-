#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int EXE01()
{
    
    
    int i, soma;
    printf("Digite um valor: ");
    scanf("%d",&i);
    soma = 0;
    
    while(i>0){
               soma = soma + i*(i+1);
               i--;
               }
               
    printf("O valor da soma e -> %d", soma);
    getch();
   
}

int EXE02()
{
    
   float soma=0;
    int i,n;
    
    printf("Digite um valor para N");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
             soma = soma + pow(i,2);     
             }
    
    printf("O valor da somatoria -> %.2f", soma);
    getch();
    
}

int EXE03()
{
    int num,den,i;
    float soma = 0.0;
    printf("Digite um valor: ");
    scanf("%d",&den);
    den = den * 2;
   
    
    for(i=2; i<den; i=i+2){
             if(i % 2 == 0){
   
                       soma = soma - (1/den);
                       printf("O valor do termo %d vale -> %d\n",i, 1/i);
                     }else{

               soma = soma + (1/den);
               printf("O valor do termo %d vale -> %.2f\n",i, 1/i);
               }
               }
    
    printf("A soma vale -> %.2f",soma);
    getch();
}

int EXE04()
{
    
    int den, num = 500;
    float soma = 0.0;
    
    for(den=2; den<=26; den++){
               soma = soma + (num/den);
                   num = num - 20;
               }
    
    printf("A soma vale -> %.2f",soma);
    getch();
    
}

int EXE05(){
    
    int vet[10];
    
   for(int i=0;i<10;i++)
            {
             printf("Digite o %d elemento: ",i);
             scanf("%d",&vet[i]);
                               
                                                     
             }
    getch();
    
    }
    
int EXE06(){
    
     int vet[25];
     int i;
     
     
     for (int i = 0; i <= 24; i++) { 
          vet[i] = rand() % 100; 
          printf("O valor na posicao %d -> %d\n",i, vet[i]);
            
}     

 getch();
    
    }


int EXE07(){
    
    int vet[10], maior=0, aux, pos=0;
    
   for(int i=0;i<10;i++)
            {
             printf("Digite o %d elemento: ",i);
             scanf("%d",&vet[i]);
             
             for (int j = 0; j < 9; j++) 
                { 
                    if (vet[i] > maior) 
                    { 
                        aux = vet[i]; 
                        vet[i] = maior; 
                        maior = aux; 
                        pos = i;
                    } 
                } 
                                                                 
             }
             printf("O maior valor do vetor e -> %d na posicao %d", maior, pos) ; 
    getch();
    
    }


int EXE08(){
    
    int vet [4][4];
        for (int lin = 0; lin < 4; lin++) {
            for (int col = 0; col < 4; col++) {
                if (lin < col) {
                    printf(" 1");
                }
                if (lin == col) {
                    printf(" 0");
                } else if(lin > col){
                    printf(" 2");
                }
            }
            printf("\n");
        }
        printf("\n");
    
    getch();
    
    }


int EXE09(){
    
     int vet[25];
     int i;
     
     
     for (int i = 0; i <= 24; i++) { 
          vet[i] = rand() % 100; 
          printf("O valor na posicao %d -> %d\n",i, vet[i]);
            
}     

 getch();
    
    }
    
    int EXE10(){
    
      int vetA[25], vetB[25], vetC[25];
     int i;
     
     
     for (int i = 0; i <= 24; i++) { 
          vetA[i] = rand() % 100;           
}     

     for (int i = 0; i <= 24; i++) { 
          vetB[i] = rand() % 100;           
}     

     for(int i=0;i<24;i++){
             vetC[i]=vetA[i]+vetB[i];
             printf("vet A + vet B na posicao %d -> %d\n",i,vetC[i]);



            
}     

 getch();
    
    }
    
    
    int EXE11(){
    
    char str[200], str1, i;
    int  cont=0;
    
    printf("Digite um palavra: ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Digite um caracter: ");
    scanf("%c",&str1);
    
    for(i=0; i<strlen(str); i++){
             if(str[i]==str1){
                                   cont++ ;
                                    }
             }
            
             printf("%d", cont);
             getch();
    
    }
    
    
    int EXE12(){
    
      char str[200], str1, i;
    int  cont=0;
    
    printf("Digite um palavra: ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Digite um caracter: ");
    scanf("%c",&str1);
    
    
    for(i=0; i<strlen(str); i++){
             if(str[i]==str1){
                              printf("%d",i);
                                   cont++ ;
                                    }                       
             }
             if(cont == 0){
                          printf("-1");
                   }
            


 getch();
    
    }
    
    
    int EXE13(){
    
   char str[200], str1, str2, i;
    int  cont=0;
    
    printf("Digite um palavra: ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Digite um caracter: ");
    scanf("%c",&str1);
    fflush(stdin);
    printf("Digite um caracter: ");
    scanf("%c",&str2);
    
    for(i=0; i<strlen(str); i++){
             if(str[i]==str1){
                                str[i]=str2;
                                cont++ ;
                                }else if(str[i]==str2){
                                                    str[i]=str1;
                                        }       
             }
             
             printf("%s",str);
            
    

 getch();
    
    }
    
    
    int EXE14(){
    
     char str[100], str1[100];
    int  cont=0, i;
    
    printf("Digite um palavra: ");
    scanf("%s",&str);
 
    for(i=0; i<strlen(str); i++){
            
             str1[i] = str[i];
                                 
             }
              printf("%s", str1);
            
    

 getch();
    
    }


int EXE15(){
    
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
                                   
    
    }
    
    
int EXIT(){
    
     exit(3);
    
    }

int main()
{
    
 
    int op=1;
    


    do{
                
printf("  \n   .:: Digite uma opcao ::.    \n");  
printf("\n  1  ->  Exercicio 01   ");  
printf("\n  2  ->  Exercicio 02   "); 
printf("\n  3  ->  Exercicio 03   "); 
printf("\n  4  ->  Exercicio 04   "); 
printf("\n  5  ->  Exercicio 05   "); 
printf("\n  6  ->  Exercicio 06   "); 
printf("\n  7  ->  Exercicio 07   "); 
printf("\n  8  ->  Exercicio 08   "); 
printf("\n  9  ->  Exercicio 09   "); 
printf("\n  10 ->  Exercicio 10   "); 
printf("\n  11 ->  Exercicio 11   "); 
printf("\n  12 ->  Exercicio 12   "); 
printf("\n  13 ->  Exercicio 13   "); 
printf("\n  14 ->  Exercicio 14   "); 
printf("\n  15 ->  Exercicio 15   "); 
printf("\n");

scanf("%d", &op);

            if(op < 0 && op>16){
                    printf("Opcao incorreta!!!");
                                  }

switch(op)
{
case 1:
     
     EXE01();
     break; 
     
case 2:
     EXE02();
     break; 
     
case 3:
     EXE03();
     break; 
     
case 4:
     EXE04();
     break; 
     
case 5:
     EXE05();
     break; 
     
case 6:
     EXE06();
     break; 
     
case 7:
     EXE07();
     break; 
     
case 8:
     EXE08();
     break; 
     
case 9:
     EXE09();
     break; 
     
case 10:
     EXE10();
     break; 
     
case 11:
     EXE11();
     break; 
     
case 12:
     EXE12();
     break; 
     
case 13:
     EXE13();
     break; 
     
case 14:
     EXE14();
     break; 
     
case 15:
     EXE14();
     break; 
     
case 16:
     EXIT();
     break; 
     
     
}

}while(op != 16);


}
