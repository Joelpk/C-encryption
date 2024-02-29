#include<stdio.h>
#include<string.h>

void encryptFile(FILE *inputFile, FILE *outputFile);

    int main(){

        FILE *inputFile, *outputFile;

       inputFile = fopen("filename.txt", "r");
       if (inputFile == NULL)
       {
        printf("File does not exist");
        return 1;
       }

       outputFile = fopen("filename.txt-encrypted", "w");
       if (outputFile == NULL)
       {
        printf("File does not exist");
        return 1;
        
       }

       encryptFile(inputFile, outputFile);
       printf("Encryption Successfull");

       fclose(inputFile);
       fclose(outputFile);

    return 0;
    }

void encryptFile(FILE *inputFile, FILE *outputFile){
    char ch;

    while ((ch = fgetc(inputFile)) != EOF)
    {
        char encryptedChar = '*';
        fputc(encryptedChar, outputFile);
    }
    

}
