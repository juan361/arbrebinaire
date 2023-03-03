#include "members.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

void deleteMember(member *M)
{
    free(M->firstname);
    M->firstname= NULL;
    free(M->lastname);
    M->lastname=NULL;
    free(M);
};

typedef struct MEMBER member;

member * initializemember (member* m, char* fn, char* ln, int bd, int p, int st)
{
    strcpy(m->firstname,fn);
    strcpy(m->lastname,ln);
    m.birth_date = bd;
    m.promotion = p;
    m.status = st;

    return m;
}; 

