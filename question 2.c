/*Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/
#include<stdio.h>
#include<string.h>
int main()
{ char name[10][20],temp[20];
  int i,j;
  printf("enter 10 city names:\n");
    for(i=0;i<10;i++)
    { gets(name[i]);
    }
    for(i=0;i<9;i++)
    { for(j=i+1;j<10;j++){
        if(strcmp(name[i],name[j])>0)
        { strcpy(temp,name[j]);
          strcpy(name[j],name[i]);
          strcpy(name[i],temp);
        }
     }
    }
    printf(">>>>sorted names in dictionary order<<<<\n");
    for(i=0;i<10;i++)
       printf("%s\n",name[i]);
return 0;
}
