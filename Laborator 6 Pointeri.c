#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 5
#define dimension 3
#define ROWS 3
#define COLS 3

// ex 1
void print_using_pointers();
// ex 2
int add_2Numbers();
// ex 3
void swap();
// ex 4
void displayMatrix();
// ex 5
void copiaza_matrice(int *matrix1, int *matrix2);
// ex 6
void swapMatrices(int *mat1, int *mat2, int rows, int cols);

void displayMatrice(int *mat, int rows, int cols);
// EX 7
void matrice_Transpusa();
// ex 8
void find_Element_Pointer();
// ex 9
void Main_Diagonale();
// ex 10
void adunare_Matrici();
//ex 12
void lungimeSir();
//ex 13
void copyString();
//ex 14 alipirea 2 strings
void concatenateStrings();
//ex 15
int compareStrings();
//ex 16
void reverseString();
//ex 18
void operatii_cu_pointeri(int x, int y, int *sum, int *difference, int *product);
//ex 1 alocare memeorie  case 19
int aloc_memory();
//ex 6 
char *clonare_sir(char *sir);
// Clonează un tablou unidimensional
int *clonare_tablou(int *tablou, int n);

int main(void) {
  int choice;
  printf("Introduceti numarul exerctiului de la 1 la 20: ");
  scanf("%d", &choice);

  switch (choice) {

  case 1: {
    print_using_pointers();
    break;
  }
  case 2: {
    add_2Numbers();
    break;
  }
    // ex 3
    // interschimba valorile a 2 variabile
  case 3: {
    swap();
    break;
  }
  case 4: {
    // displayMatrix();

    break;
  }
  case 5: {
    int matrix1[dimension][dimension] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int matrix2[dimension][dimension];

    printf("Matricea originala este:\n");
    for (int i = 0; i < dimension; i++) {
      for (int j = 0; j < dimension; j++) {
        printf("%d ", matrix1[i][j]);
      }
      printf("\n");
    }

    copiaza_matrice((int *)matrix1, (int *)matrix2);

    // Afișarea matricei copiate
    printf("Matricea copiată este:\n");
    for (int i = 0; i < dimension; i++) {
      for (int j = 0; j < dimension; j++) {
        printf("%d ", matrix2[i][j]);
      }
      printf("\n");
    }

    break;
  }
  case 6: {
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};

    printf("Matricea 1 inainte de interschimbare:\n");
    displayMatrice(&matrix1[0][0], ROWS, COLS);

    printf("Matricea 2 inainte de interschimbare:\n");
    displayMatrice(&matrix2[0][0], ROWS, COLS);

    swapMatrices(&matrix1[0][0], &matrix2[0][0], ROWS, COLS);

    printf("Matricea 1 dupa interschimbare:\n");
    displayMatrice(&matrix1[0][0], ROWS, COLS);

    printf("Matricea 2 dupa interschimbare:\n");
    displayMatrice(&matrix2[0][0], ROWS, COLS);
    break;
  }
  case 7: {
    matrice_Transpusa();
    break;
  }
  case 8: {
    find_Element_Pointer();
    break;
  }
  case 9: {
    Main_Diagonale();
    break;
  }
  case 10: {
    adunare_Matrici();
    break;
  }
  
    case 12:{
       lungimeSir();
      break;
    }
    case 13:{
     copyString();
      break;
    }
    case 14:{
      
     concatenateStrings();
      break;
    }
    case 15:{
       if (compareStrings() == 0)
          printf("Șirurile sunt identice.\n");
        else
          printf("Șirurile sunt diferite.\n");
      break;
    }
    case 16:{
       reverseString();
      break;
    }
    case 18:{
      int x = 10, y = 5;
      int sum, difference, product;

      operatii_cu_pointeri(x, y, &sum, &difference, &product);

      printf("Suma: %d\n", sum);
      printf("Diferenta: %d\n", difference);
      printf("Produsul: %d\n", product);
      break;
    }
    case 19:{
      aloc_memory();
      break;
    }
  case 20:{
    char *sir = "Nota 10 treci la loc";
    char *nou_sir = clonare_sir(sir);
    printf("Sirul original: %s\n", sir);
    printf("Sirul clonat: %s\n", nou_sir);
    free(nou_sir);

    // Exemple de clonare a unui tablou unidimensional
    int tablou[] = {1, 2, 3, 4, 5};
    int *nou_tablou = clonare_tablou(tablou, 5);
    for (int i = 0; i < 5; i++) {
      printf("Valoarea %d din tabloul original: %d\n", i, tablou[i]);
      printf("Valoarea %d din tabloul clonat: %d\n", i, nou_tablou[i]);
    }
    free(nou_tablou);

    break;
  }
  }

  return 0;
}

// ex 1

void print_using_pointers() {

  int age = 43;
  int *ptr = &age;

  printf("%p\n", &age);
  printf("%p\n", ptr);
  printf("%d\n", *ptr);
}
// ex 2
int add_2Numbers() {

  int a = 21;
  int b = 32;
  int *ptr1 = &a;
  int *ptr2 = &b;

  printf("Am adunat 2 numere folosind pointeri rezultatul este %d+%d=%d", a, b,
         *ptr1 + *ptr2);

  return a + b;
}
// ex 3
void swap() {

  int a, b;
  printf("Introduceti 2 numere int pentru a le interschimba valorile lor:\n");
  scanf("%d %d", &a, &b);

  printf("Numerele initiale sunt %d %d\n", a, b);

  int *ptr1 = &a;
  int *ptr2 = &b;
  int temp;

  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;

  printf("Numerele dupa interschimbare prin pointeri sunt:%d %d", a, b);
}
// ex 4
void displayMatrix() {

  int *matrix[SIZE];
  printf("Introduceți elementele matricei:\n");
  for (int i = 0; i < SIZE; i++) {
    printf("Elementul [%d]: ", i);
    scanf("%d", &matrix[i]);
  }

  printf("Elementele matricei sunt:\n");
  for (int i = 0; i < SIZE; ++i) {
    printf("%d ", *(matrix + i));
  }
  printf("\n");
}

// ex 5
void copyArray(int *source, int *destination, int size) {

  for (int i = 0; i < SIZE; i++) {
    *(source + i) = *(destination + i);
  }
}
void displayArray_ex5() {
  int *matrice;
  for (int i = 0; i < SIZE; ++i) {
    printf("%d ", *(matrice + i));
  }
  printf("\n");
}

// ex 5
void copiaza_matrice(int *matrix1, int *matrix2) {

  // Trece prin toata matricea sursa
  for (int i = 0; i < dimension; i++) {
    for (int j = 0; j < dimension; j++) {
      // Copierea elementului din matricea sursă în matricea destinație
      matrix2[i * dimension + j] = matrix1[i * dimension + j];
    }
  }
}

// ex 6 interschimba valorile matricelor
void swapMatrices(int *mat1, int *mat2, int rows, int cols) {
  int temp;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      temp = *((mat1 + i * cols) + j);
      *((mat1 + i * cols) + j) = *((mat2 + i * cols) + j);
      *((mat2 + i * cols) + j) = temp;
    }
  }
}

void displayMatrice(int *mat, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d\t", *((mat + i * cols) + j));
    }
    printf("\n");
  }
  printf("\n");
}
// ex 7
//  Matrice transpusa schimba randurile cu coloanele prin pointeri
void matrice_Transpusa() {

  int matrice[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int Transpusa[ROWS][COLS];

  int(*ptr_matrice)[COLS] = matrice;     // pointer catre matricea initiala
  int(*ptr_Transpusa)[ROWS] = Transpusa; // pointer catre matricea transpusa

  printf("Matricea initiala:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrice[i][j]);
    }
    printf("\n");
  }

  printf("Matricea transpusa utilizand pointeri:\n");
  for (int i = 0; i < COLS; i++) {
    for (int j = 0; j < ROWS; j++) {
      ptr_Transpusa[i][j] = ptr_matrice[j][i];
      printf("%d ", ptr_Transpusa[i][j]);
    }
    printf("\n");
  }
}
// ex 8

void find_Element_Pointer() {

  int matrix[ROWS][COLS] = {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}};

  int size = ROWS * COLS;

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  int toSearch;
  printf("Enter the element to search: ");
  scanf("%d", &toSearch);

  int *arr = &matrix[0][0]; // Pointer către primul element al matricei
  int *arrEnd =
      &matrix[ROWS - 1][COLS - 1]; // Pointer către ultimul element al matricei
  int index = 0;

  while (arr <= arrEnd && *arr != toSearch) {
    arr++; // Incrementarea pointerului către elementul următor
    index++;
  }

  if (arr <= arrEnd) {
    printf("Elementul %d există în matrice la poziția %d.\n", toSearch,
           index + 1);
  } else {
    printf("Elementul %d nu există în matrice.\n", toSearch);
  }
}
// ex 9
void Main_Diagonale() {
  int matrix[ROWS][COLS] = {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}};
  int *ptr = &matrix[0][0]; // Pointer către primul element al matricei

  printf("Matricea initiala:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("Elementele de pe diagonala principala sunt: ");
  for (int i = 0; i < ROWS; i++) {
    printf("%d ", *ptr); // Afiseaza elementul curent pe diagonala
    ptr += COLS + 1;     // Avansam la urmatorul element pe diagonala
  }
  printf("\n");
}
// ex 10
void adunare_Matrici() {

  int matrix1[ROWS][COLS] = {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}};
  int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int *ptr1 = &matrix1[0][0];
  int *ptr2 = &matrix2[0][0];
  int result[ROWS][COLS];
  /*printf("matrix1 este:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrix1[i][j]);
    }
    printf("\n");
  }
  printf("matrix2 este:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrix2[i][j]);
    }
    printf("\n");
  }
*/
  printf("matrix1 adunata cu matrix2 este:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      result[i][j] = *(ptr1 + i * COLS + j) + *(ptr2 + i * COLS + j);
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
}
//ex 12
void lungimeSir() {
  char text[] = "10 din oficiu  ";
  char *textBegin = text; // pointeaza spre inceputul sirului
  int lungime=0;
  while (*textBegin != '\0') {
          lungime++;
          textBegin++; // se duce la urmatorul caracter
      }


   printf("Sirul %s are lungimea: %d\n", text, lungime); 

}
//ex 13 copie un sir in altul
void copyString() {
    char source[] = "Hello, world!";
    char destination[50];
    char *src = source; 
    char *dest = destination;

    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0'; 

    printf("Sursa: %s\n", source);
    printf("Destinatie: %s\n", destination);
}
//ex 14 alipirea 2 strings
void concatenateStrings() {
  char firstString[50] = "Hello, ";
  char secondString[] = "world!";
  char *str1=firstString;
  char *str2=secondString;
    while (*str1 != '\0') {
        str1++; // Se mută la sfârșitul primului șir
    }

    while (*str2 != '\0') {
        *str1 = *str2; 
        str1++;
        str2++;
    }
    *str1 = '\0'; 
   printf("Concatenarea: %s\n", firstString);

}
//ex 15
int compareStrings() {
  char string1[] = "Hello";
  char string2[] = "Hello";
  char *str1=string1;
  char *str2=string2;
    while (*str1 == *str2) {
        if (*str1 == '\0' || *str2 == '\0') // Verifica sfârșitul șirului
            break;
        str1++;
        str2++;
    }

    if (*str1 == '\0' && *str2 == '\0')
        return 0; // Șirurile sunt identice
    else
        return -1; // Șirurile sunt diferite
}
//ex 16
void reverseString() {
  char string[] = "Hello, world!";
  char *str=string;

  printf("Șirul original: %s\n", string);
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        // Schimba caracterele de la început și sfârșit
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
   printf("Șirul inversat: %s\n", string);
}
//ex 18
void operatii_cu_pointeri(int x, int y, int *sum, int *difference, int *product) {
    *sum = x + y;
    *difference = x - y;
    *product = x * y;
}
//ex 1 alocare memorie
int aloc_memory(){
char *string;


string = (char *)malloc(50 * sizeof(char));

if (string == NULL) {
    printf("Alocarea de memorie a esuat.\n");
    return -1;
}


printf("Introduceti un sir de caractere: ");
fgets(string, 50, stdin);

printf("Sirul introdus este: %s\n", string);


free(string);
return 0;
}
//ex 6 
char *clonare_sir(char *sir) {

  char *nou_sir = (char *)malloc(strlen(sir) + 1);

  strcpy(nou_sir, sir);
  
  return nou_sir;
}
// Clonează un tablou unidimensional
int *clonare_tablou(int *tablou, int n) {
  // Alocăm memorie pentru noul tablou
  int *nou_tablou = (int *)malloc(n * sizeof(int));

  // Copiază conținutul vechiului tablou în noul tablou
  for (int i = 0; i < n; i++) {
    nou_tablou[i] = tablou[i];
  }
  return nou_tablou;
}