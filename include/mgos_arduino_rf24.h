#ifndef _MOS_ARDUINO_RF24_H_
#define _MOS_ARDUINO_RF24_H_

#include "RF24.h"

#ifdef __cplusplus
extern "C" {
#endif

RF24 *mgos_arduino_rf24_create(int _cepin, int _cspin);
int mgos_arduino_rf24_begin(RF24 *rf24);
void mgos_arduino_rf24_open_writing_pipe(RF24 *rf24, const char *address);
void mgos_arduino_rf24_open_reading_pipe(RF24 *rf24, int number, const char *address);
int mgos_arduino_rf24_write(RF24 *rf24, double data);

#ifdef __cplusplus
}
#endif


#endif /* _MOS_ARDUINO_RF24_H_ */