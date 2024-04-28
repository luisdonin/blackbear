#include <stdio.h>
#include <stdlib.h>
#include "blackbear.h"

#define MAX_LIMIT 20
int calcmean(int n){

	int i = 0;
	
	MeanS  sum, avg;
	int *ptr;
	ptr = (int*)malloc(n *sizeof(int));
	for(i = 0; i < n; i++){
		scanf("%d", ptr + 1);
		sum.sum += *(ptr + 1);
		avg.mean = sum.sum /n;
	
	}
	return avg.mean;
}

void mean(){
	int n = 0;
	scanf("%d", &n);
	int mean = calcmean(n);
	printf("%d", mean);


}

/*void  read_file(){

	char fName[MAX_LIMIT];
	fgets(fName, MAX_LIMIT, stdin);

	
}*/
int read_txt(){
	FILE* ptr;
	int i = 0;
	int ch;
	char fName[MAX_LIMIT];
	fgets(fName, MAX_LIMIT, stdin);
	ptr = fopen(fName, "r");
	if(NULL == ptr){
		return 1;
	}
	do{
		ch = fgetc(ptr);
		printf("%c", ch);
	}while(ch != EOF);
	fclose(ptr);
	return 0;

}
