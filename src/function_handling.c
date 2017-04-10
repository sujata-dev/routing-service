//To read the stored information from files

#include "defs/functions.h"

void function_handling(int x)
{
    FILE *fp;
    char c,d,y=x+32;
    fp=fopen("src/file.dat","r");
    fp=fopen("src/file.dat","r");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(0);
    }
    c=fgetc(fp);
    printf("\n");
    while(c!=EOF)
    {
        d=c;
        while(d==y)
        {
            c=fgetc(fp);
            printf("%c",c);
            if(c=='\n')
                goto label;
        }
        c=fgetc(fp);
    }
    label:
    {
        rewind(fp);
        fclose(fp);
        printf("\n");
    }
}
