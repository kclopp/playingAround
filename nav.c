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
    _Bool kill = 0;
    
    //This do loop will continue until the user (Q)uits the program
    do
    {
    printf("What would you like to do?\nPress N,S,E,W,L for location, or Q for quit: ");
    choice = GetChar();
    
    
        //This switch statement will chante the cords on a virtual 
        //graft recording where the user has moved and returning
        //it on request or exiting the program by pressing 'Q'
        
        
        switch (choice)
        {
        
            case 'N':
            case 'n':
                yAxe++;
                break;
            
            case 'S':
            case 's':
                yAxe--;
                break;
                
            case 'E':
            case 'e':
                xAxe++;
                break;
                
            case 'W':
            case 'w':
                xAxe--;
                break;
                
            case 'L':
            case 'l':
                printf("Your location is %d by %d\n", xAxe, yAxe);
                break;
                
            case 'Q':
            case 'q':
                kill = 1;
                
            default:
                printf("Invlaid entry please try again.\n");
                
     }           
     
    }
    while (kill != 1);
}
