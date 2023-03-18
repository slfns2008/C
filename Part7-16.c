#include <stdio.h>

int main(void)
{
    int i, j, total = 0, a = 0;

    int arr1[3][3]; // 세 명의 국어, 수학, 영어 점수 입력(3과목 * 3명)
    int arr2[5][3]; // 세 명의 국어, 영어, 수학 점수 + 총점 + 평균
    int result[2][3];

    for(i = 0; i < 3; i++)
    {
        if(i == 0)
            printf("영희의 국어, 수학, 영어 점수 입력: ");
        else if(i == 1)
            printf("철수의 국어, 수학, 영어 점수 입력: ");
        else
            printf("민준의 국어, 수학, 영어 점수 입력: ");
        
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
            arr2[i][j] = arr1[i][j];
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            total += arr1[i][j];
        }

        arr2[j][i] = total;
        a = arr2[j][i] / 3;
        arr2[j + 1][i] = a;
        total = 0;
        a = 0;
    }
    
    printf("======\n");
    printf("    영희 철수 민준\n");
    for(i = 0; i < 5; i++)
    {
        if(i == 0)
            printf("국어 ");
        else if(i == 1)
            printf("영어 ");
        else if(i == 2)
            printf("수학 ");
        else if(i == 3)
            printf("총점 ");
        else if(i == 4)
            printf("평균 ");

        for(j = 0; j < 3; j++)
        {
            if(i < 3)
                printf(" %d ", arr2[j][i]);
            else
                printf(" %d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    printf("======\n");

    return 0;
}