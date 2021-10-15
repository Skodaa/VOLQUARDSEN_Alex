#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[]){

	int x = atoi(argv[1]);
	
	int i = 0;
	int rep = 0;

	for(i = 1; i < x; i++){
		if(x%i == 0){
			rep += i;
	
		}
	}

	if(rep == x){
		printf("le nombre %d est parfait", x);

	}else{
		printf("le nombre %d n'est pas parfait", x);

	} 



}
