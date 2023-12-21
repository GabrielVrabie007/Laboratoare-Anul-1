#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3
#define SIZE 9
// SIZE 9 l-am folosit la primele exercitii
//  EX 1
void citeste_si_afiseaza(int arr[], int n, int index);
// EX 2
void nr_negative(int arr_2[], int size_2);
// EX 3
int sumaTablou(int arr_3[], int size_3);
// EX 4
void MaxMin_element(int arr_4[], int *max, int *min, int n);
// EX 5
int gasesteAlDoileaCelMaiMare(int arr_5[], int n);
// EX 6
void CountPareImpare(int arr_6[], int n);
// EX 7
void Count_Negative(int arr_7[], int n);
// EX 8
void CopyArray(int size_8);
// EX 9
void inserare(int *v, int N, int position, int value);
// EX 10
void deleteElement(int arr_10[], int *dimesiune, int pozitie);
// EX 11
void calculeazaFregventaRelativa(int arr_11[], int dim);
// XE 12
void printUniqueElements(int arr_12[], int size_12);
// EX 13
void countDublicateElements(int arr_13[], int size_13);
// EX 14
void deleteDuplicateElements(int arr_14[], int size_14);
// EX 15
void combine_two_arrays();
// EX 16
void reverseArray();
// EX 17
void separateEvenOdd();
// EX 18
void findElement();
// EX 19
void sortareCrescatoare();
// EX 21
void ROL();
// EX 22
void ROR();

// EX 1/MATRICI BIDIMENSIONALE
void adunareMatrice(int mat1[ROWS][COLS], int mat2[ROWS][COLS],
                    int result[ROWS][COLS]);
// EX 2
void scadereaMatrice(int mat1[ROWS][COLS], int mat2[ROWS][COLS],
                     int result[ROWS][COLS]);
// EX 3
void inmultireScalar(int mat[ROWS][COLS], int scalar, int result[ROWS][COLS]);
// EX 4
void multiplyMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS],
                      int result[ROWS][COLS]);
// EX 5
int MatriceEgale(int mat1[ROWS][COLS], int mat2[ROWS][COLS]);
// EX 1-5
void afisareMatrice(int mat[ROWS][COLS]);

// EX 6
void sum_Main_Diagonale();
// EX 7
void sum_Secund_Diagonale();
// EX 8
void Sum_Randuri_and_Coloane();
// EX 9
void schimbareDiagonale();
// EX 10
void matrice_Triunghiulara_Superioara();
// EX 11
void matrice_Triunghiulara_Inferioara();
// EX 12
int suma_Triunghiulara_Inferioara();
// EX 13
int suma_Triunghiulara_Superioara();
// EX 14
// Schimba randurile cu coloanele
void transpunereMatrice();
// EX 15
int determinantMatrice();
// EX 18
bool esteSimetrica();

int main() {
  // EX 1
  int n;
  printf("Introduceți dimensiunea tabloului: ");
  scanf("%d", &n);

  int arr[n];
  printf("Introduceți elementele tabloului:\n");

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Elementele tabloului sunt: ");
  citeste_si_afiseaza(arr, n, 0);
  // EX 2
  int arr_2[10] = {10, -9, 3, -7, 2, -143, 8, -54, -88, -32};

  int size_2 = sizeof(arr_2) / sizeof(arr_2[0]);
  nr_negative(arr_2, size_2);

  // EX 3
  int array[SIZE] = {-5, -10, 15, -20, 25, 30, -23, -21, 12};

  int sum = sumaTablou(array, SIZE);
  printf("\nSuma tuturor elementelor din tablou este: %d\n", sum);
  // EX 4
  int max = array[0];
  int min = array[0];
  MaxMin_element(array, &max, &min, SIZE);

  printf("Maxim si minim din matrice sunt:%d %d", max, min);
  // EX 5
  int alDoileaCelMaiMare = gasesteAlDoileaCelMaiMare(array, SIZE);

  printf("\nAl doilea cel mai mare element din tablou este: %d\n",
         alDoileaCelMaiMare);

  // EX 6
  CountPareImpare(array, SIZE);
  // EX 7
  Count_Negative(array, SIZE);

  // EX 8
  CopyArray(SIZE);
  // EX 9
  int N, position, value;

  printf("Dimensiunea tabloului: ");
  scanf("%d", &N);

  // Tablou nou care contine elementul modificat
  int v[N];

  for (int i = 0; i < N; i++) {
    printf("v[%d]: ", i);
    scanf("%d", &v[i]);
  }

  printf("Poziția elementului de inserat: ");
  scanf("%d", &position);

  printf("Valoarea elementului de inserat: ");
  scanf("%d", &value);

  inserare(v, N, position, value);

  // Afișăm tabloul actualizat
  for (int i = 0; i < N; i++) {
    printf("v[%d] = %d\n", i, v[i]);
  }
  // EX 10
  int dimensiune, pozitie;
  printf("Introduceți dimensiunea tabloului: ");
  scanf("%d", &dimensiune);

  int arr_10[dimensiune];

  printf("Introduceți elementele tabloului:\n");
  for (int i = 0; i < dimensiune; i++) {
    scanf("%d", &arr_10[i]);
  }

  printf("Introduceți poziția elementului de șters: ");
  scanf("%d", &pozitie);

  deleteElement(arr_10, &dimensiune, pozitie);

  printf("Tabloul după ștergerea elementului:\n");
  for (int i = 0; i < dimensiune; i++) {
    printf("%d ", arr_10[i]);
  }
  // EX 11
  int dim;
  printf("\nScrie dimensiunea la array:");
  scanf("%d", &dim);
  int arr_11[dim];
  printf("\nScrie elementele la array:");
  for (int i = 0; i < dim; i++) {
    scanf("%d", &arr_11[i]);
  }

  calculeazaFregventaRelativa(arr_11, dim);
  // EX 12
  int array_12[] = {1, 2, 3, 4, 2, 3, 5, 6, 1, 7, 8, 5};
  int size_12 = sizeof(array_12) / sizeof(array_12[0]);

  printUniqueElements(array_12, size_12);

  // EX 13
  int array_13[] = {1, 2, 3, 4, 2, 3, 5, 6, 1, 7, 8, 5};
  int size_13 = sizeof(array_13) / sizeof(array_13[0]);
  countDublicateElements(array_13, size_13);
  // EX 14
  int size_14 = 12; // Dimensiunea inițială a tabloului
  int arr_14[] = {1, 2, 3, 4, 2, 3, 5, 6, 1, 7, 8, 5};

  deleteDuplicateElements(arr_14, size_14);
  // EX 15
  combine_two_arrays();
  // EX 16
  reverseArray();
  // EX 17
  separateEvenOdd();
  // EX 18
  findElement();
  // EX 19
  sortareCrescatoare();
  // EX 21
  ROL();
  // EX 22
  ROR();

  int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int result[ROWS][COLS];
  // EX 1
  printf("\nSuma la matrici este:\n");
  adunareMatrice(matrix1, matrix2, result);
  afisareMatrice(result);
  // EX 2
  printf("Diferenta la matrici este:\n");
  scadereaMatrice(matrix1, matrix2, result);
  afisareMatrice(result);

  // EX 3
  int scalar = 2;
  printf("Matricea inmultita cu un scalar %d:\n", scalar);
  inmultireScalar(matrix1, scalar, result);
  afisareMatrice(result);

  // EX 4
  printf("Produsul matricilor:\n");
  multiplyMatrices(matrix1, matrix2, result);
  afisareMatrice(result);
  // EX 5
  //  Verificarea dacă două matrici sunt egale sau nu
  if (MatriceEgale(matrix1, matrix2)) {
    printf("Matrix1 and Matrix2 sunt egale.\n");
  } else {
    printf("Matrix1 and Matrix2 nu sunt egale.\n");
  }
  // EX 6
  
      // EX 18
      if (esteSimetrica()) {
    printf("Matricea este simetrica.\n");
  }
  else {
    printf("Matricea nu este simetrica.\n");
  }

  return 0;
}
// EX 1
void citeste_si_afiseaza(int arr_1[], int n, int index) {
  // Dacă indexul depășește dim a tabloului
  if (index >= n) {
    return;
  }
  // Afiseaza elementul curent
  printf("%d ", arr_1[index]);

  citeste_si_afiseaza(arr_1, n, index + 1);
}
// EX 2
void nr_negative(int arr_2[], int size) {
  // size+1 deoarece nu il citeste ultimul element
  int count = 0;
  for (int i = 0; i < size + 1; i++) {
    if (arr_2[i] < 0) {
      count++;
    }
  }
  printf("\nNumarul de elemente negative din matrice sunt:%d", count);
}
// EX 3
int sumaTablou(int arr_3[], int size_3) {
  // Cazul de bază: când ajungem la ultimul element al tabloului

  if (size_3 <= 0) {
    return 0;
  }
  // Adună elementul curent cu suma recursivă a restului de elemente
  return arr_3[size_3 - 1] + sumaTablou(arr_3, size_3 - 1);
}
// EX 4
void MaxMin_element(int arr_4[], int *max, int *min, int n) {
  if (n == 0) {
    return;
  }
  MaxMin_element(arr_4, max, min, n - 1);

  if (arr_4[n - 1] > *max) {
    *max = arr_4[n - 1];
  }
  if (arr_4[n - 1] < *min) {
    *min = arr_4[n - 1];
  }
}
// EX 5
int gasesteAlDoileaCelMaiMare(int arr_5[], int n) {
  int primulMaxim = arr_5[0];
  int alDoileaMaxim = arr_5[0];

  for (int i = 1; i < n; i++) {
    if (arr_5[i] > primulMaxim) {
      alDoileaMaxim = primulMaxim;
      primulMaxim = arr_5[i];
    } else if (alDoileaMaxim < arr_5[i] && arr_5[i] != primulMaxim) {
      alDoileaMaxim = arr_5[i];
    }
  }

  return alDoileaMaxim;
}
// XE 6
void CountPareImpare(int arr_6[], int n) {
  int count_par = 0;
  int count_impar = 0;
  for (int i = 0; i < n; i++) {
    if (arr_6[i] % 2 == 0) {
      count_par++;
    } else if (arr_6[i] % 2 != 0) {
      count_impar++;
    }
  }
  printf("Numarul de numere pare este: %d\n", count_par);
  printf("Numarul de numere impare este: %d\n", count_impar);
}
// EX 7
void Count_Negative(int arr_7[], int n) {
  int count_negative = 0;

  for (int i = 0; i < n; i++) {
    if (arr_7[i] < 0) {
      count_negative++;
    }
  }
  printf("Numarul de elemente negative din tablou sunt: %d\n", count_negative);
}
// EX 8
void CopyArray(int size_8) {
  int source[] = {3, -4, 5, 0, 9, 23, 54, 76, 98};
  int destination[SIZE];

  printf("Primul array: ");
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", source[i]);
  }

  printf("\nAl doilea array (copiat): ");
  for (int i = 0; i < size_8; i++) {
    printf("%d ", destination[i]);
  }
  printf("\n");

  for (int i = 0; i < size_8; i++) {
    destination[i] = source[i];
  }
}
// EX 9
void inserare(int *v, int N, int position, int value) {
  // Mișcă elementele de pe poziția lor spre dreapta
  for (int i = N - 1; i >= position; i--) {
    v[i + 1] = v[i];
  }

  v[position] = value;
}
// EX 10
void deleteElement(int arr_10[], int *dimesiune, int pozitie) {
  if (pozitie < 0 || pozitie >= *dimesiune) {
    printf("Pozitie Invalida");
    return;
  }
  // dimensiune-1 deoarece enumerarea se incepe de la 0
  for (int i = pozitie; i < *dimesiune - 1; i++) {
    arr_10[i] = arr_10[i + 1]; // deplaseaza la stanga elementele din tablou
  }
  (*dimesiune)--;
}
// EX 11
void calculeazaFregventaRelativa(int arr_11[], int dim) {
  for (int i = 0; i < dim; i++) {
    int fregventa = 0;
    for (int j = 0; j < dim; j++) {
      if (arr_11[i] == arr_11[j]) {
        fregventa++;
      }
    }
    float fregventaRelativa = (float)fregventa / dim;
    printf("Elementul %d apare de %d ori.Fregevnta relativa este %.2f\n",
           arr_11[i], fregventa, fregventaRelativa);
  }
}
// EX 12
void printUniqueElements(int arr_12[], int size_12) {
  printf("Elementele unice din tablou sunt: ");

  for (int i = 0; i < size_12; i++) {
    int j;
    // Verifica dacă elementul a fost deja printat
    for (j = 0; j < i; j++) { // sau j=i-1
      if (arr_12[i] == arr_12[j]) {
        break;
      }
    }
    // Dacă nu am găsit elementul înainte, îl imprimăm ca fiind unic
    if (i == j) {
      printf("%d ", arr_12[i]);
    }
  }
  printf("\n");
}
// EX 13
void countDublicateElements(int arr_13[], int size_13) {

  int count_13 = 0;
  for (int i = 0; i < size_13; i++) {
    int j;

    // Verificăm dacă elementul a fost deja printat
    for (j = 0; j < i; j++) {
      if (arr_13[i] == arr_13[j]) {
        count_13++;
        printf("%d ", arr_13[i]);
        break;
      }
    }
  }
  printf("\nNumărul total de elemente duplicate din tablou este: %d\n",
         count_13);
}
// EX 14
void deleteDuplicateElements(int arr_14[], int size_14) {
  for (int i = 0; i < size_14; i++) {
    for (int j = i + 1; j < size_14; j++) {
      // Verifică duplicatul
      if (arr_14[i] == arr_14[j]) {
        // Elimină elementul duplicat
        for (int k = j; k < size_14 - 1; k++) {
          arr_14[k] = arr_14[k + 1];
        }
        size_14--; // Scade dimensiunea tabloului după eliminare
        j--;       // Scade indexul pentru a verifica alte duplicate
      }
    }
  }
  printf("\nElementele tabloului după eliminarea duplicatelor: ");
  for (int i = 0; i < size_14; i++) {
    printf("%d ", arr_14[i]);
  }
  printf("\n");
}
// EX 15
void combine_two_arrays() {
  int matrix_1[] = {1, 2, 3, 4, 5, 6, 7};
  int matrix_2[] = {8, 9, 10, 11, 12, 13, 14};
  int dim1 = sizeof(matrix_1) / sizeof(matrix_1[0]);
  int dim2 = sizeof(matrix_2) / sizeof(matrix_2[0]);
  int dim3 = dim1 + dim2;
  int matrix_3[dim3];

  for (int i = 0; i < dim1; i++) {
    matrix_3[i] = matrix_1[i];
  }
  for (int i = dim1; i < dim3; i++) {
    matrix_3[i] = matrix_2[i - dim1];
  }
  printf("Noul array combinat din altele 2 este:\n");
  for (int i = 0; i < dim3; i++) {
    printf("%d ", matrix_3[i]);
  }
}
// EX 16
void reverseArray() {
  int arr_16[] = {1, 2, 3, 4, 5};
  int size_16 = sizeof(arr_16) / sizeof(arr_16[0]);
  printf("\nTabloul initial este: ");
  for (int i = 0; i < size_16; i++) {
    printf("%d ", arr_16[i]);
  }
  printf("\n");

  int start = 0;
  int end = size_16 - 1;
  int temp;

  while (start < end) {
    // Schimbă elementele de la început și sfârșit,se intalnesc la mijloc
    temp = arr_16[start];
    arr_16[start] = arr_16[end];
    arr_16[end] = temp;

    // Se duce spre mijlocul tabloului
    start++;
    end--;
  }
  printf("Tabloul inversat este: ");
  for (int i = 0; i < size_16; i++) {
    printf("%d ", arr_16[i]);
  }
  printf("\n");
}
// EX 17
void separateEvenOdd() {
  int arr_17[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size_17 = sizeof(arr_17) / sizeof(arr_17[0]);
  int evenIndex = 0, oddIndex = 0;
  // urmăresc indexul pentru elementele pare și impare în array-ul rezultat
  // (even și odd).

  int even[size_17], odd[size_17];
  // tin seama de dimensiunea efectiva a array-urilor even și odd.
  int evenSize = 0, oddSize = 0;

  for (int i = 0; i < size_17; i++) {
    if (arr_17[i] % 2 == 0) {
      even[evenIndex] = arr_17[i]; // Atribuim indexul in array-ul even
      evenIndex++;
    } else {
      odd[oddIndex] = arr_17[i];
      oddIndex++;
    }
  }
  // Acest for scapa de zerourile formate de locurile libere din array
  for (int i = 0; i < size_17; i++) {
    if (even[i] != 0) {
      evenSize++;
    }
    if (odd[i] != 0) {
      oddSize++;
    }
  }

  printf("Elementele pare sunt: ");
  for (int i = 0; i < evenSize; i++) {
    printf("%d ", even[i]);
  }
  printf("\n");

  printf("Elementele impare sunt: ");
  for (int i = 0; i < oddSize; i++) {
    printf("%d ", odd[i]);
  }
  printf("\n");
}
// EX 18
void findElement() {

  int arr_18[] = {2, 4, 2, 7, 9, 2, 5, 2, 4};

  int dim_18 = sizeof(arr_18) / sizeof(arr_18[0]);

  for (int i = 0; i < dim_18; i++) {

    if (arr_18[i] == 2) {
      printf("Indexul valorii 2 este pe pozitia:%d\n ", i);
    }
  }
}
// EX 19
void sortareCrescatoare() {
  int arr[] = {3, 8, 6, 1, 77, 32, 21, 99, 123};
  int dim = sizeof(arr) / sizeof(arr[0]);

  printf("Array-ul initial este: ");
  for (int i = 0; i < dim; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int temp;

  for (int i = 0; i < dim - 1; i++) {
    for (int j = i + 1; j < dim; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("Array-ul sortat în ordine crescătoare este: ");
  for (int i = 0; i < dim; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// EX 21
void ROL() {
  int arr_21[] = {2, 3, 4, 5, 6, 7};
  int dim_21 = sizeof(arr_21) / sizeof(arr_21[0]);
  int steps = 3; // indica cate elemente de la inceputul array vrem sa mutam la
                 // dreapta array/sfarsit array

  printf("Tabloul initial este:");

  for (int i = 0; i < dim_21; i++) {
    printf("%d ", arr_21[i]);
  }
  printf("\n");

  int temp;
  for (int i = 0; i < steps; i++) {
    temp = arr_21[0]; // Salveaza primul element în variabila temp
    for (int j = 0; j < dim_21 - 1; j++) {
      arr_21[j] = arr_21[j + 1];
    }
    arr_21[dim_21 - 1] = temp; // Punem primul element la sfârșitul tabloului
  }

  printf("\nTabloul dupa rotirea la stanga: ROL este:\n");
  for (int i = 0; i < dim_21; i++) {
    printf("%d ", arr_21[i]);
  }
}

// EX 22
void ROR() {
  int arr_22[] = {2, 3, 4, 5, 6, 7};
  int dim_22 = sizeof(arr_22) / sizeof(arr_22[0]);
  int steps = 3; // indica cate elemente de la inceputul array vrem sa mutam la
                 // dreapta array/sfarsit array

  printf("\n\nTabloul initial este:");

  for (int i = 0; i < dim_22; i++) {
    printf("%d ", arr_22[i]);
  }
  printf("\n");

  int temp;

  for (int i = 0; i < steps; i++) {
    temp = arr_22[dim_22 - 1]; // Salvăm ultimul element în variabila temp

    // Mutăm elementele către dreapta
    for (int j = dim_22 - 1; j > 0; j--) {
      arr_22[j] = arr_22[j - 1];
    }

    arr_22[0] = temp; // => primul element să fie ultimul
  }

  printf("\nTabloul dupa rotirea la dreapta: ROR este:\n");
  for (int i = 0; i < dim_22; i++) {
    printf("%d ", arr_22[i]);
  }
}
// EX 1 MATRICI BIDIMENSIONALE
void adunareMatrice(int mat1[ROWS][COLS], int mat2[ROWS][COLS],
                    int result[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      result[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}
// EX 2
void scadereaMatrice(int mat1[ROWS][COLS], int mat2[ROWS][COLS],
                     int result[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      result[i][j] = mat1[i][j] - mat2[i][j];
    }
  }
}
// EX 3
void inmultireScalar(int mat[ROWS][COLS], int scalar, int result[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      result[i][j] = mat[i][j] * scalar;
    }
  }
}
// EX 4
void multiplyMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS],
                      int result[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      result[i][j] = 0;
      for (int k = 0; k < COLS; k++) {
        result[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
}
// EX 5
int MatriceEgale(int mat1[ROWS][COLS], int mat2[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if (mat1[i][j] != mat2[i][j]) {
        return 0;
      }
    }
  }
  return 1;
}
// EX 1-5
void afisareMatrice(int mat[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
// EX 6 suma de pe diagonala principala
void sum_Main_Diagonale() {
  int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int sumaDiagonala = 0;

  printf("Matricea data este:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrix2[i][j]);
      if (i == j) {
        sumaDiagonala +=
            matrix2[i][j]; // Aduna doar elementele de pe diagonala principală
      }
    }
    printf("\n");
  }

  printf("\nSuma elementelor de pe diagonala principala este: %d\n",
         sumaDiagonala);
}
// EX 7 //Suma elementelor de pe diagonala secundara
void sum_Secund_Diagonale() {
  int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int sumDiagonalaSecund = 0;

  printf("Matricea data este:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrix2[i][j]);
      if (i + j == ROWS - 1) {
        sumDiagonalaSecund +=
            matrix2[i][j]; // Aduna doar elementele de pe diagonala secundară
      }
    }
    printf("\n");
  }

  printf("\nSuma elementelor de pe diagonala secundara este: %d\n",
         sumDiagonalaSecund);
}
// EX 8
void Sum_Randuri_and_Coloane() {
  int matrice[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int sumaRanduri[ROWS] = {0};
  int sumaColoane[COLS] = {0};

  // Calcul suma pentru fiecare rând și coloană
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      sumaRanduri[i] += matrice[i][j];
      sumaColoane[j] += matrice[i][j];
    }
  }

  printf("Suma pentru fiecare rand:\n");
  for (int i = 0; i < ROWS; i++) {
    printf("Randul %d: %d\n", i + 1, sumaRanduri[i]);
  }

  printf("\nSuma pentru fiecare coloana:\n");
  for (int j = 0; j < COLS; j++) {
    printf("Coloana %d: %d\n", j + 1, sumaColoane[j]);
  }
}

// EX 9
void schimbareDiagonale() {
  int matrice[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int temp;
  for (int i = 0; i < ROWS; i++) {
    temp = matrice[i][i]; // Se salvează elementul de pe diagonală

    matrice[i][i] =
        matrice[i][ROWS - i - 1]; // schimbă elementul de pe diagonală cu cel
                                  // simetric față de aceasta
    matrice[i][ROWS - i - 1] =
        temp; //înlocuiește elementul simetric cu cel salvat inițial
  }
  printf("Matricea dupa schimbarea diagonalelor:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrice[i][j]);
    }
    printf("\n");
  }
}
//
// EX 10
void matrice_Triunghiulara_Superioara() {
  int matrice[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  printf("Matricea initiala:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrice[i][j]);
    }
    printf("\n");
  }

  printf("\nMatricea triunghiulara superioara:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if (j < i) {
        printf("0 "); // Elementele sub diagonala principală
      } else {
        printf(
            "%d ",
            matrice[i][j]); // Elementele deasupra sau pe diagonala principală
      }
    }
    printf("\n");
  }
}
// EX 11
void matrice_Triunghiulara_Inferioara() {
  int matrice[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  printf("Matricea initiala:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matrice[i][j]);
    }
    printf("\n");
  }

  printf("\nMatricea triunghiulara inferioara:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if (j > i) {
        printf("0 "); // Elementele deasupra diagonalei principale
      } else {
        printf("%d ",
               matrice[i][j]); // Elementele sub sau pe diagonala principala
      }
    }
    printf("\n");
  }
}
// EX 12
int suma_Triunghiulara_Inferioara() {
  int matrice[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int Sum_Triunghiulara_Inferioara = 0;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j <= i; j++) {
      Sum_Triunghiulara_Inferioara +=
          matrice[i][j]; // Adună doar elementele din partea inferioară sau de
                         // pe diagonala principală
    }
  }
  return Sum_Triunghiulara_Inferioara;
}
// EX 13
int suma_Triunghiulara_Superioara() {
  int matrice[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int Sum_Triunghiulara_Superioara = 0;
  for (int i = 0; i < ROWS; i++) {
    for (int j = i; j < COLS; j++) {
      Sum_Triunghiulara_Superioara +=
          matrice[i][j]; // Adună doar elementele din partea superioară sau de
                         // pe diagonala principală
    }
  }
  return Sum_Triunghiulara_Superioara;
}
// EX 14
// Schimba randurile cu coloanele
void transpunereMatrice() {
  int matrice[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matriceTranspusa[ROWS][COLS];

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      matriceTranspusa[i][j] = matrice[j][i];
    }
  }

  printf("Matricea transpusa:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", matriceTranspusa[i][j]);
    }
    printf("\n");
  }
}
// EX 15
int determinantMatrice() {
  int matrice[2][2] = {{1, 2}, {3, 4}};
  int determinant =
      (matrice[0][0] * matrice[1][1]) - (matrice[0][1] * matrice[1][0]);
  return determinant;
}

// Matrice simetrica matrice[i][j]!=matrice[j][i]
// EX 18
bool esteSimetrica() {
  int matrice[ROWS][COLS] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < i; j++) {
      if (matrice[i][j] != matrice[j][i]) {
        return false;
      }
    }
  }
  return true;
}