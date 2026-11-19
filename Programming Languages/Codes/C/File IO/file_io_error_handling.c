#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
// char p[100]={"ahijhdjhgjkh"};
 printf("error %s\n",strerror(errno));
FILE*f=fopen("tahsin.txt","r");
// fputs(p,f);
perror("error using perror");
EXIT_SUCCESS;

// fgets(p,100,f);
// printf("%s\n ",p);
 fclose(f);


return 0;
}