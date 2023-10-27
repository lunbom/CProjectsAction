#include <stdio.h>
#include <stdlib.h>

//用*号输出字母C的图案。
int main()
{   
    int i;
    for(i=0;i<6;i++)
    {
        if(i==0)
        {
            int j = i;
            while(j<5)
            {
                printf("*");
                j++;
            }
            printf("\n");
        }
        else if(i==5)
        {
            int k = i;
            while(k<10)
            {
                printf("*");
                k++;
            }
            printf("\n");
        }
        else
        {
            printf("*\n");
        }
    }

    system("pause");
    return 0;
}

