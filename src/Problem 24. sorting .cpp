#include <stdio.h>
void arraySortingAndPrint(int arra[])
{
    int i,j;

    for(i = 0; i <3; i++)
    {
        for(j = 0; j <2; j++)
        {
            if(arra[j] >= arra[j+1])
            {
                int box = arra[j];
                arra[j] = arra[j+1];
                arra[j+1] = box;
            }
        }
    }

    for(i = 0; i <3; i++)
    {
        printf("%d ", arra[i]);
    }
    printf("\n\n");
}
int main()
{
    int i, j,testCase;
    int arra[3];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        for(j = 0; j <3; j++)
        {
            scanf("%d", &arra[j]);
        }
        printf("%d\n", i);
        arraySortingAndPrint(arra);
    }
    return 0;
}
