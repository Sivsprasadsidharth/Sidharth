#include<stdio.h>
#include<string.h>
void main()
{
 char str[50],sub[50];
 int i,j,l1,l2,p,k,f=0;
 printf("Enter string");
 gets(str);
 printf("Enter substring");
 gets(sub);
 l1=strlen(str);
 l2=strlen(sub);
 if(l2>l1)
 {
  printf("Invalid Entry");
  return;
 }
for(i=0;i<l1;++i)
 {
  p=k=i;
  for(j=0;j<l2;++j)
  {
   if(sub[j]==str[k])
     k++;
   else
     break;
}
   if(j==l2)
    {f=1;
    break;
  }
}
 if(f==1)
  printf("Substring at %d",p);
 else
  printf("Substring not found");
}  
