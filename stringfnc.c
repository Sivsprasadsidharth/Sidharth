#include<stdio.h>
int strleng(char st[])
 {
  int i,l=0;
  for(i=0;st[i]!='\0';++i)
   l+=1;
  return l;
 }
void strcopy()
 {
 int i=0;
 char s1[20],s2[20];
 printf("Enter string 1");
 scanf("%s",s1);
 printf("Enter string 2");
 scanf("%s",s2);
 printf("string after copying");
 for(;s2[i]!='\0';++i)
   s1[i]=s2[i]; 
 s1[i]='\0';
 printf("%s",s1);
 }
void stringcmp()
 {
  int i=0;char s1[20],s2[20];
  printf("Enter string1");
  scanf("%s",s1);
  printf("Enter string 2");
  scanf("%s",s2);
  if(strleng(s1)!=strleng(s2))
  {printf("Not equal");
   return;
  }
  else
  {
   for(;i<strleng(s1);++i)
   {
    if(s1[i]!=s2[i])
    { printf("Not equal");
     return;
    }
  }
  printf("STRINGS ARE EQUAL");
 }
}
void main()
{
 char s1[20];
 int ch;
 printf("1.Length \n2.Copy \n3.Compare \n4.Exit");
 do
 {printf("Enter choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
         printf("Enter string 1");
         scanf("%s",s1);
         printf("length=%d",strleng(s1));
         break;
   case 2:
         strcopy();
         break;
   case 3:
         stringcmp();
         break;
   case 4:
         break;
   default :
         printf("Wrong choice");
  }
}while(ch!=4);
}
         
             
     
   
