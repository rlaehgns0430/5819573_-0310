#include <stdio.h>

int main() {
    float n;
    scanf_s("%f", &n);

    int res = (int)(n * 256);
	    /// 256을 적는 이유는 8비트이기 때문

    for (int i = 15; i >= 0; i--) 
    {
        printf("%d", (res >> i) & 1);
        //비트를 하나씩 꺼내야 하기 때문
        if (i == 8) printf(".");
        //소수부 8비트 정수부 8비트 구분해야 하기 때문
    }

    return 0;
}