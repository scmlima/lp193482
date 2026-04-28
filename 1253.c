#include <string.h>
#include <stdio.h>

int main(){
    char abc[51];
    int N, desl; //deslocamento

    scanf("%i\n", &N);

    for(int i = 0; i < N; ++i){
        scanf("%[^\n]\n", &abc);
        scanf("%i\n", &desl);

        for(int j = 0; j < strlen(abc); ++j){
            abc[j] = ((abc[j] - 'A' - desl + 26) % 26) + 'A';
        }

        printf("%s\n", abc);
    }

    return 0;
}