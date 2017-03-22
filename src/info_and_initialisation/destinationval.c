//Returns destination values

#include "../defs/functions.h"

int destinationval(char d[])
{
    int x=0;
    if(strcompare_case_insensitive(d,"Hostel-A"))   x=1;
    else if(strcompare_case_insensitive(d,"Hostel-B"))  x=2;
    else if(strcompare_case_insensitive(d,"Hostel-C"))  x=3;
    else if(strcompare_case_insensitive(d,"Hostel-D"))  x=4;
    else if(strcompare_case_insensitive(d,"Hostel-E"))  x=5;
    else if(strcompare_case_insensitive(d,"Hostel-F"))  x=6;
    else if(strcompare_case_insensitive(d,"Hostel-G"))  x=7;
    else if(strcompare_case_insensitive(d,"Hostel-H"))  x=8;
    else if(strcompare_case_insensitive(d,"Hostel-S"))  x=9;
    else if(strcompare_case_insensitive(d,"CCD"))   x=10;
    else if(strcompare_case_insensitive(d,"Symbus"))    x=11;
    else if(strcompare_case_insensitive(d,"Mess"))  x=12;
    else if(strcompare_case_insensitive(d,"Rangoli"))   x=13;
    else if(strcompare_case_insensitive(d,"Coffee-Stop"))   x=14;
    else if(strcompare_case_insensitive(d,"Academic-Block"))   x=15;
    else if(strcompare_case_insensitive(d,"Main-Gate")) x=16;
    else
        printf("The entered destination node is not available\n");
    return x;
}
