//To exit to continue service

#include "defs/functions.h"

void exitservice(char ans[])
{
    //ans=malloc(256);
    printf("\nWant to exit? (Yes/No): ");
    scanf(" %99[^\n]", ans);
    //scanf("%s",ans);
    if(strcompare_case_insensitive(ans,"yes"))
        exit(1);
}
