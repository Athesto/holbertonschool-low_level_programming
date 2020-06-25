#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
char *_strcat(char *dest, char *src); /*0.0*/
char *_strncat(char *dest, char *src, int n);/*1.1*/
char *_strncpy(char *dest, char *src, int n);/*2.2*/
int _strcmp(char *s1, char *s2);/*3.3*/
void reverse_array(int *a, int n);/*4.4*/
char *string_toupper(char *);/*5.5*/
char *cap_string(char *);/*6.6*/
char *leet(char *);/*7.7*/
char *rot13(char *);/*8.8*/
void print_number(int n);/*9.100*/
/*magic*//*10.101*/
char *infinite_add(char *n1, char *n2, char *r, int size_r);/*11.102*/
void print_buffer(char *b, int size);/*12.103*/
int _putchar(char c);
#endif /*_HOLBERTON_H_*/
