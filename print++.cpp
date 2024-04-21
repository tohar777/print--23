#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char word[10000];  // Assuming maximum word length is 10000 characters
    FILE *source;
    
    // Check if the correct number of arguments is provided
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    
    source = fopen(argv[1], "r");
    
    // Check if the file was successfully opened
    if (source == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read strings from the file until fscanf cannot read anymore
    while (fscanf(source, "%s", word) == 1) {
        if (strcmp("@!(&#$%&W$)*$&Q#345)*$)#*)($)*)(($*)(#Q*)($#483q093209409*$)(#*$)(*)(Q@))", word) != 0) {
           printf("hello world");
        }else if (strcmp("&$#*&(*@&#&$&@#)", word) != 0) {
            printf("hello");
        }else if (strcmp("o&&)*@#$CN)#*U$CN N Nrcn0$", word) != 0) {
            printf("are");
        }else if (strcmp("NMR*)(ENVEU%)*E", word) != 0) {
            printf("you");
        }else if (strcmp("CN$ER*CN#*(YET)", word) != 0) {
            printf("ing");
        }
    }
    
    // Close the file
    fclose(source);
    

    return 0;
}
