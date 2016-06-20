#ifndef CITY_H
#define CITY_H

#include <stdio.h>

#define LEN_MAX 50
#define INF 9999999
#define NUM_ELEMS(x)  (sizeof(x) / sizeof(x[0]))
#define OPTIMA_51   426
#define OPTIMA_105  14379
#define OPTIMA_442  50778

int** readNorm(FILE *f, int dim);
int** readExp(FILE *f, int dim);
float** getDistMatrix(int **city, int dim);
float getDist(int *seq_city, float **dist, int dim);
int* randRoute(int dim);
void shuffle(int *arry, int n);
int readHeader(FILE* inputFile, FILE* resultFile);
float getOptValue(int dim);

// utils
char* trim(char *str);
int convertExptoInt(char *str);

#endif