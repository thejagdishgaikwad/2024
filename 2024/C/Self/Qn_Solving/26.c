/*WAP to print
    1
   21
  321
 4321
54321 pattern using c nested loop
*/

// c program to print left half pyramid pattern of numbers 
#include <stdio.h> 

int main() 
{ 
    int i=0, j=0, k=0;
	int rows = 5; 

	// first loop is for printing the rows 
	for (i; i < rows; i++) { 

		// loop for printing leading whitespaces 
		for ( j=0 ; j < 2 * (rows - i) - 2; j++) { 
			printf(" "); 
		} 

		// loop for printing continious numbers 
		for ( k=0; k <= i; k++) { 
			printf("%d ", k + 1); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
