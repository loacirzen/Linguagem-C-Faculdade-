#include<conio.h>
#include <iostream>
#include <cstdlib>


using namespace std;

      int cont;
      float F1(int  x, int  y);
    
      int main()
              {
              float vet[0];
              int i=0;
                  for (int lin = 0; lin < 7; lin++)
                  {
                      for (int col = 0; col < 10; col++)
                      {
                          vet[i] = F1(lin,col);
                          cout  << vet[i] << "\t";
                        
                      }
                  }
                  
                  cout << endl << "Qtd em que o denominador e igual a 0 -->: " << cont;
                  
                 
                  getch();
    }

    float F1(int  x, int  y)
    {
          int num, den;
          
          num = ((x * x) + (3 * x) + (y * y));
          den = ((x * y) - (5 * y) - (3 * x) + 15);
          
              if (den == 0)
                 {
                  cont++;
                  return -1;
                  }
                  
              float resul = num / den;
              return resul;
    }
