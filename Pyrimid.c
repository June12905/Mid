#include <stdio.h>
#include <math.h>

int main(){

        int width = 0, height = 0;

        printf("input pyrimid height: ");
        scanf("%d", &height);
        printf("\n");

        while(width < height) {
                int tmp=(height-width)/2;
                if( width%2 != 1) {
                        for(int j=0; j < tmp; j++) {
                                printf(" ");
                        }
                        for(int i=0; i < width+1; i++) {
                                printf("*");
                        }
                        printf("\n");
                }
                width++;
        }

        return 0;

}