#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>  //ex 31

// EX 1

int lungimeSir(char str[]) { return strlen(str); }
// EX 2

void copiereSir(char dest[], char src[]) { strcpy(dest, src); }
// EX 3

void concatenareSiruri(char dest[], char src[]) { strcat(dest, src); }
// EX 4

int comparareSiruri(char str1[], char str2[]) { return strcmp(str1, str2); }
// EX 5

void miciLaMajuscule(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = toupper(str[i]);
  }
}
// EX 6

void majusculeLaMici(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = tolower(str[i]);
  }
}
// EX 7
//  schimba litere mici cu majuscule
void comutaLitere(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (islower(str[i]))
      str[i] = toupper(str[i]);
    else if (isupper(str[i]))
      str[i] = tolower(str[i]);
  }
}
// EX 8
//  Functie pentru a determina numarul total de litere, cifre si caractere
//  speciale
void numaraCaractere(char str[], int *litere, int *cifre, int *speciale) {
  *litere = 0;
  *cifre = 0;
  *speciale = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i]))
      (*litere)++;
    else if (isdigit(str[i]))
      (*cifre)++;
    else
      (*speciale)++;
  }
}
// EX 9

int numaraVocale(char str[]) {
  int vocale = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' ||
        tolower(str[i]) == 'i' || tolower(str[i]) == 'o' ||
        tolower(str[i]) == 'u')
      vocale++;
  }
  return vocale;
}
// EX 10

int numaraConsoane(char str[]) {
  int consoane = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i]) && !(tolower(str[i]) == 'a' || tolower(str[i]) =='e' ||  tolower(str[i]) == 'i' || tolower(str[i]) == 'o' ||tolower(str[i]) == 'u'))
      consoane++;
  }
  return consoane;
}

int numaraCuvinte(char str[]) {
  int cuvinte = 0;
  int lungime = strlen(str);

  for (int i = 0; i < lungime; i++) {
    // Ignoră spațiile de la începutul sau sfârșitul șirului
    while (i < lungime && isspace(str[i]))
      i++;

    if (i < lungime && !isspace(str[i])) {
      cuvinte++;
      while (i < lungime && !isspace(str[i]))
        i++;
    }
  }
  return cuvinte;
}

r
void inversSir(char str[]) {
  int lungime = strlen(str);
  int i = 0, j = lungime - 1;
  char temp;

  while (i < j) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

// Functie pentru a verifica daca un sir este palindrom sau nu
// sirul citit de la stanga la drepta este acelas daca este citit invers
int estePalindrom(char str[]) {
  int lungime = strlen(str);
  int i = 0, j = lungime - 1;

  while (i < j) {
    if (str[i] != str[j])
      return 0; // nu este polindrom
    i++;
    j--;
  }
  return 1; // palindrom
}

void inversOrdineCuvinte(char str[]) {
    int lungime = strlen(str);
    int start = 0;

    for (int i = 0; i < lungime; i++) {
        if (isspace(str[i])) {
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]); //cuvantul inversat
            }
            printf(" "); // Afiseaza un spatiu intre cuvinte
            start = i + 1;
        }
    }

    // Afiseaza ultimul cuvant inversat din sir (fara spatiu dupa el)
    for (int j = lungime - 1; j >= start; j--) {
        printf("%c", str[j]);
    }
}

int primaAparitieCaracter(char str[], char caracter) {
  int lungime = strlen(str);
  for (int i = 0; i < lungime; i++) {
    if (str[i] == caracter)
      return i; // returnează poziția primei apariții a caracterului
  }
  return -1; 
}


int ultimaAparitieCaracter(char str[], char caracter) {
  int lungime = strlen(str);
  for (int i = lungime - 1; i >= 0; i--) {
    if (str[i] == caracter)
      return i; 
  }
  return -1; 
}


void cautaToateAparitiile(char str[], char caracter) {
  int lungime = strlen(str);
  printf("Aparitiile caracterului '%c' sunt pe pozitiile: ", caracter);
  for (int i = 0; i < lungime; i++) {
    if (str[i] == caracter)
      printf("%d ", i);
  }
  printf("\n");
}


int numaraAparitii(char str[], char caracter) {
  int lungime = strlen(str);
  int count = 0;
  for (int i = 0; i < lungime; i++) {
    if (str[i] == caracter)
      count++;
  }
  return count;
}


char caracterCuFrecventaMaxima(char str[]) {
  int frecventa[256] = {0}; 
  int lungime = strlen(str);

  for (int i = 0; i < lungime; i++) {
    frecventa[str[i]]++;
  }

  int maxFrecventa = 0;
  char caracterMaxFrecventa;

  for (int i = 0; i < 256; i++) {
    if (frecventa[i] > maxFrecventa) {
      maxFrecventa = frecventa[i];
      caracterMaxFrecventa = i;
    }
  }
  return caracterMaxFrecventa;
}


char caracterCuFrecventaMinima(char str[]) {
  int frecventa[256] = {0}; // frecventa pentru toate caracterele ASCII posibile
  int lungime = strlen(str);

  for (int i = 0; i < lungime; i++) {
    frecventa[str[i]]++;
  }

  int minFrecventa = lungime;
  char caracterMinFrecventa;

  for (int i = 0; i < 256; i++) {
    if (frecventa[i] > 0 && frecventa[i] < minFrecventa) {
      minFrecventa = frecventa[i];
      caracterMinFrecventa = i;
    }
  }

  if (minFrecventa == lungime) {
    // Dacă toate caracterele au frecvența 0
    return '\0';
  }
  return caracterMinFrecventa;
}

// ex 21

void frecventaCaractere(char str[]) {
  int lungime = strlen(str);
  printf("Frecventa fiecarui caracter din sir:\n");

  for (int i = 0; i < lungime; i++) {
    if (str[i] != '\0') {
      int contor = 1;
      for (int j = i + 1; j < lungime; j++) {
        if (str[i] == str[j]) {
          contor++;
          str[j] =
              '\0'; // marcheaza caracterele gasite pentru a evita repetarea lor
        }
      }
      printf("Caracterul '%c' apare de %d ori.\n", str[i], contor);
    }
  }
}

void eliminaPrimaAparitie(char str[], char caracter) {
  int lungime = strlen(str);
  int gasit = 0;

  for (int i = 0; i < lungime; i++) {
    if (str[i] == caracter && !gasit) {
      for (int j = i; j < lungime - 1; j++) {
        str[j] = str[j + 1];
      }
      gasit = 1;
    }
  }

  str[lungime - 1] = '\0';
}


void eliminaUltimaAparitie(char str[], char caracter) {
  int lungime = strlen(str);
  int gasit = 0;

  for (int i = lungime - 1; i >= 0; i--) {
    if (str[i] == caracter && !gasit) {
      for (int j = i; j < lungime - 1; j++) {
        str[j] = str[j + 1];
      }
      gasit = 1;
    }
  }

  str[lungime - 1] = '\0';
}


void eliminaToateAparitiile(char str[], char caracter) {
  int lungime = strlen(str);
  int index = 0;

  for (int i = 0; i < lungime; i++) {
    if (str[i] != caracter) {
      str[index++] = str[i];
    }
  }
  str[index] = '\0';
}


void eliminaCaractereRepetate(char str[]) {
  int lungime = strlen(str);
  int index = 0;

  for (int i = 0; i < lungime; i++) {
    int j;
    for (j = 0; j < i; j++) {
      if (str[i] == str[j]) {
        break;
      }
    }
    if (i == j) {
      str[index++] = str[i];
    }
  }
  str[index] = '\0';
}


void inlocuiestePrimaAparitie(char str[], char vechi, char nou) {
  int lungime = strlen(str);

  for (int i = 0; i < lungime; i++) {
    if (str[i] == vechi) {
      str[i] = nou;
      break;
    }
  }
}


void inlocuiesteUltimaAparitie(char str[], char vechi, char nou) {
  int lungime = strlen(str);

  for (int i = lungime - 1; i >= 0; i--) {
    if (str[i] == vechi) {
      str[i] = nou;
      break;
    }
  }
}


void inlocuiesteToateAparitiile(char str[], char vechi, char nou) {
  int lungime = strlen(str);

  for (int i = 0; i < lungime; i++) {
    if (str[i] == vechi) {
      str[i] = nou;
    }
  }
}


int prima_AparitieCuvant(char str[], char cuvant[]) {
  char *ptr = strstr(str, cuvant);
  if (ptr) {
    return ptr - str;
  }
  return -1;
}

int ultima_AparitieCuvant(char str[], char cuvant[]) {
  int lungimeStr = strlen(str);
  int lungimeCuvant = strlen(cuvant);
  int gasit = 0;
  int index = -1;

  for (int i = 0; i < lungimeStr; i++) {
    if (strncmp(&str[i], cuvant, lungimeCuvant) == 0) {
      index = i;
      gasit = 1;
    }
  }
  return gasit ? index : -1;
}
//ex 32
int word_count() {
  char string[] = "Acolo sunt multi multi pinguini";
  char word[] = "multi";
  printf("Sirul este:%s",string);
  int stringLength = strlen(string);
  int wordLength = strlen(word);
  int end = stringLength - wordLength + 1;
  int count = 0;
  for (int i = 0; i < end; i++) {
    bool word_found = true;
    for (int j = 0; j < wordLength; j++) {
      if (word[j] != string[i + j]) {
        word_found = false;
        break;
      }
    }

    if (word_found)
      count++;
  }
  return count;
}
//ex 33
void eliminaPrimaAparitieCuvant() {
    char str[] = "Acesta este un exemplu de șir în care vom elimina cuvântul exemplu.";
   char cuvant[] = "exemplu";
    printf("Șirul inițial este: %s\n", str);
    printf("Cuvântul de eliminat este: %s\n", cuvant);
    char *pozitie = strstr(str, cuvant); // găsește prima apariție a cuvântului în șir

    if (pozitie != NULL) {
        int lungimeCuvant = strlen(cuvant);
        memmove(pozitie, pozitie + lungimeCuvant + 1, strlen(pozitie + lungimeCuvant + 1) + 1);
        // muta caracterele la stanga dupa eliminarea primului cuvânt =
    }
    printf("Șirul după eliminarea primului cuvânt: %s\n", str);
}


int main() {
  char str1[100], str2[100], concat[200];

  printf("Introduceți primul șir: ");
  fgets(str1, sizeof(str1),
        stdin); // sau folosiți fgets pentru a evita depășirea bufferului

  printf("Lungimea șirului este: %d\n", lungimeSir(str1));

  copiereSir(str2, str1);
  printf("Șirul copiat este: %s\n", str2);

  printf("Introduceți al doilea șir pentru concatenare: ");
  fgets(concat, sizeof(concat), stdin);
  concatenareSiruri(str1, concat);
  printf("Șirul concatenat este: %s\n", str1);

  printf("Introduceți un alt șir pentru comparație: ");
  fgets(str2, sizeof(str2), stdin);
  int rezultat = comparareSiruri(str1, str2);
  if (rezultat == 0)
    printf("Cele două șiruri sunt egale.\n");
  else
    printf("Cele două șiruri sunt diferite.\n");

  printf("Conversia din litere mici în majuscule: ");
  miciLaMajuscule(str1);
  printf("%s\n", str1);

  printf("Conversia din litere mari în litere mici: ");
  majusculeLaMici(str1);
  printf("%s\n", str1);

  printf("Comutarea între litere mici și majuscule: ");
  comutaLitere(str1);
  printf("%s\n", str1);
  // ex
  int litere, cifre, speciale;
  numaraCaractere(str1, &litere, &cifre, &speciale);
  printf("Numărul total de litere: %d\n", litere);
  printf("Numărul total de cifre: %d\n", cifre);
  printf("Numărul total de caractere speciale: %d\n", speciale);

  printf("Numărul total de vocale: %d\n", numaraVocale(str1));
  printf("Numărul total de consoane: %d\n", numaraConsoane(str1));

  // ex 11
  char str[100];
  char caracter;

  printf("Introduceți un șir: ");
  fgets(str, sizeof(str),
        stdin); // sau folosiți fgets pentru a evita depășirea bufferului

  printf("Numărul total de cuvinte în șir: %d\n", numaraCuvinte(str));

  printf("Inversul șirului: ");
  inversSir(str);
  printf("%s\n", str);

  if (estePalindrom(str))
    printf("Șirul este un palindrom.\n");
  else
    printf("Șirul nu este un palindrom.\n");

  printf("Inversarea ordinei cuvintelor în șir: ");
  inversOrdineCuvinte(str);
  printf("%s\n", str);

  printf("Introduceți un caracter pentru a căuta în șir: ");
  scanf("%c", &caracter);
  getchar(); // pentru a consuma newline-ul rămas în buffer după scanf

  int prima_Aparitie = primaAparitieCaracter(str, caracter);
  if (prima_Aparitie != -1)
    printf("Prima apariție a caracterului '%c' este la poziția %d\n", caracter,
           prima_Aparitie);
  else
    printf("Caracterul '%c' nu a fost găsit în șir.\n", caracter);

  int ultima_Aparitie = ultimaAparitieCaracter(str, caracter);
  if (ultima_Aparitie != -1)
    printf("Ultima apariție a caracterului '%c' este la poziția %d\n", caracter,
           ultima_Aparitie);
  else
    printf("Caracterul '%c' nu a fost găsit în șir.\n", caracter);

  cautaToateAparitiile(str, caracter);

  printf("Numărul total de apariții ale caracterului '%c' în șir: %d\n",
         caracter, numaraAparitii(str, caracter));

  char maxFrecventa = caracterCuFrecventaMaxima(str);
  if (maxFrecventa != '\0')
    printf("Caracterul cu cea mai mare frecvență este '%c'\n", maxFrecventa);
  else
    printf("Nu există caractere în șir.\n");

  char minFrecventa = caracterCuFrecventaMinima(str);
  if (minFrecventa != '\0')
    printf("Caracterul cu cea mai mică frecvență este '%c'\n", minFrecventa);
  else
    printf("Nu există caractere în șir.\n");

  // ex 21
  char character, vechi, nou;
  char cuvant[50];

  printf("Introduceți un șir: ");
  fgets(str, sizeof(str),
        stdin); // sau folosiți fgets pentru a evita depășirea bufferului

  frecventaCaractere(str);

  printf("Introduceți un caracter pentru a elimina prima apariție din șir: ");
  scanf("%c", &character);
  getchar(); // pentru a consuma newline-ul rămas în buffer după scanf
  eliminaPrimaAparitie(str, character);
  printf("Șirul după eliminarea primei apariții a caracterului: %s\n", str);

  printf("Introduceți un caracter pentru a elimina ultima apariție din șir: ");
  scanf("%c", &character);
  getchar(); 
  eliminaUltimaAparitie(str, character);
  printf("Șirul după eliminarea ultimei apariții a caracterului: %s\n", str);

  printf("Introduceți un caracter pentru a elimina toate aparițiile din șir: ");
  scanf("%c", &character);
  getchar(); 
  eliminaToateAparitiile(str, character);
  printf("Șirul după eliminarea tuturor aparițiilor caracterului: %s\n", str);

  eliminaCaractereRepetate(str);
  printf("Șirul după eliminarea tuturor caracterelor repetate: %s\n", str);

  printf("Introduceți caracterul pe care doriți să-l înlocuiți: ");
  scanf("%c", &vechi);
  getchar(); 
  printf("Introduceți caracterul cu care doriți să-l înlocuiți: ");
  scanf("%c", &nou);
  getchar(); 
  inlocuiestePrimaAparitie(str, vechi, nou);
  printf("Șirul după înlocuirea primei apariții a caracterului: %s\n", str);

  inlocuiesteUltimaAparitie(str, vechi, nou);
  printf("Șirul după înlocuirea ultimei apariții a caracterului: %s\n", str);

  inlocuiesteToateAparitiile(str, vechi, nou);
  printf("Șirul după înlocuirea tuturor aparițiilor caracterului: %s\n", str);

  printf("Introduceți un cuvânt pentru a căuta în șir: ");
  fgets(cuvant, sizeof(cuvant),
        stdin); 
  int prima_aparitie = prima_AparitieCuvant(str, cuvant);
  if (prima_Aparitie != -1)
    printf("Prima apariție a cuvântului '%s' este la poziția %d\n", cuvant,
           prima_Aparitie);
  else
    printf("Cuvântul '%s' nu a fost găsit în șir.\n", cuvant);

  int ultima_aparitie = ultima_AparitieCuvant(str, cuvant);
  if (ultima_Aparitie != -1)
    printf("Ultima apariție a cuvântului '%s' este la poziția %d\n", cuvant,
           ultima_Aparitie);
  else
    printf("Cuvântul '%s' nu a fost găsit în șir.\n", cuvant);
//ex 32
  int result = word_count();

  printf("Cuvantul 'multi' apare de %d ori", result);

//ex 33
   eliminaPrimaAparitieCuvant();
  return 0;
}
