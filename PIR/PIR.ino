#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Your Auth Code";
char ssid[] = "Your Network SSID";
char pass[] = "Your Network Password";
//#define SERVER  IPAddress(xxx, xxx, xxx, xxx)  //uncomment if you are using a local server 

int PIR = 12;       //Pin Config For PIR Sensor Input
int LED = 2;        //Pin Config For LED Output(ACTIVE HIGH)
int ALR = 4;        //Pin Config For BUZZER Output(ACTIVE HIGH)

bool ReadPIR;
bool TimerPIR;
bool Timer_Stat;
bool LED_ACTV;
int LED_BGHT;
bool ALR_ACTV;

WidgetLED led1(V7);

void setup(){
    pinMode(PIR,INPUT);
    pinMode(LED,OUTPUT);
    pinMode(ALR,OUTPUT);

    #if defined(SERVER)
    Blynk.begin(auth,ssid, pass, SERVER, 8080);
    #else
    Blynk.begin(auth,ssid,pass);
    #endif

    digitalWrite(LED,HIGH);
    digitalWrite(ALR,HIGH);
    delay(500);
    digitalWrite(ALR,LOW);
    digitalWrite(LED,LOW);
}

BLYNK_WRITE(V1){
    switch (param.asInt()){
        case 1:{
            Blynk.virtualWrite(V6,"ON");
            ReadPIR = true;
            TimerPIR = false;
            break;
        }

        case 2:{
            Blynk.virtualWrite(V6,"TIMER");
            TimerPIR = true;
            ReadPIR = false;
            break;
        }

        case 3:{
            Blynk.virtualWrite(V6,"OFF");
            TimerPIR = false;
            ReadPIR= false ;
            break;
        }

        default:{
            TimerPIR = false;
            ReadPIR= false ;
        }
    }
}

BLYNK_WRITE(V2){
    Timer_Stat = param.asInt();
} 

BLYNK_WRITE(V3){
    LED_ACTV = param.asInt(); 
}

BLYNK_WRITE(V4){
    LED_BGHT = param.asInt();
}
BLYNK_WRITE(V5){
    ALR_ACTV = param.asInt(); 
}

void loop(){
    if(TimerPIR && Timer_Stat == true || ReadPIR == true){
        if(digitalRead(PIR) == HIGH){
            if(LED_ACTV == true){
                analogWrite(LED,LED_BGHT);
            }
            if(ALR_ACTV == true){
                digitalWrite(ALR,HIGH);
            }
            Blynk.notify("Motion Detected,");
            led1.on();
            digitalWrite(ALR,LOW);
            analogWrite(LED,0);
            led1.off();
        }
    }
    Blynk.run();
}
