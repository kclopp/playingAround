// The start of a program to record stats for a character

#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int hStats[6]; // aray for the stats
    string hName;  // name of hero in question
    
    printf("What is your hero's name? ");
    hName = GetString();
    
    printf("What is your strength ");
    hStats[0] = GetInt();
    
    printf("What is your dex ");
    hStats[1] = GetInt();
    
    printf("What is your stamina ");
    hStats[2] = GetInt();
    
    printf("What is your charisma ");
    hStats[3] = GetInt();
    
    printf("What is your wisdom ");
    hStats[4] = GetInt();
    
    printf("What is your intelligence ");
    hStats[5] = GetInt();
    
    
    printf("\n");
    printf("Your hero's name is %s\n", hName);
    printf("*************************\n");
    printf("*Your strength is      %i*\n", hStats[0]);
    printf("*Your dex is           %i*\n", hStats[1]);
    printf("*Your stamina is       %i*\n", hStats[2]);
    printf("*Your charisma is      %i*\n", hStats[3]);
    printf("*Your wisdom is        %i*\n", hStats[4]);
    printf("*Your intelligence is  %i*\n", hStats[5]);
    printf("*************************\n");
    
    
    
}
