#include  "stdlib.h"	
#include  "stdio.h"
#include  "time.h"
#include  "conio.h"	
#include  "string.h"


int main(){
    int a;
    int b;
    int c;
    int F1;
    int F2;
    printf("Ternas Pitagoricas:\n");
	printf("(a, b, c)\n\n");
	    for(a = 1; a <= 500; a++) {
		    for(b = a + 1; b <= 500; b++) {
			    for(c = b + 1; c <= 500; c++) {
                   F1 = (b * b) + (a * a);
				    F2 = c * c;
                   if(F1 == F2 && c > a && c > b) {
					printf("(%d, %d, %d)\n", a, b, c);
					}
				}
			}
		}
	return 0;
	}