#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char sentence[100];
    fgets(sentence, sizeof(sentence), stdin);
    puts(sentence);
    int length = strlen(sentence) -1;
    printf("%d", length);
    int i;
    for(i = length; i >= 0; i--){
        printf("%c", sentence[i]);
    }

    return 0;
}
