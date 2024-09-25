#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::pin_mode_t), "_WWAN_PIN_DESC.PinMode", pin_mode, 0x0, 0x20, true, 0x233dcdadf3303780)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::pin_format_t), "_WWAN_PIN_DESC.PinFormat", pin_format, 0x20, 0x20, true, 0xc3981aeee9f7fe27)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_PIN_DESC.PinLengthMin", pin_length_min, 0x40, 0x20, true, 0x80eaae0ee4cd6845)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_PIN_DESC.PinLengthMax", pin_length_max, 0x60, 0x20, true, 0x91eac3a71bb2d8b6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif