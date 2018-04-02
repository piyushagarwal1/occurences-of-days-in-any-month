#include<stdio.h>
#include<string.h>
int main(){
int t,n,m,r,ans;
char d[3];
scanf("%d",&t);
while(t--){
scanf("%d%s",&n,d);
m=n/7;
r=n%7;
if(r==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m,m,m,m);
   printf("\n");
}
if(r==3){
   if(strcmp(d,"tue")==0){
   printf("%d %d %d %d %d %d %d",m+1,m+1,m+1,m,m,m,m);
   printf("\n");}
   else if(strcmp(d,"wed")==0){
   printf("%d %d %d %d %d %d %d",m,m+1,m+1,m+1,m,m,m);
   printf("\n");}
   else if(strcmp(d,"thu")==0){
   printf("%d %d %d %d %d %d %d",m,m,m+1,m+1,m+1,m,m);
   printf("\n");}
   else if(strcmp(d,"fri")==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m+1,m+1,m+1,m);
   printf("\n");}
   else if(strcmp(d,"sat")==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m,m+1,m+1,m+1);
   printf("\n");}
   else if(strcmp(d,"sun")==0){
   printf("%d %d %d %d %d %d %d",m+1,m,m,m,m,m+1,m+1);
   printf("\n");}
   else if(strcmp(d,"mon")==0){
   printf("%d %d %d %d %d %d %d",m+1,m+1,m,m,m,m,m+1);
   printf("\n");}
 }
 if(r==2){if(strcmp(d,"tue")==0){
   printf("%d %d %d %d %d %d %d",m,m+1,m+1,m,m,m,m);
   printf("\n");}
   else if(strcmp(d,"wed")==0){
   printf("%d %d %d %d %d %d %d",m,m,m+1,m+1,m,m,m);
   printf("\n");}
   else if(strcmp(d,"thu")==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m+1,m+1,m,m);
   printf("\n");}
   else if(strcmp(d,"fri")==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m,m+1,m+1,m);
   printf("\n");}
   else if(strcmp(d,"sat")==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m,m,m+1,m+1);
   printf("\n");}
   else if(strcmp(d,"sun")==0){
   printf("%d %d %d %d %d %d %d",m+1,m,m,m,m,m,m+1);
   printf("\n");}
   else if(strcmp(d,"mon")==0){
   printf("%d %d %d %d %d %d %d",m+1,m+1,m,m,m,m,m);
   printf("\n");}
 }
 if(r==1){if(strcmp(d,"tue")==0){
   printf("%d %d %d %d %d %d %d",m,m+1,m,m,m,m,m);
   printf("\n");}
   else if(strcmp(d,"wed")==0){
   printf("%d %d %d %d %d %d %d",m,m,m+1,m,m,m,m);
   printf("\n");}
   else if(strcmp(d,"thu")==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m+1,m,m,m);
   printf("\n");}
   else if(strcmp(d,"fri")==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m,m+1,m,m);
   printf("\n");}
   else if(strcmp(d,"sat")==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m,m,m+1,m);
   printf("\n");}
   else if(strcmp(d,"sun")==0){
   printf("%d %d %d %d %d %d %d",m,m,m,m,m,m,m+1);
   printf("\n");}
   else if(strcmp(d,"mon")==0){
   printf("%d %d %d %d %d %d %d",m+1,m,m,m,m,m,m);
   printf("\n");}
 }}
  return 0;
 } 

