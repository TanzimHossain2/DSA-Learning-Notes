#include<stdio.h> 

int Anagram(char word1[], char word2[]){

    int H[26] = {0};
    int i;

    for(i=0;word1[i]!='\0';i++) {
        H[word1[i]-'a']+=1;
    }

    for(i=0;word2[i]!='\0';i++) {
        H[word2[i]-'a']-=1;

        if(H[word2[i]-'a']<0) {
            return 0;
        }
    }

    for(i=0;i<26;i++) {
        if(H[i]!=0) {
            return 0;
        }
    }

    return 1;
}


int AnagramHash(char word1[], char word2[]){

}

int main() {

    char str1[] = "decimal";
    char str2[] = "medical";

    if(Anagram(str1, str2)) {
        printf("Strings are anagram\n");
    } else {
        printf("Strings are not anagram\n");
    }
  


  return 0;
}