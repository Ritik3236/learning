#include<iostream>
#include <algorithm> 

using namespace std; 

int main()
{
    int i,min,max,size,count=0;
    int a[20];
    scanf("%d",&size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    sort(a, a+size);
    min = a[0];
    max = a[size-1];
    for(i=0;i<size-1;i++){
     if(a[i+1] == min+1){
         count++;
         min++;
        }
    }
    // for(i=0;i<size;i++)
    // printf("%d ",a[i]);
    printf(" %d ",count+1);
    
}
