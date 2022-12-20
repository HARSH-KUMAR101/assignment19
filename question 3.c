/*Write a program to read and display a 2D array of strings in C language.*/
#include<stdio.h>
int main()
{
    char words[4][5] = {"word", "bird", "lost", "grid"};
    for(int i=0; i<4; i++)
    {
        puts(words[i]);
    }
    return 0;
}
