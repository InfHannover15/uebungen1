#include <iostream>
#include <time.h>
#include <cstdlib>
#include <unistd.h>

int main(){
	srand(time(NULL));
	for(;;){
		char a= rand(), b=rand()%256;
		std::cout<<std::dec<<"\033["<<32<<"m"<<std::hex<<b<<" ";
		usleep(50);
	}
}
