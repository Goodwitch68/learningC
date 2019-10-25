//Write a program that computes the sum of an alternating series where each element
// of the series is an expression of the form ((-1)^{k+1})/(2 * k-1) 
//for each value of k from 1 to a million, multiplied by 4. 
//Or, in more mathematical notation 
//    4\cdot \sum_{k=1}^{10^6} \frac{(-1)^{k+1}}{2k-1} = 4\cdot(1-1/3+1/5-1/7+1/9-1/11\ldots)

#include <stdio.h>
#include <math.h>

int main(){
	
	double sum = 0; 
	for (double k = 1; k<= 1000000; k++){
		sum = sum + (pow (-1, k)/(2*k-1));
		printf("\nSum*4 is 1-%f-ig: %f", k, sum*4);
	}
	return 0;
}

//double pow(double x, double y);
//Here, the value of the double variable x is raised to the power of y. 
//The pow() function returns the result in the double data type.