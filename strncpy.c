#include <stdio.h>
#include <string.h>

int main() {
	char s1[100];
	char s2[100];

	strncpy(s1, "aaaaaa 1", 5);
	strncpy(s2, "bbbbbb 2", 5);

	puts("Original strings:\n");
	puts(s1);
	puts(s2);

	strncpy(s2, s1, 5);

	puts("New strings:\n");
	puts(s1);
	puts(s2);
}