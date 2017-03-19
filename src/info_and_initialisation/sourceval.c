//Returns source values

#include "../defs/functions.h"

int sourceval(char s[])
{
    int x=0;
    if(strcompare_case_insensitive(s,"Hostel-A"))   x=1;
    else if(strcompare_case_insensitive(s,"Hostel-B"))  x=2;
    else if(strcompare_case_insensitive(s,"Hostel-C"))  x=3;
    else if(strcompare_case_insensitive(s,"Hostel-D"))  x=4;
    else if(strcompare_case_insensitive(s,"Hostel-E"))  x=5;
    else if(strcompare_case_insensitive(s,"Hostel-F"))  x=6;
    else if(strcompare_case_insensitive(s,"Hostel-G"))  x=7;
    else if(strcompare_case_insensitive(s,"Hostel-H"))  x=8;
    else if(strcompare_case_insensitive(s,"Hostel-S"))  x=9;
    else if(strcompare_case_insensitive(s,"CCD"))   x=10;
    else if(strcompare_case_insensitive(s,"Symbus"))    x=11;
    else if(strcompare_case_insensitive(s,"Mess"))  x=12;
    else if(strcompare_case_insensitive(s,"Rangoli"))   x=13;
    else if(strcompare_case_insensitive(s,"Coffee-Stop"))   x=14;
    else if(strcompare_case_insensitive(s,"Main-Gate")) x=15;
    else
        printf("The entered source node is not available\n");
    return x;
}
