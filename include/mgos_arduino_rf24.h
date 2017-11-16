#ifndef _MOS_ARDUINO_RF24_H_
#define _MOS_ARDUINO_RF24_H_

#include "RF24.h"

#ifdef __cplusplus
extern "C" {
#endif

RF24 *mgos_arduino_rf24_create(uint16_t _cepin, uint16_t _cspin);
int mgos_arduino_rf24_begin(RF24 *rf24);


#ifdef __cplusplus
}
#endif


#endif /* _MOS_ARDUINO_RF24_H_ */