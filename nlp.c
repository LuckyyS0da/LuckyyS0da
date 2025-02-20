//This is a code to identify whether the language is english or french.

/*The criteria to identify:
1) If the number oif 't' and 'T' characters is greater than the number of 's' and 'S' characters, the text is probably English.

2)Otherwise(if 's' and 'S' are equal to or greater than 't' and 'T'), the text is probably French.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n, f = 0, e = 0;
    scanf("%d", &n);
    getchar(); 

    char arr[n][100];

    for (int i = 0; i < n; i++) {
        fgets(arr[i], 100, stdin); 
        arr[i][strcspn(arr[i], "\n")] = '\0'; 
        
        for (int j = 0; arr[i][j] != '\0'; j++) {
            if (arr[i][j] == 't' || arr[i][j] == 'T') {
                e++;
            }
            if (arr[i][j] == 's' || arr[i][j] == 'S') {
                f++;
            }
        }
    }

    if (f >= e) {
        printf("French\n");
    } else {
        printf("English\n");
    }                

    return 0;
}
