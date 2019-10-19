#include <stdio.h>
#include <time.h>
int main()
{
    time_t s, val = 1;
    struct tm* current_time;
    
    s = time(NULL);
    
    current_time = localtime(&s);
    
    printf("Current year = %d\n",(current_time->tm_year + 1900));
    
    
	int current_year = current_time->tm_year + 1900;
	int next_leap_year = 4 - current_year % 4;
	int leap_year = current_year + next_leap_year;
	
	for (int i = 0; i< 20; i++){
		if (leap_year % 100 == 0){
			i--;
		}
		else {
		printf("%d, ", leap_year);
		}
		leap_year = leap_year + 4;
	}
    
	
	
	return 0;
}

//2920-ig használható, később tévesen kihagyja a 3000-et 