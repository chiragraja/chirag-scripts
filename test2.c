#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n,i,a;
     system("clear");
     printf("How Many N Do You Want To Enter : ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
     printf("Enter N => ");
     scanf("%d",&a);
     if(a%2==0)
           break;
    }
     printf("Dont Input Odd Numbers");
     getchar();
}
