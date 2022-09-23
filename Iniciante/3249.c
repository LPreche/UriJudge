#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    
    int n, i=0, win = 0;
    char battle[1010];
    
    scanf("%d ", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", battle);
        if(strstr(battle,"CD") != NULL)
            win++;
    }
    win=n-win;
    printf("%d\n", win);

    return 0;
}