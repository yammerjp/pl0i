#include <stdio.h>
int f(int n){
	if(n==0) return 1;
	return 2*f(n-1)+n;
}
int main(void){
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
}
