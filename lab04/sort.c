#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

int n;
int arr1[100] arr2[100];

void *selection(void *arg){
clock_t start, end;
start=clock();
for (int i=0;i<n-1;i++){

