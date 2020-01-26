// Recursion example with play/fold concept
#include<stdio.h>

void recursion(int x){
	if(x==3){
		printf("-----\n");
		return;
	}
	printf("Play--> |%d| \n", x);
	x++;
	recursion(x);
	printf("Fold--> |%d|\n",x);
}
void main(){
	int x=0;
	recursion(x);
}
