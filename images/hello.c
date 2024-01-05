#include<stdio.h>
#include<conio.h>
int main(){

    int n=121;
    int y=n;
    int rev=0;
    
    printf("the original number is=%d\n",n);
    int x=0;
    while(n!=0){
x=n%10;
rev=rev*10+x;
n=n/10;
 
    }
    printf("the reverse number =%d\n",rev);
   if(y==rev)
    printf("the number is palindrome\n");
    else
    printf("not");
   
    getch();
    return (0);
}