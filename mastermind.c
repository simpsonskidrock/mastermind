#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char* argv[]){
//init two arrays
int codeki[4];
int codeuser[4];
int a, b, c, d=0;
int w, x, y, z=0;
int number;



srand(time(0));

//fill codeki
for(int i=0; i<6; i++){
  codeki[i] = rand() % 6;
}

//start game
int l = 0;
int k = 0;
int perfect = 0;
int almost = 0;
printf("Welcome to mastermind! Can you crack my code?\n");
printf("Give it a try!\n");

// user input
while(l!=10){
a=0;
b=0;
c=0;
d=0;
w=0;
x=0;
y=0;
z=0;
perfect = 0;
almost = 0;
l++;
for(int i = 0; i<4; i++){
  scanf("%d", &number);
  codeuser[i] = number;
  }

//check perfects
  if(codeuser[0]==codeki[0]){
    perfect++;
    a=1; }
  if(codeuser[1]==codeki[1]){
    perfect++;
    b=1;
  }
  if(codeuser[2]==codeki[2]){
    perfect++;
    c=1;
  }
  if(codeuser[3]==codeki[3]){
    perfect++;
    d=1;
  }

//check first position
if(a!=1){
  if((codeuser[0]==codeki[1])&&(b==0)&&(x==0))
  {
  almost++;
  x=1; }
  else if((codeuser[0]==codeki[2])&&(c==0)&&(y==0))
  {
  almost++;
  y=1; }
  else if((codeuser[0]==codeki[3])&&(d==0)&&(z==0))
  {
  almost++;
  z=1; }
}
//check second position
if(b!=1){
  if((codeuser[1]==codeki[0])&&(a==0)&&(w==0))
  {
  almost++;
  w=1; }
  else if((codeuser[1]==codeki[2])&&(c==0)&&(y==0))
  {
  almost++;
  y=1;
  }
  else if((codeuser[1]==codeki[3])&&(d==0)&&(z==0))
  {
  almost++;
  z=1;}
}
//check third position
if(c!=1){
  if((codeuser[2]==codeki[0])&&(a==0)&&(w==0))
  {
  almost++;
  w=1; }
  else if((codeuser[2]==codeki[1])&&(b==0)&&(x==0))
  {
  almost++;
  x=1; }
  else if((codeuser[2]==codeki[3])&&(d==0)&&(z==0))
  {
  almost++;
  z=1; }
}
//check fourth position
if(d!=1){
  if((codeuser[3]==codeki[0])&&(a==0)&&(w==0))
  {
  almost++;
  w=1; }
  else if((codeuser[3]==codeki[1])&&(b==0)&&(x==0))
  {
  almost++;
  x=1; }
  else if((codeuser[3]==codeki[2])&&(c==0)&&(y==0))
  {
  almost++;
  y=1; }
}

if(perfect==4){
printf("Well done! It took you %d try's\n", l);
break;
}
else{
 printf("%d are perfect\n", perfect);
 printf("%d numbers are good, but in wrong position\n", almost);
 printf("This was try number %d\n", l);
}



}
//printf("%d %d %d %d\n", codeuser[0], codeuser[1], codeuser[2], codeuser[3]);
printf("This was the computers code: %d %d %d %d\n", codeki[0], codeki[1], codeki[2], codeki[3]);

return 0;
}
