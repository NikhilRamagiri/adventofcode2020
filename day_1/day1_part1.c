#include <stdio.h>
int main(void)
{
    FILE *file = fopen("input", "r");
    int input[200];

    int i = 0;
    int num;
    while(fscanf(file, "%d", &num) > 0)
    {
        input[i] = num;
        i++;
    }
    fclose(file);
    
    for (int i=0; i<200; i++)
    {
        printf("input[%d] = %d\n", i, input[i]);
    }
    
    for (int i=0; i<199; i++)
    {
        for ( int j=i+1; j<200; j++)
        {
            if (input[i] + input[j] == 2020)
            {
                printf("Numbers are %d, %d\n",input[i], input[j]);
                printf("Answer = %d\n", input[i]*input[j]);
                return 1;
            }
        }
    }
    return 0;
}
