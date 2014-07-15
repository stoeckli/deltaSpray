/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega2560__
#define ARDUINO 105
#define ARDUINO_MAIN
#define __AVR__
#define __avr__
#define F_CPU 16000000L
#define __cplusplus
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__

#define __builtin_va_list
#define __builtin_va_start
#define __builtin_va_end
#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int
            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}


#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\Marlin.ino"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\Configuration.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\ConfigurationStore.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\ConfigurationStore.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\Configuration_adv.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\LiquidCrystalRus.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\LiquidCrystalRus.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\Marlin.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\MarlinSerial.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\MarlinSerial.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\Marlin_main.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\Sd2Card.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\Sd2Card.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\Sd2PinMap.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdBaseFile.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdBaseFile.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdFatConfig.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdFatStructs.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdFatUtil.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdFatUtil.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdFile.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdFile.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdInfo.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdVolume.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\SdVolume.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\cardreader.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\cardreader.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\fastio.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\language.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\motion_control.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\motion_control.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\pins.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\planner.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\planner.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\speed_lookuptable.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\stepper.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\stepper.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\temperature.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\temperature.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\thermistortables.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\ultralcd.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\ultralcd.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\ultralcd_implementation_hitachi_HD44780.h"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\watchdog.cpp"
#include "\\NRCHBS-S1161.nibr.novartis.net\STOECMA2$\data\GitHub\deltaSpray\Marlin\watchdog.h"
#endif
