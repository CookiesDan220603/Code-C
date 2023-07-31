#include <stdio.h>
#include <stdlib.h>
//--------------------------------------------------------
//The function used to check whether n is prime or not
int isPrime(int n);
//---------------------------------------------------------
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for ( i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int findMaxPrimeN2M(int n,int m){
   	//Begin your statements here
	int maxPrime = -1;
	int i;
	int c;
	if(m>n){
	c = n;
	n = m;
	m = c;
	}
    for ( i = n; i >= m; i--) {
        if (isPrime(i)) {
            maxPrime = i;
            break;
        }
    }
    return maxPrime;
		
	//......
	//......
	//End your statements here	
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{  
  system("cls");
  printf("\nTEST Q4 (3 marks):\n");
  int n,m, max; 
  printf("Enter n = "); scanf("%d",&n);   
  printf("Enter m = "); scanf("%d",&m);  
  max = findMaxPrimeN2M(n,m);
  printf("\nOUTPUT:\n"); 
  printf("%d",max);
  printf("\n");
  system ("pause");
  return(0);  
}
