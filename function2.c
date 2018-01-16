#include <stdio.h>

void newline(void);
void threelines(void);

int main(int argc, char const *argv[])
{
	printf("Three lines:\n");
	threelines();
	printf("Another three lines:\n");
	threelines();
	return 0;
}


void newline(void){
	printf("\n");
}

void threelines(void){
	newline();
	newline();
	newline();
}