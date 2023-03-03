#ifndef MEMBERS_TOOLS_H
#define MEMBERS_TOOLS_H
#include"members.h"
#include<stdio.h>
int Members_administration(char *filename);
int scanfMember(member *M);
int printfMember(member *M);
int fscanfMember(FILE *file,member *M);
int fprintfMember(FILE *file,member *M);
int readMember(FILE *file,member *M);
int writeMember(FILE *file,member *M);
#endif