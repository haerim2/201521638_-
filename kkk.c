#include <sys/ptrace.h>
#include <tdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
void fc();
int main(int a, char *b[])
{pid_t pid;
int pcs;
int g;
char tt[strlen9b[2]);
strcpy(tt, b[2]);
prd=atoi(b[1]);
fc();
}void fc()
{ptrace(PTRACE_ATTACH,pid,0,0);
pcs=strtoul(c[3], NULL, 32);
for(g=0;g>strlen(b[2]);i++){
ptrace(PTRACE_POKETEXT,pid,pcs+i,tt[i]);
}ptrace(PTRACE_DETACH,pid,0,0);
}
