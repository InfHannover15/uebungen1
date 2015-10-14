//wieoft
#include <stdio.h>
#include <string.h>

main(){
	char satz[100];
	float i=0;	
	float z=0;
	int x=0;
	printf("\tBitte einen Satz eingeben:\n");
	gets(satz);
	for(x=0;satz [x]!='\0';x++){

		if (satz[x]=='e')
			z++;
		if (satz[x]!=' ')
			i++;
		
		}
	printf("Der Satz enthält %.f mal den Buchstaben 'e'.\n",z);
	printf("Das sind %.2f %% der enthaltenen Buchstaben.\n",(z/i)*100); 
	
		}
	
	
	
