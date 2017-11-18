/*
 Copyright (C) 2011 J. Coliz <maniacbug@ymail.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */


#include "mgos_arduino_rf24.h"

RF24 *mgos_arduino_rf24_create(int _cepin, int _cspin)
{
    return new RF24(_cepin, _cspin);
}

int mgos_arduino_rf24_begin(RF24 *rf24)
{
    if (rf24 == nullptr) return -1;
    return rf24->begin() ? 1 : 0;
}

void mgos_arduino_rf24_open_writing_pipe(RF24 *rf24, const char *address)
{
    if (rf24 == nullptr) return;
    rf24->openWritingPipe((uint8_t *) address);
}

void mgos_arduino_rf24_open_reading_pipe(RF24 *rf24, int number, const char *address)
{
    if (rf24 == nullptr) return;
    rf24->openReadingPipe((uint8_t) number, (uint8_t *) address);
}

int mgos_arduino_rf24_write(RF24 *rf24, double data)
{
    if (rf24 == nullptr) return -1;
    return rf24->write(&data, sizeof(double))? 1 : 0;
}