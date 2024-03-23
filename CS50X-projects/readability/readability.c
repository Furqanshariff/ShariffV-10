#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    char test[100000];
    int i, L = 0, S = 0,W=0;

    printf("Text: ");
    fgets(test, sizeof(test), stdin);

    for(i = 0; i < strlen(test)+1; i++) {
        if((test[i] >= 'A' && test[i] <= 'Z') || (test[i] >= 'a' && test[i] <= 'z')) {
            L++;
        }
        if(test[i] == '!' || test[i] == '?' || test[i] == '.') {
            S++;
        }
        if (test[i] == ' ' || test[i] == '\0')
        {
            W++;

        }
    }

    float averageWordsPer100 = (100 / (float) W) * (float) L;
    float averageSentencePer100 = (100 / (float) W) * (float) S;
    int roundedIndex = round(0.0588 * averageWordsPer100 - 0.296 * averageSentencePer100 - 15.8);

    if(roundedIndex <= 1) {
        printf("Before Grade 1\n");
    } else if(roundedIndex >= 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %i\n", roundedIndex);
    }

    return 0;
}
