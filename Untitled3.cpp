#include <string.h>

int main()
{
	char str[100];
	size_t length;
	
printf("Enter a string: ");
	
	fgets(str, sizeof(str), stdin);
	
	str[strcspn(str,"\n")] = '\0';
	
	length = strlen(str);
	
	prinf("the length of the string is: %zu\n", length);
	
	return 0;	
}

