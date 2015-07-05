/*
 * readline.c
 *
 *  Created on: Jul 5, 2015
 *      Author: xieyaxiong
 */

#include<stdio.h>
#define MAX 10000

int main(){
	FILE *fp=fopen("/home/xieyaxiong/Downloads/testfileread","r");
	char arr[MAX];
	while(fgets(arr,MAX,fp)!=NULL){
		printf("%s",arr);
	}
	fclose(fp);
	return 0;
}
