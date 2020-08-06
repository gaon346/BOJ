#include <stdio.h>
#include <stdlib.h>

typedef struct location {
	int len1, len2;
	int x, y;
}locations;

locations cross(char *str1, char *str2);

int main(void) {
	locations l;
	char s1[30];
	char s2[30];
	
	scanf("%s", &s1);
	scanf("%s", &s2);
	l = cross(s1, s2);
	
	for (int i = 0; i < l.len2; i++) {
		for (int j = 0; j < l.len1; j++) {
			if (i == l.y) {
				printf("%c", s1[j]);
			}
			else if (j == l.x) {
				printf("%c", s2[i]);
			}
			else {
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}

locations cross(char *str1, char *str2) {
	locations xy;
	
	xy.len1 = strlen(str1);
	xy.len2 = strlen(str2);
	for (int i = 0; i < xy.len1; i++) {
		for (int j = 0; j < xy.len2; j++) {
			if (str1[i] == str2[j]) {
				xy.x = i;
				xy.y = j;
				return xy;
			}
		}
	}
	return xy;
}
