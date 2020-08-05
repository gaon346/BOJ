#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number, len;
    int cnt = 0;
    char name[52][52];
    char answer[52] = {0};
    
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
        scanf("%s", name[i]);
    
    len = strlen(name[0]);
    for (int i = 0; i < len; i++) {
        ans[i] = name[0][i];
        for (int j = 1; j < number; j++) {
            if (name[0][i] != name[j][i]) {
                answer[i] = '?';
                break;
            }
        }
    }
    printf("%s", ans);
}
