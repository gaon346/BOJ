#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int x, y;
	int cnt_x = 0;
	int cnt_y = 0;
	char arr[50][50];
	bool temp_y[50], temp_x[50];
	
	scanf("%d", &y);
	scanf("%d", &x);
	for (int i = 0; i < y; i++) {
			scanf("%s", &arr[i]);
			for (int j = 0; j < x; j++) {
				if (arr[i][j] == 'X') {
					temp_y[i] = 1;
					temp_x[j] = 1;
				}
			}
	}
	for (int i = 0; i < y; i++) {
		if (temp_y[i])
			cnt_y++;
	}
	for (int i = 0; i < x; i++) {
		if (temp_x[i])
			cnt_x++;
	}
  printf("%d", (y - cnt_y) > (x - cnt_x) ? y - cnt_y : x - cnt_x);
	return 0;
}
