#include<stdio.h> 
#include<string.h>


//duplicate string

void duplicate_string(char str[]){
    int H[52] = {0};
    int i;

    for(i=0;str[i]!='\0';i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            H[str[i]-'a']+=1;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            H[str[i]-'A'+26]+=1;
        }
    }

    for(i=0;i<52;i++) {
        if(H[i]>1) {
            if(i < 26) {
                printf("%c %d\n",i+'a',H[i]);
            } else {
                printf("%c %d\n",i-26+'A',H[i]);
            }
        }
    }
}


/**
 
 for bitwise operation we work with bits
  
 */

void duplicate_string_bitwise(char str[]){
    long int H=0, x=0;
    int i;

    for(i=0;str[i]!='\0';i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            x = 1;
            x = x << (str[i] - 'a');
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            x = 1;
            x = x << (str[i] - 'A' + 26);
        } else {
            continue;
        }

        if((x & H) > 0) {
            printf("%c is duplicate\n", str[i]);
        } else {
            H = x | H;
        }
    }
}

int main() {

    char str[]="hello world";

    duplicate_string(str);
    // Test the bitwise function
    duplicate_string_bitwise(str);

    return 0;
}