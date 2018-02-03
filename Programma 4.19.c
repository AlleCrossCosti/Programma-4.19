# include <stdio.h> {
 int main () {
	 
	 int byte, num;
 
 byte = 1;
 num = 4;
 
 byte <<= num;
 printf("shift sx di %d pos. = %d\n", num, byte);
 
 num = 2;
 byte <<= num;
 printf("shift sx di altri %d pos. = %d\n", num, byte);
 
 num = 3;
 byte >>= num;
 printf("shift dx di  %d pos. = %d", num, byte);
 
 return 0;
 
 }
