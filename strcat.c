#include <stdio.h>
#include <string.h>

int main() {
	char s1[50];
	char s2[50];

	strcpy(s1, "Tweedledee");
	strcpy(s2, "Tweedledum");

	strcat(s1, s2);
	puts(s1);
}