#include <DCMotor.h>

#define INFRA_DER_EXT 1
#define INFRA_DER 2
#define INFRA_IZQ 3
#define INFRA_IZQ_EXT 4
#define NEGRO 40

DCMotor motor_der(M0_EN, M0_D0, M0_D1);
DCMotor motor_izq(M1_EN, M1_D0, M1_D1);

void setup(){
  
}

void loop(){
  
  if(INFRA_DER_EXT > NEGRO){
    motor_izq.setSpeed(-40);
    motor_der.setSpeed(40);
  }
  
  if(INFRA_IZQ_EXT > NEGRO){
    motor_izq.setSpeed(40);
    motor_der.setSpeed(-40);
  }
  if((INFRA_DER_EXT < NEGRO) && (INFRA_IZQ_EXT < NEGRO)){
    motor_izq.setSpeed(40);
    motor_der.setSpeed(40);
    
  }
}
