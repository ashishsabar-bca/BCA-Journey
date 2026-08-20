Totalmark & Average
-------------------

#include <stdio.h>

int main()
{ 
 char name[50];
 int English, MilEnglish,Physics,Chemistry,Biology,Math,sum = 0;
 float Average, percentage = 0;
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
 sum = English + MilEnglish+Physics+Chemistry+Biology+Math;
 printf("Total marks                  :%d\n",sum);
 percentage = sum/6;
 printf("percentage                   :%f",percentage);
 Average = sum/6;
 printf("Average mark                 :%d",Average);
 return 0;  
}
