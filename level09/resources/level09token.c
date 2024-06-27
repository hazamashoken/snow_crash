#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "\x66\x34\x6B\x6D\x6D\x36\x70\x7C\x3D\x82\x7F\x70\x82\x6E\x83\x82\x44\x42\x83\x44\x75\x7B\x7F\x8C\x89\x0A\0";
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		s[i] -= i;
	}
	printf("%s\n", s);
	return 0;
}
