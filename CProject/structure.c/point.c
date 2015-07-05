/*
 * point.c
 *
 *  Created on: Jul 5, 2015
 *      Author: xieyaxiong
 */

#include<stdio.h>

struct point{
	int x;
	int y;

};

void change(struct point p){
	p.x=10;
	p.y=11;
}

//int main(){
//	struct point p;
//	p.x=0;
//	p.y=1;
//
//	printf("%d,%d\n",p.x,p.y);
//	change(p);
//
//	printf("%d,%d",p.x,p.y);
//
//	return 0;
//}
