#include<stdio.h>
int main(){
    char a;
    printf("Enter any character: ");
    scanf("%c",&a);

    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf(" It is a vowel");
    }
    else{
        printf("It is Consonant");
    }
}