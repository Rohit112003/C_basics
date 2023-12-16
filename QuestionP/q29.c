#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
char str[20],*ptr;
ptr=fgets(str,10,stdin);
if(ptr==NULL)
printf("EOF reached:%p\n",ptr);
else{
printf("Entered string:%s\n",str);
printf("fgets returned:%s\n",ptr);
}
return 0;
}

