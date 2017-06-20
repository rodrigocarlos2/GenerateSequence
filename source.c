

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void choose_n(int *out, int begin, int count) {
    
	int i;
	
	int razao;
	
	srand(time(NULL));
	
	razao = rand()%6;
	
	out[0] = begin;
	
	for (i = 1; i < count; i += 1) {
        out[i] = out[i-1]+razao;
    }
    
}

void show_n(int *out, int count){
	
	int i;
	
	for(i=1; i<=count; i++){
		
		if(i!=count){
			printf("%d - ", out[i-1]);
		}
		else{
			printf("%d", out[i-1]);
		}
		
	}
	
}

int main(int argc, char *argv[]) {
    
	int results[4];
	int begin;

    srand(time(NULL));
    begin = rand()%4;
    
	choose_n(results, begin, 4);
    
    show_n(results, 4);
    
}
