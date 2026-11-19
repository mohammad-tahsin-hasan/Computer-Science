#include<stdio.h>
#include<string.h>
#include<stdlib.h>	
 typedef struct {
    char j[100];
    char p[100];
    int k;
    int q;}v;
    
int main(){
    int m=0;
    char h[100];
        v r={"tai","naki",1,7};
 FILE*f;
 f=fopen("f.dat","r");
//  fge ts(h,100,f);
m=fread(&r,sizeof(r),1,f);
 printf("quote :%s\n quote: %s\n num:%d\n ",r.j,r.p,r.q);
  fclose(f); 
  rewind(f);
 
   
 f=fopen("f.dat","r");
//  fge ts(h,100,f);
m=fread(&r,sizeof(r),1,f);
 printf("quote :%s\n quote: %s\n num:%d\n ",r.j,r.p,r.q);
  fclose(f); 


 return 0;
}