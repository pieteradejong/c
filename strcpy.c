#include <stdio.h>
#include <string.h>

int main() {
	char s1[100];
	char s2[100];

	strcpy(s1, "aaaaaa 1");
	strcpy(s2, "bbbbbb 2");

	puts("Original strings:\n");
	puts(s1);
	puts(s2);

	strcpy(s2, s1);

	puts("New strings:\n");
	puts(s1);
	puts(s2);
}

