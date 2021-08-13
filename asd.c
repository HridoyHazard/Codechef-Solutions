#include<stdio.h>
int main()
{
    int x;
    double y,wid;
    scanf("%d %lf",&x,&y);
    if(x%5==0 && ((x+0.50)<y))
    {
        wid=((y-x)-0.50);
    }
    else
    {
        wid=y;
    }
    printf("%0.2lf\n",wid);

    return 0;
}
