#include <ctype.h>
#include <math.h>
#include <stdio.h>
// LABORATOR 2
int main() {

  (void)printf(
      " 1.Scrieți un program C pentru a găsi maxim între două numere.\n");
  (void)printf(
      "2.Scrieți un program C pentru a găsi maxim între trei numere. \n");
  (void)printf("3.Scrieți un program C pentru a verifica dacă un număr este "
               "negativ, pozitiv sau zero.\n");
  (void)printf("4.Scrieți un program C pentru a verifica dacă un număr este "
               "divizibil cu 5 și 11 sau nu.\n ");
  (void)printf("5.Scrieți un program C pentru a verifica dacă un număr este "
               "par sau impar.\n ");
  (void)printf("6.Scrieți un program C pentru a verifica dacă un an este "
               "bisect sau nu. \n");
  (void)printf("7.Scrieți un program C pentru a verifica dacă un caracter este "
               "sau nu alfabet.\n");
  (void)printf("8.Scrieți un program C pentru a introduce orice alfabet și "
               "verificați dacă este vocală sau consoană.\n");
  (void)printf("9.Scrieți un program C pentru a introduce orice caracter și "
               "verificați dacă este alfabet, cifră sau caracter special. \n");
  (void)printf("10.Scrieți un program C pentru a verifica dacă un caracter "
               "este cu majuscule sau minuscule.\n");
  (void)printf("11.Scrieți un program C pentru a introduce numărul săptămânii "
               "și a imprima ziua săptămânii. \n");
  (void)printf("12.Scrieți un program C pentru a introduce numărul lunii și a "
               "imprima numărul de zile din luna respectivă. \n");
  (void)printf("13.Scrieți un program C pentru a număra numărul total de cifre "
               "într-un număr. \n");
  (void)printf("14.Scrieți un program C pentru a introduce unghiurile unui "
               "triunghi și verificați dacă triunghiul este valid sau nu. \n");
  (void)printf("15.Scrieți un program C pentru a introduce toate laturile unui "
               "triunghi și verificați dacă triunghiul este valid sau nu. \n");
  (void)printf("16.Scrieți un program C pentru a verifica dacă triunghiul este "
               "echilateral,isoscel sau triunghi scalen\n.");
  (void)printf("17.Scrieți un program C pentru a găsi toate rădăcinile unei "
               "ecuații pătratice.\n");
  (void)printf("18.Scrieți un program C pentru a imprima toate numerele "
               "naturale de la 1 la n. - folosind bucla while.\n");
  (void)printf("19.Scrieți un program C pentru a imprima toate numerele "
               "naturale invers (de la n la 1). - folosind bucla while.\n");
  (void)printf("20.Scrieți un program C pentru a imprima toate alfabetele de "
               "la a la z. - folosind bucla while\n");
  (void)printf("21.Scrieți un program C pentru a imprima toate numerele pare "
               "între 1 și 100. - utilizând bucla while\n");
  (void)printf("22.Scrieți un program C pentru a imprima toate numerele impare "
               "între 1 și 100.\n");
  (void)printf("23.Scrieți un program C pentru a găsi suma tuturor numerelor "
               "naturale cuprinse între 1 și n.\n ");
  (void)printf("24.Scrieți un program C pentru a găsi suma tuturor numerelor "
               "pare între 1 și n.\n ");
  (void)printf("25.Scrieți un program C pentru a găsi suma tuturor numerelor "
               "impare cuprinse între 1 și n.\n");
  (void)printf("26.Scrieți un program C pentru a imprima tabelul de înmulțire "
               "a oricărui număr. \n");
  (void)printf("27.Scrieți un program C pentru a număra numărul de cifre "
               "dintr-un număr.\n");
  (void)printf("28.Scrieți un program C pentru a găsi prima și ultima cifră a "
               "unui număr.\n ");
  (void)printf("29.Scrieți un program C pentru a găsi suma primei și ultimei "
               "cifre a unui număr.\n ");
  (void)printf("30.Scrieți un program C pentru a schimba prima și ultima cifră "
               "a unui număr.\n ");
  (void)printf(
      "31.Scrieți un program C pentru a calcula suma cifrelor unui număr.\n ");
  (void)printf("32.Scrieți un program C pentru a calcula produsul cifrelor "
               "unui număr.\n ");
  (void)printf(
      "33.Scrieți un program C pentru a găsi toți factorii unui număr. \n");
  (void)printf(
      "34.Scrieți un program C pentru a calcula factorialul unui număr. \n");
  (void)printf("35.Scrieți un program C pentru a verifica dacă un număr este "
               "sau nu un număr perfect.\n ");

  int choice;
  (void)printf("Selecteaza exercitiu:\n");
  (void)scanf("%d", &choice);
  switch (choice) {

    // EX 1
  case 1: {
    int a, b;
    (void)printf("Scrie 2 nr.naturale:");
    (void)scanf("%d %d", &a, &b);

    (a < b) ? (void)printf("Numarul b=%d mai mare \n", b)
            : (void)printf("Numarul a=%d mai mare \n", a);
  } break;
  // EX 2
  case 2: {
    int a, b, c;
    (void)printf("Scrie 3 nr.naturale:");
    (void)scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (a < b) {
      max = b;
    }

    if (b < c) {
      max = c;
    }
    (void)printf("Maxim este %d \n", max);
  } break;
    // EX 3
  case 3: {
    int a;
    (void)printf("Scrie un nr.natural:");
    (void)scanf("%d", &a);
    if (a > 0) {
      (void)printf("%d este nr.pozitiv \n", a);
    } else if (a == 0) {
      (void)printf("%d este egal cu 0 \n", a);
    } else {
      (void)printf("%d este negativ \n", a);
    }
  } break;
    // EX4
  case 4: {
    int a;
    (void)printf("Scrie un nr.natural:");
    (void)scanf("%d", &a);
    if (a % 5 == 0 && a % 11 == 0) {
      (void)printf("Numarul %d este div.cu 5/11 \n", a);
    } else {
      (void)printf("%d nu este divizibil cu 5/11 \n", a);
    }
  } break;
    // EX 5
  case 5: {
    int a;
    (void)printf("Scrie un nr.natural:");
    (void)scanf("%d", &a);

    if (a % 2 == 0) {
      (void)printf("%d nr.par", a);
    } else {
      (void)printf("%d nr.impar", a);
    }
  } break;

    // EX 6
  case 6: {
    int a;
    (void)printf("Introduceti un an:");
    (void)scanf("%d", &a);
    if (a % 4 == 0) {
      (void)printf("%d este an bisect", a);
    } else {
      (void)printf("%d este an normal", a);
    }
  } break;

    // EX 7
  case 7: {
    char caracter;

    (void)printf("Introduceti un caracter: ");
    (void)scanf(" %c", &caracter);

    if (isalpha(caracter)) {
      (void)printf("%c este un caracter din alfabet.\n", caracter);
    } else {
      (void)printf("%c nu este un caracter din alfabet.\n", caracter);
    }
  } break;
    // EX 8
  case 8: {
    char litera;

    (void)printf("Introdu o litera: ");
    (void)scanf("%c", &litera);

    // Verificăm dacă litera este o vocală sau consoană
    if (litera == 'a' || litera == 'e' || litera == 'i' || litera == 'o' ||
        litera == 'u' || litera == 'A' || litera == 'E' || litera == 'I' ||
        litera == 'O' || litera == 'U') {
      (void)printf("%c este o vocala\n", litera);
    } else {
      (void)printf("%c este o consoana\n", litera);
    }
  } break;
    // EX 9
  case 9: {
    char caracter;

    (void)printf("Introduceti un caracter: ");
    (void)scanf(" %c", &caracter);

    if (isalpha(caracter)) {
      (void)printf("%c este un caracter din alfabet.\n", caracter);
    } else if (isdigit(caracter)) {
      (void)printf("%c este o cifra.\n", caracter);
    } else {
      (void)printf("%c este caracter special", caracter);
    }
  } break;

    // EX 10
  case 10: {
    char caracter;

    (void)printf("Introduceti o litera: ");
    (void)scanf(" %c", &caracter);

    if (caracter >= 'A' && caracter <= 'Z') {
      (void)printf("%c este o litera majuscula.\n", caracter);
    } else if (caracter >= 'a' && caracter <= 'z') {
      (void)printf("%c este o litera minuscula.\n", caracter);
    } else {
      (void)printf("%c nu este o litera valida.\n", caracter);
    }
  } break;

    // EX 11
  case 11: {
    int day;
    (void)printf("Scrie un numar natural \n");
    (void)scanf("%d", &day);

    switch (day) {
    case 1:
      (void)printf("Luni \n");
      break;
    case 2:
      (void)printf("Marti \n");
      break;
    case 3:
      (void)printf("Miercuri\n");
      break;
    case 4:
      (void)printf("Joi\n");
      break;
    case 5:
      (void)printf("Vineri \n");
      break;
    case 6:
      (void)printf("Sambata \n");
      break;
    case 7:
      (void)printf("Duminica \n");
      break;
    }
  } break;

    // EX 13
  case 13: {
    int numar;
    int cifre = 0;
    (void)printf("Introdu un numar: ");
    (void)scanf("%d", &numar);

    while (numar != 0) {

      cifre++;
      numar /= 10;
    }
    (void)printf("Numarul are %d cifre.\n", cifre);
  } break;

    // EX 12
  case 12: {
    int n;
    (void)printf("Scrie un numar de la 28-31:");
    (void)scanf("%d", &n);

    if (n >= 28 && n <= 31) {
      if (n == 28 || n == 29) {
        (void)printf("Februarie in an obisnuit/bisect");
      } else if (n == 30) {
        (void)printf("Aprilie, iunie, august, septembrie, noiembrie");
      } else {
        (void)printf("Ianuarie, martie, mai, iulie, octombrie, decembrie");
      }
    } else {
      (void)printf("Numarul introdus nu este intre 28 si 31.");
    }
  } break;

    // EX 14
  case 14: {
    int a, b, c;
    (void)printf("Scrie 3 masuri de unghiuri:");
    (void)scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180) {
      (void)printf("Triunghi valid");
    } else {
      (void)printf("Triunghi nevalid");
    }
  } break;
    // EX 15
  case 15: {
    int a, b, c;
    (void)printf("Scrie 3 masuri de unghiuri:");
    (void)scanf("%d %d %d", &a, &b, &c);

    if (a + b > c || b + c > a || a + c > b) {
      (void)printf("Triunghi valid");
    } else {
      (void)printf("Triunghi nevalid");
    }
  } break;
    // EX 16
  case 16: {
    int a, b, c;
    (void)printf("Scrie 3 laturi int:");
    (void)scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c && a == c) {
      (void)printf("Triunghi echilateral");
    }

    else if (a == b || a == c || b == c) {
      (void)printf("Triunghi isoscel");
    }

    else {
      (void)printf("Triunghi scalen");
    }
  } break;
    // EX 17
  case 17: {
    float a, b, c, delta, x1, x2;
    (void)printf("Scrie valoarea lui a,b,c in float:");
    (void)scanf("%f %f %f", &a, &b, &c);
    delta = b * b - 4 * a * c;

    if (delta > 0) {
      x1 = (-b - sqrt(delta)) / (2 * a);
      x2 = (-b + sqrt(delta)) / (2 * a);
      (void)printf("Radacinile x1 si x2 sunt: %.1f , %.1f", x1, x2);

    } else if (delta == 0) {
      x1 = -b / (2 * a);
      x2 = -b / (2 * a);

    } else {
      (void)printf("Ecuatia nu are solutii");
    }
  } break;
  // EX 18
  case 18: {
    int i, n;
    (void)printf("Introduceti nr.n natural:");
    (void)scanf("%d", &n);
    i = 1;
    while (i < n) {

      (void)printf(" %d \n", i);
      i++;
    }
  } break;
    // EX 19
  case 19: {
    int n;
    (void)printf("Introduceti nr.n natural:");
    (void)scanf("%d", &n);

    while (n >= 1) {

      (void)printf(" %d \n", n);
      n--;
    }
  } break;
    // EX 20
  case 20: {
    char litera = 'a';
    while (litera <= 'z') {

      (void)printf("%c \n", litera);
      litera++;
    }
  } break;

    // EX 21
  case 21: {
    int n = 2;
    while (n < 100) {
      (void)printf("%d \n", n);
      n += 2;
    }
  } break;
    // EX 22
  case 22: {
    int i;
    i = 0;
    while (i <= 100) {
      i++;
      if (i % 2 != 0) { // DACA PARE SA FIE i%2==0
        (void)printf("%d \n ", i);
      }
    }
  } break;
    // EX 23
  case 23: {
    int n, sum = 0; // Suma tuturor nr.de la 1 la n este:
    (void)printf("Introduceti nr.n natural:");
    (void)scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
      sum += i;
    }
    (void)printf("Suma numerelor de la 1 la n:%d \n", sum);
  } break;
    // EX 24
  case 24: {
    int n, s = 0;
    (void)printf("Scrie int n:");
    (void)scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) { // Suma de la 1-n la nr.pare
      s += i;
      (void)printf(" %d\n", s);
    }
  } break;
    // EX 25

  case 25: {
    int n, s = 0;
    (void)printf("Scrie int n:");
    (void)scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) { // Suma de la 1-n la nr.impare
      s += i;

      (void)printf(" %d\n", s);
    }
  } break;
    // EX 26
  case 26: {
    int n, i, p;
    (void)printf("Scrie int n:");
    (void)scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
      p = n * i;
      (void)printf("%d*%d= %d \n", n, i, p);
    }
  } break;
    // EX 27
  case 27: {
    int numar, cifre = 0;

    (void)printf("Introduceti un numar: ");
    (void)scanf("%d", &numar);

    while (numar != 0) {
      numar /= 10;
      cifre++;
    }
    (void)printf("Numarul are %d cifre.\n", cifre);
  } break;
    // EX 28
  case 28: {
    int numar;
    (void)printf("Introduceti un numar intreg: ");
    (void)scanf("%d", &numar);

    int ultima_cifra = numar % 10;
    while (numar >= 10) {
      numar /= 10;
    }
    int prima_cifra = numar;

    (void)printf("Prima cifra este: %d\n", prima_cifra);
    (void)printf("Ultima cifra este: %d\n", ultima_cifra);
  } break;
    // EX 29
  case 29: {
    int numar;
    (void)printf("Introduceti un numar intreg: ");
    (void)scanf("%d", &numar);

    int ultima_cifra = numar % 10;
    while (numar >= 10) {
      numar /= 10;
    }
    int prima_cifra = numar;

    (void)printf("Prima cifra+ultima cifra este: %d\n",
                 prima_cifra + ultima_cifra);
  } break;

    // EX 30
  case 30: {
    int n;
    (void)printf("Scrie int n:");
    (void)scanf("%d", &n);

    int ultima_cifra = n % 10;

    while (n >= 10) {
      n /= 10;
    }
    int prima_cifra = n;
    (void)printf("Prima cifra este: %d\n", prima_cifra);
    (void)printf("Ultima cifra este: %d\n", ultima_cifra);
  } break;

    // EX.31
  case 31: {
    int n, sum = 0;
    (void)printf("Introduceti un numar: ");
    (void)scanf("%d", &n);

    while (n != 0) {
      sum += n % 10; // Afla ultima cifra
      n /= 10;       // Arunca ultima cifra
    }

    (void)printf("Suma cifrelor este: %d", sum);
  } break;
    // Ex 32
  case 32: {
    int n, prod = 1;
    (void)printf("Introduceti un numar: ");
    (void)scanf("%d", &n);

    while (n != 0) {
      prod *= n % 10; // Afla ultima cifra
      n /= 10;        // Arunca ultima cifra
    }

    (void)printf(" Produsul cifrelor este: %d", prod);
  } break;

    // EX 33
  case 33: {
    int n;
    (void)printf("Introduceti un numar: ");
    (void)scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        (void)printf("Divizorii lui n sunt:%d \n", i);
      }
    }
  } break;

  // EX 34
  case 34: {
    int n, fact = 1;
    (void)printf("Scrie un numar natural: ");
    (void)scanf("%d", &n);

    if (n >= 0) {
      for (int i = 1; i <= n; i++) {
        fact *= i; // Fact = Fact * i
      }
      (void)printf("Factorialul nr %d este: %d", n, fact);
    } else {
      (void)printf("Numarul este negativ");
    }
  } break;
    // EX 35
  case 35: {
    int numar;
    int sumaDivizori = 0;

    (void)printf("Introduceti un numar intreg pozitiv: ");
    (void)scanf("%d", &numar);

    for (int i = 1; i <= numar / 2; i++) {
      if (numar % i == 0) {
        sumaDivizori += i;
      }
    }

    if (sumaDivizori == numar) {
      (void)printf("%d este un numar perfect.\n", numar);
    } else {
      (void)printf("%d nu este un numar perfect.\n", numar);
    }
  } break;
  }
  return 0;
}
