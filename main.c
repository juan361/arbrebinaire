#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "Members.h"
#include "Members_Tools.h"

const char help_txt[]="options of this program are:\n-i or --input : specify input file name.this option is mandatory.\n-h or --help: display this help.\exemple: .\TP_AB --input toto.sav\n";
const char error_txt[]="there is no filename in input arguments. This is mandatory:\n";

int main (int argc,char** argv)
{
    char *filename=NULL;
    for(int index = 1;index<argc;index++)
    {
        if(0 == strcmp("--input",argv[index]) || 0 == strcmp("-l",argv[index]))
        {
            index++;
            if( index < argc)
            {
                filename = argv[index];
            }
        }
        if(0 == strcmp("--help",argv[index]) || 0 == strcmp("-h",argv[index]))
        {
            printf( help_txt);
            return 0;
        }
    }

    if( NULL == filename)
    {
        printf(error_txt);
        printf(help_txt);
        return 0;
    }
}