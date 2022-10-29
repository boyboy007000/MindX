#include <stdio.h>
#include <string.h>

int * so_ky_tu_da_dung(char * s){
    static int ascii[26] = {0};
    // strlwr(s);
    for (int i = 0; i < strlen(s); i++){
        // char temp = s[i];
        // int idx = (int)temp;
        ascii[s[i] - 'a']++;
    }
    return ascii;
}

void ky_tu_nhieu_nhat(char *s){
    int * result = so_ky_tu_da_dung(s);
    int max = 0;
    for (int i =0; i<24; i++){
        if (result[i] > max){
            max = *(result + i);
        }
    }

    for (int i =0; i<24; i++){
        if (result[i] == max){
            char c[1];
            sprintf(c, "%c", i);
            // printf("%c", c);
        }
    }

}