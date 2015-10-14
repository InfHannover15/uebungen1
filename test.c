#include <iostream>
#include <time.h>
#include <cstdlib>
#include <unistd.h>

int main(){
	srand(time(NULL));
	for(;;){
		int a= 31+rand()%20, b=rand()%256;
		std::cout<<std::dec<<"\033["<<a<<"m"<<std::hex<<b<<" ";
		usleep(60);
	}
}
