#include<stdio.h>

int main()
{
    int i,j,count=0,find;
    char word[2] = {'a','b'};
    char name[10];
    scanf("%s",name);
    for(i=0;i<5 && count<2;i++){
        for(j=0;j<5;j++){
            if(word[i]==name[j]){
                count++;
                break;
            }
        }
    }
    (count>=2) ? printf("YES") :  printf("NO");
}
