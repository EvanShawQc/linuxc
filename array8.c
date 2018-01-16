#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=0;
	char str1[]="gdb";
	char str2[]="gdb";
	char str3[]="Hello, world\n";

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);

    for(i=0;i<sizeof(str3)/sizeof(char)-1;i++){
    	printf("%c--", str3[i]);
    }
    printf("%c  %lu\n", str3[sizeof(str3)/sizeof(char)-1],
    	sizeof(str3)/sizeof(char));

	return 0;
}