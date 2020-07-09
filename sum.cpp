#include "sum.h"

int sum(int n){
    int sum = 0;

    for (int j=1; j <= n; j++) {
	sum += j;
    }

    return sum;
}
