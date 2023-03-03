#ifndef MEMBERS_H
#define MEMBERS_H
enum MEMBER_STATUS{ACT,DCD,RET};
static const int max_name_length=250;
struct MEMBER{
    char* firstname;
    char* lastname;
    int birth_date;
    int promotion;
    int status;
};
typedef struct MEMBER member;
member *newMEMBER();
void deleteMember(member *M);
member *initializeMember(member *m,char *fn,char *ln,int bd,int p,int st);
member *createMember(char *fn,char *ln,int bd,int p,int st);
#endif