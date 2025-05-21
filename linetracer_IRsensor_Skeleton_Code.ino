const int lirPin=, rirPin=; // 적외선 센서
const int lmcw=, lmccw=; //왼쪽 모터
const int rmcw=, rmccw=; //오른쪽 모터
int power=; // 모터 공급 전력 0~255 자유 선택 가능.
// 원하는 전역 변수 마음대로 추가 가능.



void setup() {
  // put your setup code here, to run once:
// 초기 세팅하기

}

int IR_Data(int IRPin)
{
// 적외선 센서 읽어오는 기능
int Data;

 return Data;
}

int Choose_direction(int LeftIR, int RightIR)
{
// 적외선 센서 데이터 받아서 방향 출력. 0: 전진, 1: 좌회전, 2: 우회전, 4 정지
int direction;

 return direction;
}

void MotorControl(int direction){
// 입력된 방향에 따라 모터 제어.

  return ;
}

void loop() {
  // put your main code here, to run repeatedly:


}
