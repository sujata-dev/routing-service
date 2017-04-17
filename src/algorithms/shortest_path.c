//For displaying the shortest path

#include "../defs/functions.h"

void shortest_path(char str[])
{
    int i=strlen(str)-1,j=0,k=0;
    char ch;
    //inverting path to get the correct path
    while(i>j)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i--;
        j++;
    }
    printf("\nShortest Path:\n\n");
    printf("\tStart-> ");
    //replacing alphabets with actual appropriate landmarks
    while(str[k]!='\0')
    {
        switch(str[k])
        {
            case 'A':   printf("Hostel A-> ");
                        break;
            case 'B':   printf("Hostel B-> ");
                        break;
            case 'C':   printf("Hostel C-> ");
                        break;
            case 'D':   printf("Hostel D-> ");
                        break;
            case 'E':   printf("Hostel E-> ");
                        break;
            case 'F':   printf("Hostel F-> ");
                        break;
            case 'G':   printf("Hostel G-> ");
                        break;
            case 'H':   printf("Hostel H-> ");
                        break;
            case 'I':   printf("Hostel S-> ");
                        break;
            case 'J':   printf("CCD-> ");
                        break;
            case 'K':   printf("Symbus-> ");
                        break;
            case 'L':   printf("Mess-> ");
                        break;
            case 'M':   printf("Rangoli-> ");
                        break;
            case 'N':   printf("Coffee Stop-> ");
                        break;
            case 'O':   printf("Academic Block-> ");
                        break;
            case 'P':   printf("Main Gate-> ");
                        break;
        }
        k++;
    }
    printf("End\n");
}
