#include "S_Macros.c"
#include "S_Globals.c"

void ZRUser(float* myState, float* otherState, float time)
{
 float target[3];
 float station[4];

 float baseAngle;
 float angleDiff;
 float baseRadius;

 float a1, a2;

 switch (state)
 {
  case STATE_INIT:
#include "S_Initialize.c"
   break;
  case STATE_PREP:
#include "S_Prep.c"
   break;
  case STATE_CHARGE:
#include "S_Charge.c"
   break;
 case STATE_ZAP:
#include "S_Zap.c"
   break;
  case STATE_SEARCHING:
#include "S_Search.c"
   break;
  case STATE_TOPANEL:
#include "S_Panel.c"
   break;
  case STATE_TOSTATION:
#include "S_Station.c"
   break;
 }
}
