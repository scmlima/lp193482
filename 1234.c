#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    int n, M;
    char sent[51];//sentenca

    while(fgets(sent, sizeof(sent), stdin) != NULL){
        sent[strcspn(sent, "\n")] = '\0';
        
        M = 1;
        n = strlen(sent);

        for(int i = 0; i < n; ++i){
            if(!isalpha(sent[i]))  continue;

            if(M)   sent[i] = toupper(sent[i]);
            else    sent[i] = tolower(sent[i]);
            M = 1 - M;
        }

        printf("%s\n", sent);
    }

    return 0;
}