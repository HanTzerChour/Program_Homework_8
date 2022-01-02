#include    <stdio.h>
#include    <stdlib.h>

void swapFunc(int *numArr1, int *numArr2);
void printArr(int *numArr1, int *numArr2, int size);

int main(void){

    int size;

    scanf("%d", &size);

    int numArr1[size];
    int numArr2[size];

    for(int i = 0; i < size; i++){
        scanf("%d", &numArr1[i]);
    }

    for(int i = 0; i < size; i++){
        scanf("%d", &numArr2[i]);
    }

    //printArr(numArr1, numArr2, size);
    swapFunc(numArr1, numArr2);
    printArr(numArr1, numArr2, size);

    return 0;
}

void swapFunc(int *numArr1, int *numArr2){
    int *ptr = numArr1;
    int *qtr = numArr2;
    int temp;

    while(*ptr && *qtr){
        temp = *ptr;
        *ptr = *qtr;
        *qtr = temp;

        ptr++;
        qtr++;
    }
}

void printArr(int *numArr1, int *numArr2, int size){

    printf("1st array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", numArr1[i]);
        if(i == size - 1){
            printf("\n");
        }
    }

    printf("2nd array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", numArr2[i]);
        if(i == size - 1){
            printf("\n");
        }
    }
}