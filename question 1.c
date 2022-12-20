/*Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/
#include<stdio.h>
int main()
{ char name[5][20];
  int i,j,count=0;
  printf("enter 5 names:\n");
    for(i=0;i<5;i++)
    { gets(name[i]);
    }

  printf("\n********************************\n");
     for(i=0;i<5;i++)
     { count=0;
         for(j=0;name[i][j]!='\0';j++)
       { if(name[i][j]=='a' || name[i][j]=='e' || name[i][j]=='i' || name[i][j]=='o' || name[i][j]=='u' )
           count++;
       }
       printf("%d string contains %d vowels\n",i+1,count);
     }
return 0;
}
