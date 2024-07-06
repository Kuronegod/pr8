#include <stdio.h>
#include <string.h>


unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

unsigned long long count_anagrams(char *word) {
    int len = strlen(word);

    return factorial(len);
}

int main() {
    char word[15];


    scanf("%s", word);


    unsigned long long result = count_anagrams(word);
    printf("%llu\n", result);

    return 0;
}
