#include <stdio.h>

char pos_ordem(char pre_ordem[], char ordem[]) {
    int j = 0;
    while(pre_ordem[0] != ordem[j]) j++;
    if (!ordem[0]) return 0;
    ordem[j] = NULL;
    
    pos_ordem(pre_ordem+1, ordem);
    pos_ordem(pre_ordem+1+j, ordem+1+j);
    printf("%c", pre_ordem[0]);
}

int main(void) {
    int teste, nos, i; 
    char pre_ordem[100], ordem[100];
    scanf("%d", &teste); 
    
    if(teste <= 2000){
        for (; i < teste; i++) {
            scanf("%d", &nos); 
            if(nos>=1 && nos<=52){
                scanf("%s %s", pre_ordem, ordem);
                pos_ordem(pre_ordem, ordem);
                printf("\n");
            }
        }
    }
}
