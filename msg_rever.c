#include    <stdio.h>
#include    <string.h>
#define     MAXSTR  100

void strRevFunc(char *str, char *revStr);

int main(void){

    char str[MAXSTR] = {0};
    char revStr[MAXSTR] = {0};
    int len;

    fgets(str, MAXSTR + 1, stdin);
    len = strlen(str);
    strRevFunc(str, revStr);
    //printf("%s\n", str);
    printf("%s", revStr);

    return 0;
}

void strRevFunc(char *str, char *revStr){
    char *ptr = str + strlen(str) - 1;
    while(*ptr && strlen(revStr) < MAXSTR){
        if(*ptr == '\n'){
            ptr--;
            continue;
        }
        *revStr++ = *ptr--;
    }
}