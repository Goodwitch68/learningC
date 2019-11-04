//3. Compile and run the following program. What do you get on the screen, and why?
#include <stdio.h>
int main()
{
int i;
for (i=0; i<5; i++){
int x = 0;
static int y = 0;
printf("x=%d, y=%d\n", x++, y++);
}
return 0;
/*
The screen: 
x=0, y=0
x=0, y=1
x=0, y=2
x=0, y=3
x=0, y=4

x is set to 0 every time the program enters the for loop, 
y has a permanent sorage, so the value saved in y is kept.*/
}