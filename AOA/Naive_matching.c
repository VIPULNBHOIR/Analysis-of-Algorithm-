// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void naive_string_matching(char* text, char* pattern,int n,int m) {
int temp=0,count=0;

    for (int i = 0; i <= n - m; i++) {
        temp++;
        for (int j = 0; j < m; j++) {
            if (text[i+j] == pattern[j]){
                count++;
                if (count==m) {
                printf("Pattern found at index %d\n", temp);
		        count=0;
        }
        
}
                
    }
}
}

int main() {
    char text[100];
    char pattern[100];

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter pattern: ");
    scanf("%s", pattern);
    int n = strlen(text);
    int m = strlen(pattern);
    naive_string_matching(text, pattern,n,m);

    return 0;
}