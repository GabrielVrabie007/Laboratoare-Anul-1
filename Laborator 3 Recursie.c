#include <stdio.h>
/*1.	Scrieți un program C pentru a găsi puterea oricărui număr folosind recursivitatea. 
2.	Scrieți un program C pentru a imprima toate numerele naturale cuprinse între 1 și n folosind recursivitatea. 
3.	Scrieți un program C pentru a imprima toate numerele pare sau impare în intervalul dat folosind recursivitatea. 
4.	Scrieți un program C pentru a găsi suma tuturor numerelor naturale cuprinse între 1 și n folosind recursivitatea. 
5.	Scrieți un program C pentru a găsi suma tuturor numerelor pare sau impare în intervalul dat folosind recursivitatea. 
6.	Scrieți un program C pentru a găsi inversarea oricărui număr folosind recursivitatea. 
( Ex: 2021 -> 1202)
7.	Scrieți un program C pentru a verifica dacă un număr este palindrom folosind recursivitatea. 
8.	Scrieți un program C pentru a găsi suma cifrelor unui număr dat folosind recursivitatea. 
9.	Scrieți un program C pentru a găsi factorialul oricărui număr folosind recursivitatea. 
10.	Scrieți un program C pentru a genera al n-lea termen Fibonacci folosind recursivitate. 


  */
//EX 1
double putere(double baza, int exponent);
//EX 2
void length_row_2(int number);
//EX 3
void printNumbers(int start, int end);
//EX 4
int sum(int k);
//EX 5
int sumaPareImpare(int inceput, int sfarsit, int estePar);
//EX 9 
int Fact(int n);
//EX 8
int sumaCifrelor(int S);
//EX 10
int fibonacci(int f);


    int main(void) {
 //EX 1
      double baza;
      int exponent;

      (void)printf("Introduceți baza: ");
      (void)scanf("%lf", &baza);

      (void)printf("Introduceți exponentul (un număr întreg pozitiv): ");
      (void)scanf("%d", &exponent);


      if (exponent < 0) {
          (void)printf("Exponentul trebuie să fie un număr întreg pozitiv.\n");
          return 1; 
      }

      double rezultat = putere(baza, exponent);
      (void)printf("%.2f ^ %d = %.2f\n", baza, exponent, rezultat);
  //EX 2
  int number;

  (void)printf("Scrie numar natural de la 1 la n: ");
  (void)scanf("%d",&number);

  if (number <= 0) {
      (void)printf("Numarul ales este 0 sau negativ\n");
  } else {
      length_row_2(number);
  }


  //EX 3
  int start, end;

  (void)printf("\nEnter start number: ");
  (void)scanf("%d", &start);

  (void)printf("\nEnter end number: ");
  (void)scanf("%d", &end);
//Numere impare
  (void)printf("\nOdd numbers between %d and %d are: ", start, end);
  printNumbers(start % 2 == 0 ? start + 1 : start, end);
//Numere pare
  (void)printf("\nEven numbers between %d and %d are: ", start, end);
  printNumbers(start % 2 == 0 ? start : start + 1, end);

//EX 4
      int k; //Suma de la 1 la n
        (void)printf("\nScrie suma pana la ce numar vrei:");
        (void)scanf("%d",&k);
      int result = sum(k);
      (void)printf("%d", result);
//EX 5
      int inceput, sfarsit;
      (void)printf("\nIntroduceți intervalul (start end): ");
      (void)scanf("%d %d", &inceput, &sfarsit);

      int sumaPare = sumaPareImpare(inceput, sfarsit, 1); // Suma numerelor pare
      int sumaImpare = sumaPareImpare(inceput, sfarsit, 0); // Suma numerelor impare

      (void)printf("Suma numerelor pare din intervalul [%d, %d] este: %d\n", inceput, sfarsit, sumaPare);
      (void)printf("Suma numerelor impare din intervalul [%d, %d] este: %d\n", inceput, sfarsit, sumaImpare);
      
      //ex 8
      int S;
      (void)printf("\n Scrie un nr.natural S pentru a afla suma cifrelor lui:");
      (void)scanf("%d",&S);
      (void)printf("Suma cifrelor lui %d este %d",S,sumaCifrelor(S));
      // EX 9
      int n;
      (void)printf("\nScrie un numar pentru factorial: ");
      (void)scanf("%d", &n);
      (void)printf("Factorialul numarului %d este: %d", n, Fact(n));

     //EX 10
      int f;
      (void)printf("\nScrie al n-lea termen din sirul lui Fibonacci care vrei sa-l afli:");
      (void)scanf("%d",&f);
      (void)printf("Termenul din sirul lui Fibonacci al %d-lea este %d" ,f,fibonacci(f));
      
      return 0;
}

//EX 2
void length_row_2(int number) {  
    if(number >= 1 ) {
        length_row_2(number-1);
        (void)printf("%d ",number);
    }
}

//EX 3 Calculeaza suma la pare si impare separat
void printNumbers(int start, int end) {
    if (start > end) {
        return;
    }
        (void)printf("%d ", start);

    printNumbers(start+2, end);
}

//EX 4
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}


//EX 8
int sumaCifrelor(int S) {

  if(S==0) {
    return 0;
  }
  else {
    return S%10 + sumaCifrelor(S/10);
  }
  
}

//EX 9
int Fact(int n) {

  if(n==1) {
    return 1; 
      }
  else {
    return n*Fact(n-1);
  }
  
}

//ex 10
int fibonacci(int f) {
if(f<=1) {
  return f;
}
  else {
    return fibonacci(f-1)+fibonacci(f-2);
  }
}

//EX 1
double putere(double baza, int exponent) {
    
    if (exponent == 0) {
        return 1;
    }

    return baza * putere(baza, exponent - 1);
}
//EX 5
int sumaPareImpare(int inceput, int sfarsit, int estePar) {
    if (inceput > sfarsit) {
        return 0;
    } else {
        if ((inceput % 2 == 0) == estePar) { 
            return inceput + sumaPareImpare(inceput + 1, sfarsit, estePar); // Adăugăm la sumă și trecem la următorul număr din interval
        } else {
            return sumaPareImpare(inceput+ 1, sfarsit, estePar); // Trecem la următorul număr din interval fara sa il adăuga la sumă
        }
    }
}