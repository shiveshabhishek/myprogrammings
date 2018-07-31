// Recursion example with play/fold concept where the variable is static within the recursive function
#include<stdio.h>

void recursion(){
	static int x=0;
	if(x==3){
		printf("-----\n");
		return;
	}
	printf("Play--> |%d| \n", x);
	x++;
	recursion();
	printf("Fold--> |%d|\n",x);
}
void main(){
	recursion();
}
