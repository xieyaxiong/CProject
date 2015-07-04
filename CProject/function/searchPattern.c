/*
 * searchPattern.c
 *
 *  Created on: Jul 4, 2015
 *      Author: xieyaxiong
 */

#include<stdio.h>
#define MAXLINE 1000

int getLine(char line[], int max);
int stringIndex(char line[], char compare[]);
int strindex(char s[], char t[]) ;

char pattern[] = "ould";

int main() {

	char line[MAXLINE];
	int count = getLine(line, MAXLINE);
	printf("%d\t%s", count, line);
	printf("%d\n", strindex(line, pattern));
	return 0;
}

int stringIndex(char line[], char compare[]) {
	int i;
	for (i = 0; line[i] != '\0'; i++) {
		if (line[i] == compare[0]) {
			int j = i;
			int k = 0;
			while (line[j++] == compare[k++]) {
			}
			if (compare[k] == '\0') {
				return i;
			}
		}
	}
	return -1;
}

int strindex(char s[], char t[]) {
	int i, j, k;
	for (i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
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

