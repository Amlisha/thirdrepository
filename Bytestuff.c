//Byte stuffing
#include <stdio.h>
#include<string.h>

int main(){
    char bit[50];
    char stuff[50];
    int count=0;
    int i=0,j=0;

    printf("Input data:");
    scanf("%s",bit);
    stuff[j++]='$';

    for(i=0;i<strlen(bit);i++){
        if(bit[i]=='#' || bit[i]=='$')
            stuff[j++]='#';
        stuff[j++]=bit[i];
    }
    stuff[j++]='$';
    stuff[j]='\0';

    printf("bit array:");
    printf("%s\r\n",bit);

    printf("stuff array:");
    printf("%s\r\n",stuff);
    
    return 0;

}


//This is my first fork edit to this file
=======

// This is a c program that has fork feature added to it.
//Added comment in this file. Please find the comment in this file.
