#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_KEYBOARD.dwType", dw_type, 0x0, 0x20, true, 0xd50c000e26b31b57)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_KEYBOARD.dwSubType", dw_sub_type, 0x20, 0x20, true, 0xa1a6844991033e74)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_KEYBOARD.dwKeyboardMode", dw_keyboard_mode, 0x40, 0x20, true, 0x559a252d3892ae1a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_KEYBOARD.dwNumberOfFunctionKeys", dw_number_of_function_keys, 0x60, 0x20, true, 0x8f6f5579ffa3c5da)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_KEYBOARD.dwNumberOfIndicators", dw_number_of_indicators, 0x80, 0x20, true, 0x5e99e7f6d3ccbb98)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRID_DEVICE_INFO_KEYBOARD.dwNumberOfKeysTotal", dw_number_of_keys_total, 0xa0, 0x20, true, 0xda4b8300238cb46b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif