//1. Rewrite the program in Listing 15.2. This time use the format specifier %c, instead
//of %s, to print out the character string of the local time on your computer.

#include <stdio.h>
3: #include <time.h>
4:
5: void GetDateTime(void);
6:
7: main()
8: {
9: printf("Before the GetDateTime() function is called.\n");
10: GetDateTime();
11: printf("After the GetDateTime() function is called.\n");
12: return 0;
13: }
14: /* GetDateTime() definition */
15: void GetDateTime(void)
16: {
17: time_t now;
18:
19: printf("Within GetDateTime().\n");
20: time(&now);
21: printf("Current date and time is: %s\n",
22: asctime(localtime(&now)));
23: }







