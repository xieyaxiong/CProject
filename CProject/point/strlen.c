/*
 * strlen.c
 *
 *  Created on: Jul 5, 2015
 *      Author: xieyaxiong
 */

#include<stdio.h>

int strLen(char arr[]);
int strLen2(char *s);

//int main(){
//	char arr[]="xieyaxiong";
//	printf("%d\n",strLen2(arr));
//	return 0;
//}

int strLen(char arr[]){
	int i=0;
	for(i=0;arr[i]!='\0';i++){

	}
	return i;
}

int strLen2(char *s){
	int i=0;
	while(*(s+(i++))!='\0'){

	}
	return i-1;
}
