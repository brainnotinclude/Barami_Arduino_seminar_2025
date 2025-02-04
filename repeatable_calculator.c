//gcc 7.4.0
//정수 계산 반복 프로그램.
#include  <stdio.h>
// 위의 코드는 standard input output(표준 입출력)에 관한 함수모음파일(stdio.h)을 불러오는 명령어이다.

int main() // c언어에서 가장 먼저 실행되는 함수. 사실상 이 함수 안에서 모든 것이 시작된다.
{
    //변수 설정.
   int input_number_1 = 0; // 계산기가 입력받는 정수형의 변수 1
   int input_number_2 = 0; // 계산기가 입력받는 정수형의 변수 2
   char operator; //계산기가 입력받는 연산자
   int output_number = 0; // 계산기가 출력하는 결과값
   int end_program = 0; //계산기 종료 변수. 0이 아니면 종료된다.
    
    do{ //반복문 시작
        
   printf("계산하려는 수식을 입력하고 엔터를 누르세요.\n예시: 1+1. +-*/% 연산만 가능.\n");
    //사용자에게 표시되는 안내문
    
   scanf("%d%c%d", &input_number_1,&operator,&input_number_2); //사용자 입력 받기
    
   printf("입력한 수식: %d%c%d\n",input_number_1,operator,input_number_2);// 입력한 수식 확인
    
   if(operator == '+') //덧셈 연산자 인식
   {
       output_number = input_number_1 + input_number_2; //덧셈 계산
       printf("계산 결과: %d\n",output_number); // 덧셈 계산 결과 출력
   }
    else if(operator == '-')//뺄셈 연산자 인식
   {
       output_number = input_number_1 - input_number_2;//뺄셈 계산
       printf("계산 결과: %d\n",output_number); // 뺄셈 계산 결과 출력
   }
    else if(operator == '*')//곱셈 연산자 인식
   {
       output_number = input_number_1 * input_number_2;//곱셈 계산
       printf("계산 결과: %d\n",output_number); // 곱셈 계산 결과 출력
   }
    else if(operator == '/')//나눗셈 연산자 인식
   {
       output_number = input_number_1 / input_number_2;//나눗셈 계산
       printf("계산 결과: %d\n",output_number); // 나눗셈 계산 결과 출력
   }
     else if(operator == '%')//나머지 연산자 인식
   {
       output_number = input_number_1 % input_number_2;//나머지 계산
       printf("계산 결과: %d\n",output_number); // 나머지 계산 결과 출력
   }
    else // 위의 모든 조건이 성립되지 않는 경우
        printf("알 수 없는 수식 입니다.\n"); // 연산자 인식 실패시 오류 메세지 출력
        
    printf("계속 계산하시려면 숫자 0을 눌러주세요.\n");// 반복 여부 확인 메세지
    scanf("%d",&end_program); //사용자 입력 받기
        
    }while(end_program==0); //계산 반복용 while문
    
    printf("계산기가 정상 종료되었습니다."); //정상 종료 메세지
        
    return 0; //main 함수 정상 종료
}
