#include <stdio.h>
#include <stdlib.h>
 
short int primo(int n);
 
int main(void)
{
    int n, verif;
    scanf("%d", &n);
    if(n<=0)
    {
        puts("erro");
        return 0;
    }
 
    if(primo(n))
    {
        printf("primo\n");
    }
    else printf("nao\n");
 
    return 0;
}
 
short int primo(int n)
{
    int counter = 0, i;
 
    for(i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            counter++;
        }
    }
    if(counter>2 || n==1 || n==0) return 0;
    
    else if(counter<=2) return 1;
}