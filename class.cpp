#include <stdio.h>

class TEST{
public:
    int figure;
    void calc(int temp){
        figure=temp;
        printf("%d\n",temp);
    }    
};

int main(void)
{
    TEST test;
    test.calc(10);
    printf("%d\n",test.figure);
    return 0;
}