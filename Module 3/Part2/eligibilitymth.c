#include<stdio.h>
int main(){
    int phy,maths,chem,total,t2;
    printf("Enter the marks of physics ,maths,chemistry");
    scanf("%d %d %d",&phy,&maths,&chem);
    total=phy+maths+chem;
    t2=phy+maths;
    if((maths>=65) && (phy>=55) && (chem>=50) && (total>=190) || (t2>=140))
    {
        printf("eligible for professional course");
    }
    else{
        printf("not eligible for this course");
    }
}