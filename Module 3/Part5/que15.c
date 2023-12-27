#include <stdio.h>  
#include <string.h>  
int main(){     
    char string[] = "precaution is better than cure";  
    char words[50][50],small[50],large[50];  
    int i=0,j=0,k,length;  
    for(k=0;string[k]!='\0';k++){  
        if(string[k] != ' ' && string[k] != '\0'){  
            words[i][j++] = string[k];  
        }  
        else{  
            words[i][j] = '\0';  
            i++;  
            j = 0;  
        }  
    }  
    length = i + 1;  
    strcpy(small, words[0]);  
    strcpy(large, words[0]);  
    for(k = 0; k < length; k++){ 
        if(strlen(small) > strlen(words[k])){  
            strcpy(small, words[k]);  
        }  
    if(strlen(large) < strlen(words[k]))  
            strcpy(large, words[k]);  
    }     
    printf("Smallest word: %s\n", small);  
    printf("Largest word: %s", large);  
    return 0;  
}  