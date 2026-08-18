Totalmark & Average
-------------------

#include <stdio.h>

int main()
{ 
 char name[50];
 int English, MilEnglish,Physics,Chemistry,Biology,Math,Totalmarks = 0,Average = 0;
 printf("Name of the student          :");
 scanf("%s",name);
 printf("Enter the mark of English    :");
 scanf("%d",&English);
 printf("Enter the mark of Mil English:");
 scanf("%d",&MilEnglish);
 printf("Enter the mark of Physics    :");
 scanf("%d",&Physics);
 printf("Enter the mark of Chemistry  :");
 scanf("%d",&Chemistry);
 printf("Enter the mark of Biology    :");
 scanf("%d",&Biology);
 printf("Enter the mark of Math       :");
 scanf("%d",&Math);
 Totalmarks = English + MilEnglish+Physics+Chemistry+Biology+Math;
 printf("Total marks                  :%d\n",Totalmarks);
 Average = Totalmarks/6;
 printf("Average mark                 :%d",Average);
 return 0;  
}
