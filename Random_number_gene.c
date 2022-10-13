/**
 * @file Random_number_gene.c
 * void srand(unsigned seed);
 * int rand();
 * #define RAND_MAX /* implemetation defined */ 

 #include <stdio.h>
 #include <stdlib.h>
 #include <stdint.h>
 #include <time.h>

// choose a winenr from 1 to 10,000
 void main() {
    uint32_t winner;
    srand(time(0)); //0 current time
    while(getchar()!='x') {
        winner = rand()%10000+1; //including 0
        printf("And the winner is #%i\n", winner);
    }

 }