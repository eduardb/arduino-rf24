let RF24 = {
    _init: ffi('void *mgos_arduino_rf24_create(int, int)'),
    _begin: ffi('int mgos_arduino_rf24_begin(void *)'),
    _openWritingPipe: ffi('void mgos_arduino_rf24_open_writing_pipe(void *, char *)'),
    _openReadingPipe: ffi('void mgos_arduino_rf24_open_reading_pipe(void *, int, char *)'),
    _writeFloat: ffi('int mgos_arduino_rf24_write_float(void *, float)'),
    _writeString: ffi('int mgos_arduino_rf24_write_string(void *, char *)'),

    create: function(cepin, cspin) {
        let obj = Object.create(RF24._proto);
        obj.rf24 = RF24._init(cepin, cspin);
        return obj;
    },

    _proto: {
        begin: function() {
            return RF24._begin(this.rf24);
        },
        openWritingPipe: function(address) {
            RF24._openWritingPipe(this.rf24, address);
        },
        openReadingPipe: function(number, address) {
            RF24._openReadingPipe(this.rf24, number, address);
        },
        write: function(data) {
            if (typeof data === 'number') {
                return RF24._writeFloat(this.rf24, data) === 1;
            } else if (typeof data === 'string') {
                return RF24._writeString(this.rf24, data) === 1;
            }
        }
    },
};