#include <stdio.h>
#include <math.h>



int main() {
   int myNum=16 , myNum2=2;
int Sum,Scadere,Inmultire,Impartire;  
  char myLetter='D' ;
  short Cifra=124;
  Sum = myNum + myNum2;        //Adunarea
  Scadere=myNum2 -myNum;       //Scaderea
  Inmultire=myNum2*myNum;        //Inmultirea
  Impartire=myNum/myNum2;      //Impartirea
    printf("Short: %d \n" , Cifra+3);
  printf("Adunare: %d \n",Sum);
  printf("Scadere: %d \n",Scadere);
  printf("Inmultire: %d \n",Inmultire);
  printf("Impartire: %d \n",Impartire);
  printf("Rest Impartire: %d \n" , myNum % myNum2 ); //Rest Impartire
  printf("Incrementare: %d \n" , ++myNum);  //Incrementare
  printf("Decrementare: %d \n" , --myNum2);  //Decrementare
  printf("Caracter: %c \n" , myLetter);

  float nr_real = 36.5;
  printf("Radical: %.2f \n", sqrt(nr_real));  //Radical
  printf("Valoare Absoluta: %.2f \n" , fabs(nr_real));  //Modulul
   printf("Putere: %.2f \n" , pow(nr_real , 2));  //Ridicare la putere
   printf("Logaritm: %.2f \n" , log(nr_real));   // Logaritm

  
    int a = 5;
    int b = 10;

    // Operatorul <
    if (a < b) {
        printf("%d este mai mic decat %d\n", a, b);
    }

    // Operatorul >
    if (a > b) {
        printf("%d este mai mare decat %d\n", a, b);
    }

    // Operatorul <=
    if (a <= b) {
        printf("%d este mai mic sau egal cu %d\n", a, b);
    }

    // Operatorul >=
    if (a >= b) {
        printf("%d este mai mare sau egal cu %d\n", a, b);
    }

    // Operatorul ==
    if (a == b) {
        printf("%d este egal cu %d\n", a, b);
    }

    // Operatorul !=
    if ((a != b) || (a > b)) {
        printf(" Sa indeplinit numai 1 conditie  \n", a, b);
    }
        /*Daca macar o conditie este adevarata se realizeaza printf*/

  if ((a != b) && (a < b)) {
        printf(" Sa indeplinit ambele conditii \n", a, b);
    }
 // Operatorul && afiseaza printf daca ambele conditii sunt adevarate 
  int c;
  printf(" Introdu un numar: ");
  (void)scanf("%d", &c);
  printf("Numarul adunat cu 10 este=%d",c+10);

  //Indicam la tastatura un nr. aleator dupa care acel nr se aduna cu 10
   return 0;
}