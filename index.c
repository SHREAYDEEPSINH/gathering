
// qus 2
#include <stdio.h>

int num(int n)
{
    if(n>10) {
        return 0;
    }
    printf("%d\n",n);
    num(n+1);
}
int main()
{
    num(1);
    return 0;
}


// qus 3 
#include <stdio.h>

void String(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[] = "HelloWorld";
    String(str);
    return 0;
}