
#include <stdio.h>
 
enum Token {
    SYMBOL,         //0
    NUMBER,         //1
    EXPRESSION = 0, //0
    OPERATOR,       //1
    UNDEFINED       //2
};
 
void main() {
    enum Token a, b, c, d, e;
    a = SYMBOL;
    b = NUMBER;
    c = EXPRESSION;
    d = OPERATOR;
    e = UNDEFINED;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
	printf("%d\n",  SYMBOL);
}
