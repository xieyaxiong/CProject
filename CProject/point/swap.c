/*
 * swap.c
 *
 *  Created on: Jul 5, 2015
 *      Author: xieyaxiong
 */

#include<stdio.h>

void swap(int *x,int *y);
//
//int main(){
//	int x=3;
//	int y=7;
//	swap(&x,&y);
//	printf("%d,%d\n",&x,&y);
//	printf("%d,%d\n",x,y);
//
//	return 0;
//}

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

