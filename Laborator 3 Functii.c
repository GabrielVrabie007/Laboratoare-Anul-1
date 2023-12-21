
// REPLIT NU ACCEPTA NUMERE CU VIRGULA ,NUMAI CU PUNCT !!3.14
#include <stdio.h>
#define PI 3.14
//EX 1
float cub(float x) { 
  return x * x * x; 
}

void afiseazaRaza(float raza) {
  float aria = PI * raza * raza;
   float diametru = 2 * raza;
    float circumferinta = 2 * PI * raza;
  (void)printf("Aria cercului cu raza %.2f este: %.2f\n", raza, aria);
    (void)printf("Diametrul cercului cu raza %.2f este: %.2f\n", raza, diametru);
     (void)printf("Circumferinta cercului cu raza %.2f este: %.2f\n", raza,
         circumferinta);
}

int minim(int a, int b) { 
     return (a < b) ? a : b; 
}

int maxim(int a, int b) { 
     return (a > b) ? a : b;
}

void verificaParitate(int c) {
    if (c % 2 == 0)
    (void)printf("%d este numar par.\n", c);
  else
       (void)printf("%d este numar impar.\n", c);
}
//Z este nr.introdus de la tastatura
 int estePrim(int z) {
  if (z < 2)
       return 0;
  //i*i ajuta la optimizarea programului 
  for (int i = 2; i * i <= z; i++) {
     if (z % i == 0) {
        return 0;
    }
  }
  return 1;
}

int esteArmstrong(int z) {
   int sumaCuburilor = 0;
 int temp = z;
    while (temp > 0) {
     int cifra = temp % 10;
    sumaCuburilor += cifra * cifra * cifra;

    temp /= 10;
  }
   return sumaCuburilor == z;
}

int estePerfect(int z) {
   int sumaDivizorilor = 0;
  for (int i = 1; i < z; i++) {
      if (z % i == 0) {
      sumaDivizorilor += i;
    }
  }
    return sumaDivizorilor == z;
}
//Prime care se impart la 1 si la el insusi
void gasestePrime(int first, int last) {
  (void)printf("Numerele prime din intervalul [%d, %d] sunt: \n", first, last);
  for (int i = first; i <= last; i++) {
      if (estePrim(i)) {
      (void)printf("%d ", i);
    }
  }
     (void)printf("\n");
}
//suma cuburilor cifrelor sale
void gasesteArmstrong(int start, int end) {
  (void)printf("Numerele Armstrong din intervalul [%d, %d] sunt: \n", start, end);
    for (int i = start; i <= end; i++) {
      if (esteArmstrong(i)) {
        (void)printf("%d \n", i);
    }
  }
}
// egal cu suma divizorilor săi
void gasestePerfect(int begin, int finish) {
  (void)printf("Numerele perfecte din intervalul [%d, %d] sunt: \n", begin, finish);
  for (int i = begin; i <= finish; i++) {
     if (estePerfect(i)) {
      (void)printf("%d \n", i);
    }
  }
}

int main() {
  //EX 1
  float numar;

  (void)printf("Introduceti un numar float: ");
   (void)scanf("%f", &numar);
    float rezultatCub = cub(numar);
  (void)printf("Cubul lui %.2f este: %.2f\n", numar, rezultatCub);
//EX 2
  float raza;
     (void)printf("Introduceti raza: ");
    (void)scanf("%f", &raza);
  afiseazaRaza(raza);
//EX 3
  int a, b;
  (void)printf("Introduceti doua numere naturale: ");
   (void)scanf("%d %d", &a, &b);
    int valoareMinima = minim(a, b);
  int valoareMaxima = maxim(a, b);
    (void)printf("Numarul minim este %d\n", valoareMinima);
    (void)printf("Numarul maxim este %d\n", valoareMaxima);
//EX 4
  int c;
  (void)printf("Introduceti un numar natural: ");
    (void)scanf("%d", &c);
  verificaParitate(c);

  int z;
  (void)printf("Introduceti un numar: ");
    (void)scanf("%d", &z);

  if (estePrim(z)) {
    (void)printf("%d este un numar prim.\n", z);
  }

  if (esteArmstrong(z)) {
         (void)printf("%d este un numar Armstrong.\n", z);
  }

  if (estePerfect(z)) {
          (void)printf("%d este un numar perfect.\n", z);
  }

  if (!estePrim(z) && !esteArmstrong(z) && !estePerfect(z)) {
             (void)printf("%d nu este nici prim, nici Armstrong, nici perfect.\n", z);
  }

  int start, end;
  (void)printf(
      "Introduceti inceputul si sfarsitul intervalului de numere naturale: ");
  (void)scanf("%d %d", &start, &end);

  gasestePrime(start, end);

  int first, last;
  (void)printf("Introduceti inceputul si sfarsitul intervalului de numere naturale "
         "pentru numere Armstrong: ");
  (void)scanf("%d %d", &first, &last);

  gasesteArmstrong(first, last);

  int begin, finish;
  (void)printf("Introduceti inceputul si sfarsitul intervalului de numere naturale "
         "pentru numere perfecte: ");
  (void)scanf("%d %d", &begin, &finish);

  gasestePerfect(begin, finish);

  return 0;
}


