#include<stdio.h>
union test{
    int x;
    int y;
};
int main(){
    union test t;
    t.x=2;
    printf("%d,%d ",t.x,t.y);
    t.y=10;
    printf("\n");
    printf("%d,%d ",t.x,t.y);
    return 0;
}