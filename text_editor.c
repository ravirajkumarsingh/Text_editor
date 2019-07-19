#include<stdio.h>
#define MAX 100
#define LEN 80

char text[MAX][LEN];


int main()
{
        register int i,j,k;
        printf("Enter the empty line to terminate.\n");
        for(k=0;k<MAX;++k)
        {
            printf("%d: ",k);           //remove the line for better experience :p
            gets(text[k]);
            if(!*text[k]) break;       //quits on blank line
        }

        for(i=0;i<k;++i)
        {
            for(j=0;text[i][j];++j)
                putchar(text[i][j]);
            putchar('\n');
        }

        return 0;
}
