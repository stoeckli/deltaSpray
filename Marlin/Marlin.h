// Tonokip RepRap firmware rewrite based off of Hydra-mmm firmware.
// Licence: GPL

#ifndef MARLIN_H
#define MARLIN_H

#define  FORCE_INLINE __attribute__((always_inline)) inline

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#include <util/delay.h>
#include <avr/pgmspace.h>
#include <avr/eeprom.h>
#include <avr/interrupt.h>


#include "fastio.h"
#include "Configuration.h"
#include "pins.h"

#ifndef AT90USB
#define  HardwareSerial_h // trick to disable the standard HWserial
#endif

#if (ARDUINO >= 100) && !defined(__AVR_ATmega644P__)
# include "Arduino.h"
#else
# include "WProgram.h"
  //Arduino < 1.0.0 does not define this, so we need to do it ourselfs
# define analogInputToDigitalPin(p) ((p) + A0)
#endif

#include "MarlinSerial.h"

#ifndef cbi
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#endif
#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif

#include "WString.h"

#ifdef AT90USB
  #define MYSERIAL Serial
#else
  #define MYSERIAL MSerial
#endif

#define SERIAL_PROTOCOL(x) MYSERIAL.print(x);
#define SERIAL_PROTOCOL_F(x,y) MYSERIAL.print(x,y);
#define SERIAL_PROTOCOLPGM(x) serialprintPGM(PSTR(x));
#define SERIAL_PROTOCOLLN(x) {MYSERIAL.print(x);MYSERIAL.write('\n');}
#define SERIAL_PROTOCOLLNPGM(x) {serialprintPGM(PSTR(x));MYSERIAL.write('\n');}


const char errormagic[] PROGMEM ="Error:";
const char echomagic[] PROGMEM ="echo:";
#define SERIAL_ERROR_START serialprintPGM(errormagic);
#define SERIAL_ERROR(x) SERIAL_PROTOCOL(x)
#define SERIAL_ERRORPGM(x) SERIAL_PROTOCOLPGM(x)
#define SERIAL_ERRORLN(x) SERIAL_PROTOCOLLN(x)
#define SERIAL_ERRORLNPGM(x) SERIAL_PROTOCOLLNPGM(x)

#define SERIAL_ECHO_START serialprintPGM(echomagic);
#define SERIAL_ECHO(x) SERIAL_PROTOCOL(x)
#define SERIAL_ECHOPGM(x) SERIAL_PROTOCOLPGM(x)
#define SERIAL_ECHOLN(x) SERIAL_PROTOCOLLN(x)
#define SERIAL_ECHOLNPGM(x) SERIAL_PROTOCOLLNPGM(x)

#define SERIAL_ECHOPAIR(name,value) (serial_echopair_P(PSTR(name),(value)))

void serial_echopair_P(const char *s_P, float v);
void serial_echopair_P(const char *s_P, double v);
void serial_echopair_P(const char *s_P, unsigned long v);

//things to write to serial from Programmemory. saves 400 to 2k of RAM.
FORCE_INLINE void serialprintPGM(const char *str)
{
  char ch=pgm_read_byte(str);
  while(ch)
  {
    MYSERIAL.write(ch);
    ch=pgm_read_byte(++str);
  }
}


void get_command();
void process_commands();

void manage_inactivity();

#if X_ENABLE_PIN > -1
  #define  enable_x() WRITE(X_ENABLE_PIN, X_ENABLE_ON)
  #define disable_x() WRITE(X_ENABLE_PIN,!X_ENABLE_ON)
#else
  #define enable_x() ;
  #define disable_x() ;
#endif

#if Y_ENABLE_PIN > -1
  #define  enable_y() WRITE(Y_ENABLE_PIN, Y_ENABLE_ON)
  #define disable_y() WRITE(Y_ENABLE_PIN,!Y_ENABLE_ON)
#else
  #define enable_y() ;
  #define disable_y() ;
#endif

#if Z_ENABLE_PIN > -1
    #define  enable_z() WRITE(Z_ENABLE_PIN, Z_ENABLE_ON)
    #define disable_z() WRITE(Z_ENABLE_PIN,!Z_ENABLE_ON)
#else
  #define enable_z() ;
  #define disable_z() ;
#endif

#if P_ENABLE_PIN > -1
    #define  enable_p() WRITE(P_ENABLE_PIN, P_ENABLE_ON)
    #define disable_p() WRITE(P_ENABLE_PIN,!P_ENABLE_ON)
#else
  #define enable_p() ;
  #define disable_p() ;
#endif

#if V_ENABLE_PIN > -1
    #define  enable_v() WRITE(V_ENABLE_PIN, V_ENABLE_ON)
    #define disable_v() WRITE(V_ENABLE_PIN,!V_ENABLE_ON)
#else
  #define enable_v() ;
  #define disable_v() ;
#endif

enum AxisEnum {X_AXIS=0, Y_AXIS=1, Z_AXIS=2, P_AXIS=3, V_AXIS=4};


void FlushSerialRequestResend();
void ClearToSend();

void get_coordinates();
void calculate_delta(float cartesian[3]);
void prepare_move();
void kill();
void Stop();

bool IsStopped();

void enquecommand(const char *cmd); //put an ascii command at the end of the current buffer.
void enquecommand_P(const char *cmd); //put an ascii command at the end of the current buffer, read from flash
void prepare_arc_move(char isclockwise);
void clamp_to_software_endstops(float target[5]);

#ifdef FAST_PWM_FAN
void setPwmFrequency(uint8_t pin, int val);
#endif

#ifndef CRITICAL_SECTION_START
  #define CRITICAL_SECTION_START  unsigned char _sreg = SREG; cli();
  #define CRITICAL_SECTION_END    SREG = _sreg;
#endif //CRITICAL_SECTION_START

extern float homing_feedrate[];
extern bool axis_relative_modes[];
extern int extrudemultiply; // Sets extrude multiply factor (in percent)
extern float current_position[NUM_AXIS] ;
extern float add_homeing[5];
extern float min_pos[5];
extern float max_pos[5];
extern int fanSpeed;

#ifdef FWRETRACT
extern bool autoretract_enabled;
extern bool retracted;
extern float retract_length, retract_feedrate, retract_zlift;
extern float retract_recover_length, retract_recover_feedrate;
#endif

extern unsigned long starttime;
extern unsigned long stoptime;

// Handling multiple extruders pins
extern uint8_t active_extruder;

#endif
