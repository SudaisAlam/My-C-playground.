#include<stdio.h>

int main() {

    int i;
    int j;
    int k;

    for( i=0 ; i<5 ; i++){

        for( j=0 ; j<5-i ; j++){

            printf(" ");

        }

        for( k=1 ; k<=(2*i+1) ; k++){

            printf("*");

        }

        printf("\n");
        
    }

}