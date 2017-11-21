#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <dos.h>


char top [2];
char mid [3];
char bottom [2];




void dice(char top[],char mid[],char bottom[],int numdice,int spotnum[]){
for(int x=0;x< numdice;x++)    
printf("   +---------+       "); 
printf("\n");
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
 setdice(spotnum[x]);   
printf("|%c       %c|  |       ",top[0],top[1]);
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
 int r = rand() % ((5 +1 - 0) + 0);
    
    return r;
    }

void setdice(int x){
    switch (x){
        
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
    
    int numdice = 5; //declare number of dice to print
    
   int spotnum [numdice]; //array for random numbers of spots for dice
    
    
    
    
    
    srand(time(NULL));
    while(1){
    for(int x=0; x<numdice;x++){  //generates number of spots for each dice
        spotnum[x] = random();
        }
    
    
    
    
    
    
     dice(top,mid,bottom,numdice,spotnum);
        

   
    
    getch();
    
    }

return 0;
}