// The start of a program to record stats for a character

#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int hStats[5]; // aray for the stats
    string statNames[5]; // aray that has names of stats 
    string hName;  // name of hero in question
    
    
    statNames[0] = "str";
    statNames[1] = "dex";
    statNames[2] = "sta";
    statNames[3] = "wis";
    statNames[4] = "int";
    
    printf("What is your hero's name? ");
    hName = GetString();
    
    for(int i = 0; i < 5; i++)
        {
        printf("what is your %s? ", statNames[i]);
        hStats[i] = GetInt();
        }   
       
    printf("\n");
    printf("Your hero's name is %s\n", hName);
    printf("*************************\n");
    printf("*Your str is           %i*\n", hStats[0]);
    printf("*Your dex is           %i*\n", hStats[1]);
    printf("*Your sta is           %i*\n", hStats[2]);
    printf("*Your wis is           %i*\n", hStats[3]);
    printf("*Your int is           %i*\n", hStats[4]);
    printf("*************************\n");
   
    
    
}
