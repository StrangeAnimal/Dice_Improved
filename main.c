#include <stdio.h>
#include <stdlib.h>

#include <dos.h>
#include <time.h>

char top [2];
char mid [3]; //arrays to store the variable charachters for the top middle and bottom line
char bottom [2];





void padding(int height1,int numdice1,int width1){
    for(int x=0; x<((height1-6)/2)-1;x++){ // print padding lines to increase height, this could be put in to another function to save code.
for(int x=0;x<numdice1;x++){   
    
    
      printf("|");
      
      
    for(int x=0; x<width1-2;x++){
    printf(" ");}
       printf("|");
       printf("  |");




}
printf("\n");
}
    
    
    
    
    }






void dice(char top[],char mid[],char bottom[],int numdice,int spotnum[],int height,int width){
    //printf("%d %d \n",spotnum[0] +1,spotnum[1] +1); used for testing that the dice displayed the right number of spots
for(int x=0;x< numdice;x++){    //prints the line as many times as the there are dice
   printf("   "); 
   printf("+"); //print the top left corner this is allways the same
   for(int x=0; x<width-2;x++)
      printf("-");   //print hyphens to make the dice as wide as it needs to be
   printf("+"); //print the top right corner




}
printf("\n"); //newline must be here to allow prior line to be printed n times on the same line
for(int x=0;x< numdice;x++){ //print the second line of the dice as many times as needed
   printf("  /"); //print the left most part
   for(int x=0; x<width-2;x++)
      printf(" "); //pad with spaces to make the dice as wide as needed
   printf("/|"); //print the right hand side

}

printf("\n");



for(int x=0;x< numdice;x++){ //print the third line as many times as needed
   printf(" /");
   for(int x=0; x<width-2;x++)
     printf(" "); //do the same as the second line
   printf("/ |");
}
printf("\n");
for(int x=0;x< numdice;x++){ //print the top edge of the dice
    
    printf("+");
    for(int x=0; x<width-2;x++)
       printf("-");
    printf("+");
    printf("  |");
}
printf("\n");
for(int x=0;x< numdice;x++){
    setdice(spotnum[x]); //set the spot charchters according to the number there should be
    printf("|%c",top[0]); //print the line

    for(int x=0; x<width-4;x++)
         printf(" ");
    printf("%c|",top[1]); //print the line
    printf("  |");




}
printf("\n");
padding(height,numdice,width);


for(int x=0;x< numdice;x++){ 
 setdice(spotnum[x]); //re calculate the blank charachters according to the random number
printf("|%c",mid[0]); //print the left middle dot
for(int x=0;x<(width/2)-2;x++){
    
    printf(" ");
    }    //pad with spaces to make the dice as wide as needed
printf("%c",mid[1]); //print the middle dot
for(int x=0;x<(width/2)-3;x++){ //pad with more spaces the same as before
    
    printf(" ");
    }
printf("%c|  |",mid[2]);
//printf("    ");






}
printf("\n");
padding(height,numdice,width); //prints padding lines in a function to prevent duplication
for(int x=0;x<numdice;x++){   //print lines with the back edge added
    
    
      printf("|");
      
      
    for(int x=0; x<width-2;x++){
    printf(" ");}
       printf("|");
       printf(" / ");




}
printf("\n");

for(int x=0;x< numdice;x++){
    setdice(spotnum[x]); //set the spot charchters according to the number there should be
    printf("|%c",bottom[0]); //print the line

    for(int x=0; x<width-4;x++)
         printf(" ");
    printf("%c|/  ",bottom[1]); //print the line
    //printf(" ");




}
printf("\n");
for(int x=0;x< numdice;x++){    //prints the line as many times as needed
   
   printf("+");
   for(int x=0; x<width-2;x++)
      printf("-"); //print - to make the cube the desired length
   printf("+");
   printf("   ");



}
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
    
   int spotnum [numdice]; //array for random numbers of spots for dice (bad code but it works)
   int height=0;
   int width=0;
   
   //do{
   printf("enter the height\n"); 
   
   scanf("%d",&height);
   printf("enter the width\n"); 
   
   scanf("%d",&width);
   //}while(height <5 || width <4);
    
    
    
    srand(time(NULL));
    while(1){
    for(int x=0; x<numdice;x++){  //generates number of spots for each dice
        spotnum[x] = random(); //assign random number
        }
    
    dice(top,mid,bottom,numdice,spotnum,height,width); //print the dice
        

   
    
    getch(); //loop on a key press (waits for a key press before looping)
    
    }
     
return 0; 	
}