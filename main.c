#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <dos.h>


char top [2];
char mid [3]; //arrays to stor the variable charachters for the top middle and bottom line
char bottom [2];




void dice(char top[],char mid[],char bottom[],int numdice,int spotnum[]){
for(int x=0;x< numdice;x++)    //prints the line as many times as needed
printf("   +---------+       "); 
printf("\n"); //newline must be here to allow prior line to be printed n times on the same line
for(int x=0;x< numdice;x++)
printf("  /         /|       ");
printf("\n");
for(int x=0;x< numdice;x++)
printf(" /         / |       ");
printf("\n");
for(int x=0;x< numdice;x++)
printf("+---------+  |       ");
printf("\n");
for(int x=0;x< numdice;x++){
 setdice(spotnum[x]); //set the spot charchters according to the number there should be
printf("|%c       %c|  |       ",top[0],top[1]); //print the line
}

printf("\n");
for(int x=0;x< numdice;x++)
printf("|         |  |       ");
printf("\n");
for(int x=0;x< numdice;x++){
 setdice(spotnum[x]);
printf("|%c   %c   %c|  /       ",mid[0],mid[1],mid[2]);
}
printf("\n");
for(int x=0;x< numdice;x++)
printf("|         | /        ");
printf("\n");
for(int x=0;x< numdice;x++){
 setdice(spotnum[x]);
printf("|%c       %c|/         ",bottom[0],bottom[1]);
}
printf("\n");
for(int x=0;x< numdice;x++)
printf("+---------+          ");   
printf("\n");
}



int random(){
 int r = rand() % ((5 +1 - 0) + 0); //generate a random number between 0 and 5
    
    return r;
    }

void setdice(int x){
    switch (x){ //set the number of spots in the desired pattern
        
      case 0 :
      top[0] = ' ';
      top[1] = ' ';
      mid[0] =' ';
      mid[1] = '*';
      mid[2] = ' ';
      bottom[0] = ' ';
      bottom[1] = ' ';
      break;
      
      case 1 :
      top[0] = ' ';
      top[1] = '*';
      mid[0] =' ';
      mid[1] = ' ';
      mid[2] = ' ';
      bottom[0] = '*';
      bottom[1] = ' ';
      break;
      
      case 2 : 
      top[0] = ' ';
      top[1] = '*';
      mid[0] =' ';
      mid[1] = '*';
      mid[2] = ' ';
      bottom[0] = '*';
      bottom[1] = ' ';
      break;
      
      case 3 :
      top[0] = '*';
      top[1] = '*';
      mid[0] =' ';
      mid[1] = ' ';
      mid[2] = ' ';
      bottom[0] = '*';
      bottom[1] = '*';
      break;
      
      case 4 :
      top[0] = '*';
      top[1] = '*';
      mid[0] =' ';
      mid[1] = '*';
      mid[2] = ' ';
      bottom[0] = '*';
      bottom[1] = '*';
      break;
      
      case 5 :
        top[0] = '*';
      top[1] = '*';
      mid[0] ='*';
      mid[1] = ' ';
      mid[2] = '*';
      bottom[0] = '*';
      bottom[1] = '*';
        break;
        
        }
    
    
    }

















int main(int argc, char **argv)
{
    
    printf("enter the number of dice per row\n");
    
    
    
    int numdice;//declare number of dice to print
    scanf("%d",& numdice); //take in the number and assign it to spotnum
    system("cls"); //clear the screen
    
   int spotnum [numdice]; //array for random numbers of spots for dice
    
    
    
    
    
    srand(time(NULL));
    while(1){
    for(int x=0; x<numdice;x++){  //generates number of spots for each dice
        spotnum[x] = random(); //assign random number
        }
    
    
    
    
    
    
     dice(top,mid,bottom,numdice,spotnum); //print the dice
        

   
    
    getch(); //loop on a key press (waits for a key press before looping)
    
    }
     
return 0; 	
}