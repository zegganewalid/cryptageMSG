#include<stdio.h>

int main()
{
    char exp[1000];
    char alfbet[26];
    char tab[26];
    char res[1000];
    char *e,*f;
    int dec,n,i;
    while(dec<1 || dec>9){
    printf("donner le decalage entre 1 et 9 : \n");
    scanf("%d",&dec);
    }
    printf("donner l'expression : \n");
    scanf("%s",exp);

    alfbet[0]='a';
    alfbet[1]='b';
    alfbet[2]='c';
    alfbet[3]='d';
    alfbet[4]='e';
    alfbet[5]='f';
    alfbet[6]='g';
    alfbet[7]='h';
    alfbet[8]='i';
    alfbet[9]='j';
    alfbet[10]='k';
    alfbet[11]='l';
    alfbet[12]='m';
    alfbet[13]='n';
    alfbet[14]='o';
    alfbet[15]='p';
    alfbet[16]='q';
    alfbet[17]='r';
    alfbet[18]='s';
    alfbet[19]='t';
    alfbet[20]='u';
    alfbet[21]='v';
    alfbet[22]='w';
    alfbet[23]='x';
    alfbet[24]='y';
    alfbet[25]='z';

    n=dec;
    for(i=0;i<=26;i++)
    {
        tab[i]=alfbet[n+i];
    }
    n=26-dec;
    for(i=0;i<dec;i++)
    {
        tab[n]=alfbet[i];
        n++;
    }

    e=exp;
    i=0;
    while(*e != '\0')
    {
        n=0;
        while(n<=26)
        {
            if(exp[i]==alfbet[n])
            {
                res[i]=tab[n];
            }
            n++;
        }
        i++;
        e++;
    }
    printf("\n");
    printf("%s",res);
}
