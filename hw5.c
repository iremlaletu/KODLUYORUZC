#include <stdio.h>
#include <string.h>

int main(){

    FILE *dosya;
    char karakter;
     dosya=fopen("/Users/apple/Desktop/""dosya.txt","w");
     
     fprintf(dosya, "Hello this is IREM");
    
    fclose(dosya);
    
     
    return 0;
}