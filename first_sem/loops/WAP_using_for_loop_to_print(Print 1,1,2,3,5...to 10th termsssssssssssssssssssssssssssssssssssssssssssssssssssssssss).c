#include<stdio.h>

void main(){
    int i;
    int n1=0;
    int n2=1;
    // Print 1,2,3,5...to 10th term
    for ( i = 1; i <= 10; i++ )
    {
        
        
        int nextNum= n1 + n2;//1
        printf("%d\n", nextNum);//1
        n1= n2;//n1=1
        n2= nextNum;//n2=1
        
        
        // b=a;
    }
}
