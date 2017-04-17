//For case insensitive string comparison

#include "../defs/functions.h"

int strcompare_case_insensitive(char a[],char b[])
{
    size_t len1=strlen(a),len2=strlen(b);
    //lengths should be equal
    if(len1!=len2)
        return 0;
    //converting strings to lowercase and then comparing
    for(size_t i=0;i<len1;++i)
        if(tolower(a[i])!=tolower(b[i]))
            return 0;
    return 1;
}
