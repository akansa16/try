#include<stdio.h>
 int main(){
    int a[5],i;
printf("enter the element of array:");
for(i=0;i<5;i++)
    scanf("%d",&a[i]);//reading purpose
for(i=0;i<5;i++)
    printf("\narray %d:%d",i,a[i]);//printing purpose
    for(i=4;i>=0;i--)
    printf("\narray %d:%d",i,a[i]);
    return 0;
}
