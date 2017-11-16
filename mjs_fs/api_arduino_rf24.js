let RF24 = {
    _init: ffi('void *mgos_arduino_rf24_create(int, int)'),
    _begin: ffi('int mgos_arduino_rf24_begin(void *)'),

    create: function(cepin, cspin) {
        let obj = Object.create(RF24._proto);
        obj.rf24 = RF24._init(cepin, cspin);
        return obj;
    },

    _proto: {
        begin: function() {
            return RF24._begin(this.rf24);
        },
    },
};