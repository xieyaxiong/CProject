/*
 * sortStr.c
 *
 *  Created on: Jul 5, 2015
 *      Author: xieyaxiong
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define LENGTH 5
#define MAX 1000

void sort(char *arr[],int length);
int getLine(char line[], int max);
int getLines(char *lines[],int length);

//int main(){
//	char *lines[LENGTH];
//	getLines(lines,LENGTH);
//	int i;
//	sort(lines,LENGTH);
//	for(i=0;i<LENGTH;i++){
//		printf("%s",lines[i]);
//	}
//	return 0;
//}

int getLines(char *lines[],int length){
	int i;
	char *p;
	for(i=0;i<length;i++){
		char s[MAX];
		getLine(s,MAX);
		p = (char *) malloc(strlen(s)+MAX);
		strcpy(p,s);
		lines[i]=p;
	}
}

void sort(char *arr[],int length){
	int i,j;
	for(i=0;i<length-1;i++){
		int temp=i;
		for(j=i+1;j<length;j++){
			if(strcmp(arr[temp],arr[j])>0){
				temp=j;
			}
		}
		if(temp!=i){
			char *v=arr[i];
			arr[i]=arr[temp];
			arr[temp]=v;
		}
	}
}

int getLine(char line[], int max) {
	int i = 0;
	char c;
	while ((c = getchar()) != '\n') {
		line[i++] = c;
	}
	if (c == '\n') {
		line[i++] = c;
	}
	line[i] = '\0';
	return i;
}
