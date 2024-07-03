#include <iostream>

using namespace std;

void mixedCongruentialMethod(int seed, int a, int c, int m){
	//x(i) = ( a*x(i-1) + c ) mod m
	int x =seed;
	
	cout<<endl<<"MIXED CONGRUENTIAL METHOD RANDOM NUMBER GENERATION: "<<endl<<endl;
	
	cout<<x<<" ";
	for(int i = 0; i<100; i++){
		x = ((a*x)+c)%m;
		cout<<x<<" "; 
	}
}

void multiplicativeCongruentialMethod(int seed, int a, int m){
	//x(i) = (a*x(i-1))mod m
	
	int x = seed;
	
	cout<<endl<<"MULTIPLICATIVE CONGRUENTIAL METHOD RANDOM NUMBER GENERATION: "<<endl<<endl;
	
	cout<<x<<" ";
	for(int i = 0; i<100; i++){
		x = (a*x)%m;
		cout<<x<<" ";
	}
}

int main(){
	int seed, c, a, m;
	
	cout<<"Enter Seed: ";
	cin>>seed;

	cout<<"Enter constant multiplier(a): ";
	cin>>a;
	
	cout<<"Enter constant adder (c): ";
	cin>>c;
	
	cout<<"Enter modulo (m): ";
	cin>>m;
	
	mixedCongruentialMethod(seed, a, c, m);
    printf("\n");
	multiplicativeCongruentialMethod(seed, a, m);	
}

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// unsigned long long int randm(int n);
// unsigned long long int von(unsigned long long int x, int n);
 
// int main(void)
// {
//   unsigned long long int x, s;
//   int n, i, r;
 
//   printf("Enter the number of digits in the seed value ");
//   scanf("%d", &n);
 
//   printf("\nEnter the total number of random numbers to be generated "); 
//   scanf("%d", &r);
 
//   if (n >= 12){
//     printf("TOO LARGE!!");
//     exit(0);
//   }
 
//   x = randm(n);
//   for(i = 0; i < r; i++){    
//      s = von(x, n);
//      x = s;
//   printf("\nRandom Number generated: %lld\n", s);
//   }
//   return 0;
// }
 
 
// /*Generating Random Number of desired digit*/
 
// unsigned long long int randm(int n)
// {
//   double x;
//   unsigned long long int y;
//   srand(getpid());
//   x = rand() / (double)RAND_MAX;
//   y = (unsigned long long int) (x * pow(10.0, n*1.0));
//   return y;
// }
 
 
// /*Calculating Random Number By Von Neumann Middle Square method*/
 
// unsigned long long int von(unsigned long long int x, int n)
// {
//   unsigned long long int y;
//   int k;
//   k = n / 2;
//   y =(unsigned long long int)((x / pow(10.0, k * 1.0)) * x) % (unsigned long long int) (pow(10.0, n * 1.0));
//   return y;
// }
