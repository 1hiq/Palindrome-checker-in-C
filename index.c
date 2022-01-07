#include <stdio.h>
#include <string.h>


int main(void){

    char word[30];
    printf("Please type a word: ");
    scanf("%s", word);

    FILE *file = fopen("file.txt", "w");
    for(int i = strlen(word) - 1; i > -1; i--){
        fprintf(file, "%c", word[i]);
    }
    fclose(file);


    FILE *f = fopen("file.txt", "r");
    char reverseWord[30];
    fscanf(f, "%s", reverseWord);
    fclose(f);

    if(strcmp(word, reverseWord) == 0){
        printf("This word is palindrome.\n");
    } else {
        printf("This word is not palindrome.\n");
    }


    return 0;
}
