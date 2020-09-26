#include<stdio.h>
#include<conio.h>
#include<conio.c>
#include<stdlib.h>
#include<string.h>


int DecBi(int val)
{


   int i=-1;
   int binario[100];

   while(val!=0)
   {
      i++;
      binario[i] = val % 2;
      val = val / 2;
   }
   gotoxy(11,20);cprintf("");
   while(i >= 0)
   {
      printf("%d",binario[i]);
      i--;
   }
   printf("\n");
   getch();
   return 1;

}

int DecOct(int val)
{

   int i=-1;
   int octal[100];

   while(val!=0)
   {
      i++;
      octal[i] = val % 8;
      val = val / 8;
   }
   gotoxy(11,20);cprintf("");
   while(i >= 0)
   {
      printf("%d",octal[i]);
      i--;
   }
   printf("\n");
   getch();
   return 0;

}

int DecHex(int val)
{
    int  i, j;
    int  quociente;

    i = 0;

    int hexadecimal[ i ];

 	      quociente = val / 16;
 	      hexadecimal[ i ] = val % 16;


 	      while ( quociente >= 16 )
 	      {
	      	  i++;
 	          hexadecimal[ i ] = quociente % 16;
 	          quociente  = quociente / 16;
 	      }
 	      i++;
		  hexadecimal[ i ] = quociente;

 	      gotoxy(11,20);cprintf("");
 	      while(i >= 0){

		     if ( hexadecimal[ i ] >= 10 )
			    switch( hexadecimal[ i ] )
				{
				   case 10 : printf ( "A" ); break;
				   case 11 : printf ( "B" ); break;
				   case 12 : printf ( "C" ); break;
				   case 13 : printf ( "D" ); break;
				   case 14 : printf ( "E" ); break;
				   case 15 : printf ( "F" ); break;
				 }
			  else
                  printf ( "%d", hexadecimal[ i ] );
                  i--;
                  }

          getch();
}

int CharBin(char str[100000])
{

    int i=0 ;
    fflush(stdin);

    gotoxy(11,20);cprintf("");
    while(str[i]!='\0'){

             if(str[i]=='a'){
                                 printf("0110 0001 ");
                                    }
             if(str[i]=='b'){
                                 printf("0110 0010 ");
                                    }
             if(str[i]=='c'){
                                 printf("0110 0011 ");
                                    }
             if(str[i]=='d'){
                                 printf("0110 0100 ");
                                    }
             if(str[i]=='e'){
                                 printf("0110 0101 ");
                                    }
             if(str[i]=='f'){
                                 printf("0110 0111 ");
                                    }
             if(str[i]=='g'){
                                 printf("0110 0111 ");
                                    }
             if(str[i]=='h'){
                                 printf("0110 1001 ");
                                    }
             if(str[i]=='i'){
                                 printf("0110 1001 ");
                                    }
             if(str[i]=='j'){
                                 printf("0110 1011 ");
                                    }
             if(str[i]=='k'){
                                 printf("0110 1011 ");
                                    }
             if(str[i]=='l'){
                                 printf("0110 1100 ");
                                    }
             if(str[i]=='m'){
                                 printf("0110 1101 ");
                                    }
             if(str[i]=='n'){
                                 printf("0110 1110 ");
                                    }
             if(str[i]=='o'){
                                 printf("0110 1111 ");
                                    }
             if(str[i]=='p'){
                                 printf("0111 0000 ");
                                    }
             if(str[i]=='q'){
                                 printf("0111 0001 ");
                                    }
             if(str[i]=='r'){
                                 printf("0111 0010 ");
                                    }
             if(str[i]=='s'){
                                 printf("0111 0011 ");
                                    }
             if(str[i]=='t'){
                                 printf("0111 0100 ");
                                    }
             if(str[i]=='u'){
                                 printf("0111 0101 ");
                                    }
             if(str[i]=='v'){
                                 printf("0111 0110 ");
                                    }
             if(str[i]=='w'){
                                 printf("0111 0111 ");
                                    }
             if(str[i]=='x'){
                                 printf("0111 1000 ");
                                    }
             if(str[i]=='y'){
                                 printf("0111 1001 ");
                                    }
             if(str[i]=='z'){
                                 printf("0111 1010 ");
                                    }
             if(str[i]=='A'){
                                 printf("0100 0001 ");
                                    }
             if(str[i]=='B'){
                                 printf("0100 0010 ");
                                    }
             if(str[i]=='C'){
                                 printf("0100 0011 ");
                                    }
             if(str[i]=='D'){
                                 printf("0100 0100 ");
                                    }
             if(str[i]=='E'){
                                 printf("0100 0101 ");
                                    }
             if(str[i]=='F'){
                                 printf("0100 0111 ");
                                    }
             if(str[i]=='G'){
                                 printf("0100 0111 ");
                                    }
             if(str[i]=='H'){
                                 printf("0100 1001 ");
                                    }
             if(str[i]=='I'){
                                 printf("0100 1001 ");
                                    }
             if(str[i]=='J'){
                                 printf("0100 1011 ");
                                    }
             if(str[i]=='K'){
                                 printf("0100 1011 ");
                                    }
             if(str[i]=='L'){
                                 printf("0100 1100 ");
                                    }
             if(str[i]=='M'){
                                 printf("0100 1101 ");
                                    }
             if(str[i]=='N'){
                                 printf("0100 1110 ");
                                    }
             if(str[i]=='O'){
                                 printf("0100 1111 ");
                                    }
             if(str[i]=='P'){
                                 printf("0101 0000 ");
                                    }
             if(str[i]=='Q'){
                                 printf("0101 0001 ");
                                    }
             if(str[i]=='R'){
                                 printf("0101 0010 ");
                                    }
             if(str[i]=='S'){
                                 printf("0101 0011 ");
                                    }
             if(str[i]=='T'){
                                 printf("0101 0100 ");
                                    }
             if(str[i]=='U'){
                                 printf("0101 0101 ");
                                    }
             if(str[i]=='V'){
                                 printf("0101 0110 ");
                                    }
             if(str[i]=='W'){
                                 printf("0101 0111 ");
                                    }
             if(str[i]=='X'){
                                 printf("0101 1000 ");
                                    }
             if(str[i]=='Y'){
                                 printf("0101 1001 ");
                                    }
             if(str[i]=='Z'){
                                 printf("0101 1010 ");
                                    }
             if(str[i]==' '){
                                 printf("0010 0000 ");
                                    }
                                    i++;
             }


             printf("%s", str);
             getch();
    return 0;

}

int BiDec(int val){

     int decimal = 0;
     int peso = 1;

    while(val > 0)
     {
          decimal += val % 10 * peso;
          val = val / 10;
          peso = peso * 2;
          }

     gotoxy(11,20);cprintf("%d", decimal);
      getch();

    }

int OctDec(int val){

     int decimal = 0;
     int peso = 1;

    while(val > 0)
     {
          decimal += val % 10 * peso;
          val = val / 10;
          peso = peso * 8;
          }

      gotoxy(11,20);cprintf("%d", decimal);
      getch();

    }

int HexDec (char str[100000]){

    char i=0,tam;
    int  cont=0, total=0, peso=1;
    tam = strlen(str);
    i=tam-1;

    while(i>=0){
             if(str[i]=='A' || str[i]=='a'){
                        str[i]=10;
             }else if(str[i]=='B'|| str[i]=='b'){
                        str[i]=11;
             }else if(str[i]=='C'|| str[i]=='c'){
                        str[i]=12;
             }else if(str[i]=='D'|| str[i]=='d'){
                        str[i]=13;
             }else if(str[i]=='E'|| str[i]=='e'){
                        str[i]=14;
             }else if(str[i]=='F'|| str[i]=='f'){
                        str[i]=15;
             }else if(str[i]=='1'){
                        str[i]=1;
             }else if(str[i]=='2'){
                        str[i]=2;
             }else if(str[i]=='3'){
                        str[i]=3;
             }else if(str[i]=='4'){
                        str[i]=4;
             }else if(str[i]=='5'){
                        str[i]=5;
             }else if(str[i]=='6'){
                        str[i]=6;
             }else if(str[i]=='7'){
                        str[i]=7;
             }else if(str[i]=='8'){
                        str[i]=8;
             }else if(str[i]=='9'){
                        str[i]=9;
             }else if(str[i]=='0'){
                        str[i]=0;
                        }

                        total+= str[i] * peso;
                                  peso = peso * 16;
                                   i--;

             }


       gotoxy(11,20);cprintf("%d", total);
             getch();

    }

int BinChar(int val){

     int decimal = 0, total = 0, cont=0;
     int peso = 1;

     while(val > 0)
     {

          total += val % 10 * peso;
          val = val / 10;
          peso = peso * 2;
          cont ++;


          }
          if(cont==7){
                    gotoxy(11,20);cprintf("%c",total);
                     total=0;
                     peso=1;
                     cont = 0;
                     val=val/10000;

                     }else{
                          gotoxy(11,20);cprintf("Valor invalido!!!");
                           }

      getch();

    }


int Exit(){

    int op2;

     clrscr();
     gotoxy(9,2);cprintf("________________________________________________");
     gotoxy(9,3);cprintf("|                                              |");
     gotoxy(9,4);cprintf("|     Desenvolvedor: Loacir Zen de Brito       |");
     gotoxy(9,5);cprintf("|______________________________________________|");
     gotoxy(9,6);cprintf("|                                              |");
     gotoxy(9,7);cprintf("|                                              |");
     gotoxy(9,8);cprintf("|                    UTP                       |");
     gotoxy(9,9);cprintf("|        UNIVERSIDADE TUIUTI DO PARANA         |");
     gotoxy(9,10);cprintf("|                                              |");
     gotoxy(9,11);cprintf("|                                              |");
     gotoxy(9,12);cprintf("|         PROJETO INTERDISCIPLINAR             |");
     gotoxy(9,13);cprintf("|                                              |");
     gotoxy(9,14);cprintf("|                                              |");
     gotoxy(9,15);cprintf("|                                              |");
     gotoxy(9,16);cprintf("|                                              |");
     gotoxy(9,17);cprintf("|______________________________________________|");
     gotoxy(9,18);cprintf("|                                              |");
     gotoxy(9,19);cprintf("|        Contiuar( 1->Sim / 0->Nao)?           |");
     gotoxy(9,20);cprintf("|                                              |");
     gotoxy(9,21);cprintf("|                                              |");
     gotoxy(9,22);cprintf("|______________________________________________|");
     gotoxy(46,19);scanf("%d", &op2);

     if(op2<0 || op2>1){
    gotoxy(35,21);cprintf("\aOPCAO INVALIDA!!!");
    getch();
        Exit();
        }else{

     switch(op2)
     {
case 0:
     exit(1);
     break;

case 1:
     gotoxy(39,21);cprintf("CALCULADORA");
     break;
     }
     }
      getch();

    }

int Calc(){

    int op1;
    float num, num1;

    gotoxy(30,2);cprintf("____________________________________________");
    gotoxy(30,3);cprintf("|                                          |");
    gotoxy(30,4);cprintf("|              CALCULADORA                 |");
    gotoxy(30,5);cprintf("|__________________________________________|");
    gotoxy(30,6);cprintf("|                                          |");
    gotoxy(30,7);cprintf("|    1 -> ADICAO                           |");
    gotoxy(30,8);cprintf("|    2 -> SUBTRACAO                        |");
    gotoxy(30,9);cprintf("|    3 -> MULTIPLICACAO                    |");
    gotoxy(30,10);cprintf("|    4 -> DIVISAO                          |");
    gotoxy(30,11);cprintf("|__________________________________________|");
    gotoxy(30,12);cprintf("|                                          |");
    gotoxy(30,13);cprintf("|                                          |");
    gotoxy(30,14);cprintf("|                                          |");
    gotoxy(30,15);cprintf("|                                          |");
    gotoxy(30,16);cprintf("|__________________________________________|");
    gotoxy(32,12);cprintf("Digite uma opcao: ");
    gotoxy(50,12);scanf("%d",&op1);

    if(op1<1 || op1>4){
    gotoxy(32,13);cprintf("\aOPCAO INVALIDA!!!");
    getch();
        Calc();
        }else{

    gotoxy(32,13);cprintf("Digite o 1 numero: ");
    gotoxy(50,13);scanf("%f",&num);
    gotoxy(32,14);cprintf("Digite o 2 numero: ");
    gotoxy(50,14);scanf("%f",&num1);
    switch(op1)

{
case 1:
     gotoxy(32,15);cprintf("%.2f",num+num1);
     break;

case 2:
     gotoxy(32,15);cprintf("%.2f",num-num1);
     break;

case 3:
     gotoxy(32,15);cprintf("%.2f",num*num1);
     break;

case 4:
     gotoxy(32,15);cprintf("%.2f",num/num1);
     break;

}
getch();
}


    }

 int main()
{

    char str[100000];
    int val;
    int op=1;
    system ("color 1F");


    do{
        clrscr();
gotoxy(9,2);cprintf("________________________________________________");
gotoxy(9,3);cprintf("|                                              |");
gotoxy(9,4);cprintf("|           .:: Digite uma opcao ::.           |");
gotoxy(9,5);cprintf("|______________________________________________|");
gotoxy(9,6);cprintf("|                                              |");
gotoxy(9,7);cprintf("|        1  ->  Decimal para Binario           |");
gotoxy(9,8);cprintf("|        2  ->  Decimal para Octal             |");
gotoxy(9,9);cprintf("|        3  ->  Decimal para Hexdecimal        |");
gotoxy(9,10);cprintf("|        4  ->  Caracter para Binario          |");
gotoxy(9,11);cprintf("|        5  ->  Binario para Decimal           |");
gotoxy(9,12);cprintf("|        6  ->  Octal para Decimal             |");
gotoxy(9,13);cprintf("|        7  ->  Hexdecimal para Decimal        |");
gotoxy(9,14);cprintf("|        8  ->  Binario para Caracter          |");
gotoxy(9,15);cprintf("|        9  ->  Calculadora                    |");
gotoxy(9,16);cprintf("|        0  ->  Sair                           |");
gotoxy(9,17);cprintf("|______________________________________________|");
gotoxy(9,18);cprintf("|                                              |");
gotoxy(9,19);cprintf("|                                              |");
gotoxy(9,20);cprintf("|                                              |");
gotoxy(9,21);cprintf("|                                              |");
gotoxy(9,22);cprintf("|______________________________________________|");
gotoxy(11,19);scanf("%d", &op);


              if(op == 1 || op == 2 || op == 3 || op == 6  || op == 5 || op == 8){
                    gotoxy(11,19);cprintf("Digite um valor: ");
                             scanf("%d",&val);
                             }else if(op == 4 || op == 7){
                                   gotoxy(11,19);cprintf("Digite um valor: ");
                                           scanf("%s",&str);
                                           }else if(op == 9){
                                                 Calc();
                                                 }else if(op == 0){
                                                       Exit();
                                           }else{
                                                 gotoxy(11,19);cprintf("\aOpcao incorreta!!!");
                                                 getch();
                                         }

switch(op)
{
case 1:

     DecBi(val);
     break;

case 2:
     DecOct(val);
     break;

case 3:
     DecHex(val);
     break;

case 4:
     CharBin(str);
     break;

case 5:
     BiDec(val);
     break;

case 6:
     OctDec(val);
     break;

case 7:
     HexDec(str);
     break;

case 8:
     BinChar(val);
     break;

}

}while(op != 10);

}
