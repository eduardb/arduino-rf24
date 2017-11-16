/*
 Copyright (C) 2011 J. Coliz <maniacbug@ymail.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */


#include "mgos_arduino_rf24.h"

RF24 *mgos_arduino_rf24_create(uint16_t _cepin, uint16_t _cspin) {
    return new RF24(_cepin, _cspin);
}

int mgos_arduino_rf24_begin(RF24 *rf24) {
    if (rf24 == nullptr) return -1;
    return rf24->begin() ? 1 : 0;
}