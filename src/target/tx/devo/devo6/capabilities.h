#ifdef CHANDEF
  CHANDEF(AILERON)
  CHANDEF(ELEVATOR)
  CHANDEF(THROTTLE)
  CHANDEF(RUDDER)
  CHANDEF(DR0)
  CHANDEF(DR1)
  CHANDEF(GEAR0)
  CHANDEF(GEAR1)
  CHANDEF(MIX0)
  CHANDEF(MIX1)
  CHANDEF(MIX2)
  CHANDEF(FMOD0)
  CHANDEF(FMOD1)
  CHANDEF(FMOD2)
  CHANDEF(SWA0)
  CHANDEF(SWA1)
  CHANDEF(SWA2)
  CHANDEF(SWB0)
  CHANDEF(SWB1)
  CHANDEF(SWB2)
#endif

#ifdef UNDEF_INP
#define INP_RUD_DR0 INP_DR0
#define INP_RUD_DR1 INP_DR1
#define INP_ELE_DR0 INP_DR0
#define INP_ELE_DR1 INP_DR1
#define INP_AIL_DR0 INP_DR0
#define INP_AIL_DR1 INP_DR1
#endif
#ifdef CHANMAP
//These are legacy mappings
  CHANMAP("DR",     DR1)
  CHANMAP("AIL DR", DR1)
  CHANMAP("RUD DR", DR1)
  CHANMAP("ELE DR", DR1)
  CHANMAP("GEAR",   GEAR1)
//Current mappings
  CHANMAP("RUD DR0", DR0)
  CHANMAP("RUD DR1", DR1)
  CHANMAP("ELE DR0", DR0)
  CHANMAP("ELE DR1", DR1)
  CHANMAP("AIL DR0", DR0)
  CHANMAP("AIL DR1", DR1)
#endif

#ifdef BUTTONDEF
  BUTTONDEF(TRIM_LV_NEG) /* LEFT-VERTICAL */
  BUTTONDEF(TRIM_LV_POS)
  BUTTONDEF(TRIM_RV_NEG) /* RIGHT-VERTICAL */
  BUTTONDEF(TRIM_RV_POS)
  BUTTONDEF(TRIM_LH_NEG) /* LEFT-HORIZONTAL */
  BUTTONDEF(TRIM_LH_POS)
  BUTTONDEF(TRIM_RH_NEG) /* RIGHT-HORIZONTAL */
  BUTTONDEF(TRIM_RH_POS)
  BUTTONDEF(TRIM_L_NEG) /* LEFT */
  BUTTONDEF(TRIM_L_POS)
  BUTTONDEF(TRIM_R_NEG) /* RIGHT */
  BUTTONDEF(TRIM_R_POS)
  BUTTONDEF(LEFT)
  BUTTONDEF(RIGHT)
  BUTTONDEF(DOWN)
  BUTTONDEF(UP)
  BUTTONDEF(ENTER)
  BUTTONDEF(EXIT)
#endif
