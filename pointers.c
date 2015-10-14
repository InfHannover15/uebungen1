#include <stdio.h>

void p(int a, int b){
	printf("a:%d\tb:%d\n", a, b);
}

int main( int argc, char* argv[] ){
	int a, b;
	int *ptr_a, *ptr_b;
	
	a=3;
	b=6;
	ptr_a = &a;
	ptr_b = &b;
	
	p(a,b);
	
	a++;
	
	p(a,b);
	
	(*ptr_a)++;
	(*ptr_b)++;
	
	p(a,b);
	
	 *ptr_a = *ptr_b;
	
	p(a,b);
	
	(*ptr_a)++;
	(*ptr_b)++;
	
	p(a,b);
	
	ptr_a = ptr_b;
	
	p(a,b);
	
	(*ptr_a)++;
	(*ptr_b)++;
	
	p(a,b);
	
	
}
