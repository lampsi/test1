#include <stdio.h>

int num = 1;                           // 광역변수 num 선언, while 반복 위해 0 아닌 초기값을 주었음

int main()
{
    printf("1부터 10 사이의 홀수를 입력하시오.\n (0을 입력시 프로그램 종료)\n");     //처음 메시지        

    while(num != 0)                                                     //num이 0이 아닌 동안 반복
    { 
        printf("\n숫자입력:");
        scanf("%d", &num);                                                   //입력받는 숫자를 변수 num에 저장

        if (num < 0 || num > 10)                                         //num이 1~10 사이의 숫자가 아니라면 정해진 메시지출력
            printf("☆ 1부터 10 사이의 홀수를 입력하시오. \n");

        else if (num == 0)
            printf("♥ 프로그램을 종료합니다 \n");

        else if (num %2 == 0)                                           //num이 짝수일 경우 정해진 메시지 출력
            printf("★ 홀수를 입력하시오. \n");

        else if(num %2 == 1)                                            //1~10 사이의 홀수인 경우 sandg_lass함수 호출

            sand_glass();    
        else
            printf("☆ 1부터 10 사이의 홀수를 입력하시오 \n");

    }

}



int sand_glass()                             // 모래시계 모양으로 출력하는 함수
{       
    int line, space, i, j;
    printf("\n");

    // 모래시계의 위쪽 역삼각형 부분
                                           
    for (line =0; line < num; line++)               //라인을 0부터 num까지 1씩 증가시킴
    {
        for (space = 1; space <= line; space++)     //빈칸을 1부터 num까지 증가시키면서 출력
            {
                printf(" ");                        //
            }
        for (i = line + 1; i <= num; i++)              //좌측 반쪽에 숫자를 증가시키면서 출력
            {
                printf("%d", i);                    //
            }
        for (j = i - space; j > 1; j--)                 //우측 반쪽에 숫자를 감소시키면서 출력
            {
                i--;                                //
                printf("%d", i-1);
            }
        printf("\n");                               // 줄바꾸고 다음라인을 출력
    }


    // 모래시계의 밑쪽 정삼각형 부분
    for (line = num - 1; line > 0; line--)
     {
        for (space = line -1; space > 0; space--)    //빈칸을 num에서 1까지 감소시키면서 출력
         {
            printf(" ");
         }
        for (i = line; i <= num; i++)           //좌측 반쪽에 숫자를 증가시키면서 출력
         {  
             printf("%d", i);
         }
        for (j = num - 1; j > line-1; j--)              //우측 반쪽에 숫자를 감소시키면서 출력
        {
            printf("%d", j);
        }
        printf("\n");                               // 줄바꾸고 다음라인을 출력
     }
return 0;

}
