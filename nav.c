//This is the start of a navacation program for recordign movement 
//around a map/graft with simple x,y cords

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //xAxe and yAxe repersent the x and y axis on a graft
    int xAxe = 0;
    int yAxe = 0;
    char choice;
    
    //This do loop will continue until the user (Q)uits the program
    do
    {
    printf("What would you like to do?\nPress N,S,E,W,L for location, or Q for quit: ");
    choice = GetChar();
    
    
        //This if statement will chante the cords on a virtual 
        //graft recording where the user has moved and returning
        //it on request or exiting the program by pressing 'Q'
        
        if(choice == 'N')
            yAxe++;
        else if(choice == 'S')
            yAxe--;
        else if(choice == 'E')
            xAxe++;
        else if(choice == 'W')
            xAxe--;
        else if(choice == 'L')
            printf("Your location is %d by %d\n", xAxe, yAxe);
        
        
    }
    while (choice != 'Q');
}
