#include <stdio.h>

int main( int argc, char* argv[] ){
	if(argc>=1){
int i;
for(i=0;i<argc;i++)
		printf("Eingabe #%d: %s\n",i,argv[i]);
	}else{
		printf("Eingabe fehlt\n");
	}
	/* hallo jungs! */
}
