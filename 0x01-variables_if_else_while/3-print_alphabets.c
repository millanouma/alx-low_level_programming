#include <stdio.h>
/**
 * main - print the alphabet using putchar()
 * Description - a program that prints the alphabet in lowercase
 * and then in uppercase followed by a new line 
 * Return: Always 0 (Success)
 */
 int main(void){
	 char ch;
	 char CH;
	 for(ch = 'a' ; ch <= 'z' ; ch++){
		 putchar(ch);
	 }
	 for(CH = 'A' ; CH <= 'Z' ; CH++){
		 putchar(CH);
	 }
	 return(0);
 

 }
