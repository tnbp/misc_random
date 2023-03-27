/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned short i_rand(unsigned short, unsigned short);

int main()
{
    srand(time(NULL));
    unsigned short a[20];
    for (int i = 0; i < 20; i++) a[i] = i_rand(0, 100);
    printf("BEFORE:\n");
    for (int i = 0; i < 20; i++) printf("%d ", a[i]);
    
    // bubble sort
    int has_changed;
    unsigned short tmp;
    do {
        has_changed = 0;
        for (int i = 1; i < 20; i++) {
            if (a[i-1] > a[i]) {
                tmp = a[i-1];
                a[i-1] = a[i];
                a[i] = tmp;
                has_changed = 1;
            }
        }
        if (!has_changed) break;
    } while (1);
    // end bubble sort
    
    printf("\nAFTER:\n");
    for (int i = 0; i < 20; i++) printf("%d ", a[i]);
    return 0;
}

unsigned short i_rand(unsigned short a, unsigned short b) {
    if (a == b) return a;
    if (a > b) {
        b += a;
        a = b - a;
        b -= a;
    }
    return rand() % (b - a + 1) + a;
}
