#include <stdio.h>

int main( int argc, char* argv[] ){
	if(argc>=1){
		char c;
		int i,s,e;
		float f;
		for(i=1;i<argc;i++){
			printf("Eingabe #%d: %s\n",i,argv[i]);
			s=0;
			e=0;
			while(c=*argv[i]++){
				if(c!=' ')s++;
				if(c=='e')e++;
				//printf("0x%X, %d\n", c, c);
			}
			f=100.0*((float)e)/((float)s);
			printf("e:%d\t total:%d\t percent:%.1f\n",e,s,f);
		}
	}else{
		printf("Eingabe fehlt\n");
	}
	/* hallo jungs! */
}
