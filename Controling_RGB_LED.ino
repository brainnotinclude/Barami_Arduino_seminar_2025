const int redpin=11;
const int greenpin=9;
const int bluepin=10;
const int band_rate=9600;
int RedValue = 0;
int GreenValue = 0;
int BlueValue = 0;
int Target_Red = 0;
int Target_Green = 0;
int Target_Blue = 0;
unsigned long timer_1=0;
unsigned long timer_2=0;

void Reset_to_white()
{
Target_Red = 255;
Target_Green = 255;
Target_Blue = 255;
}

void Gradation_to_Target()
{
  if (millis() - timer_2 >= 5) {
if(RedValue!=Target_Red)
{
 if(RedValue > Target_Red)
 RedValue -= 1;
 else
 RedValue += 1;
}

if(GreenValue!=Target_Green)
{
 if(GreenValue > Target_Green)
 GreenValue -= 1;
 else
 GreenValue += 1;
}

if(BlueValue!=Target_Blue)
{
 if(BlueValue > Target_Blue)
 BlueValue -= 1;
 else
 BlueValue += 1;
}
timer_2 = millis();
  }
}

void setup() {
   pinMode(redpin, OUTPUT);
   pinMode(greenpin, OUTPUT);
   pinMode(bluepin, OUTPUT);
   Reset_to_white();
   Serial.begin(band_rate);
   Serial.print("원하는 색상(R,G,B,W)을 입력하세요: ");
}

void loop()
{
  Gradation_to_Target();
  analogWrite(redpin, RedValue);
  analogWrite(greenpin, GreenValue);
  analogWrite(bluepin, BlueValue);
    if (Serial.available()) {
        if (millis() - timer_1 >= 2000) {
            char inputed_color = Serial.read();
            if(inputed_color=='R')
            {
              Serial.print("빨간색을 점등합니다.\n");
              Target_Red = 255;
              Target_Green = 0;
              Target_Blue = 0;
              Serial.print("원하는 색상(R,G,B,W)을 입력하세요: ");
            }
            else if(inputed_color=='G'){
              Serial.print("초록색을 점등합니다.\n");
              Target_Red = 0;
              Target_Green = 255;
              Target_Blue = 0;
              Serial.print("원하는 색상(R,G,B,W)을 입력하세요: ");
            }
            else if(inputed_color=='B')
            {
              Serial.print("파란색을 점등합니다.\n");
              Target_Red = 0;
              Target_Green = 0;
              Target_Blue = 255;
              Serial.print("원하는 색상(R,G,B,W)을 입력하세요: ");
            }
            else if(inputed_color=='W')
            {
              Serial.print("흰색을 점등합니다.\n");
              Target_Red = 255;
              Target_Green = 255;
              Target_Blue = 255;
              Serial.print("원하는 색상(R,G,B,W)을 입력하세요: ");
            }
            else
              Serial.print("알 수 없는 버튼\n");
              Serial.print("원하는 색상(R,G,B,W)을 입력하세요: ");

              timer_1 = millis(); // 마지막 입력 시간 업데이트
        }
        else {
            Serial.read(); // 추가 입력 무시
        }
    }
}
