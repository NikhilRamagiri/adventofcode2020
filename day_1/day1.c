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
    
    // for (int i=0; i<200; i++)
    // {
    //     printf("input[%d] = %d\n", i, input[i]);
    // }
    
    // Part1 Answer
    for (int i=0; i<199; i++)
    {
        int temp = 0;
        for ( int j=i+1; j<200; j++)
        {
            if (input[i] + input[j] == 2020)
            {
                printf("Numbers are %d, %d\n",input[i], input[j]);
                printf("Part1 Answer = %d\n", input[i]*input[j]);
                temp = 1;
                break;
            }
        }
        if (temp == 1)
        {
            break;
        }
    }

    // Part2 Answer
    for (int i=0; i<198; i++)
    {
        for ( int j=i+1; j<199; j++)
        {
            for (int k=i+2; k<200; k++)
            {
                if (input[i] + input[j] + input[k] == 2020)
                {
                    printf("Numbers are %d, %d, %d\n",input[i], input[j], input[k]);
                    printf("Part2 Answer = %d\n", input[i]*input[j]*input[k]);
                    return 1;
                }
            }
            
        }
    }    
    return 0;
}
