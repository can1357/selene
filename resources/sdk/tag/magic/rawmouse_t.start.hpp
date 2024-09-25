#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRAWMOUSE.usFlags", us_flags, 0x0, 0x10, true, 0xf378f21df49fb1a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWMOUSE.ulButtons", ul_buttons, 0x20, 0x20, true, 0x54b5129ba542d0af)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRAWMOUSE.usButtonFlags", us_button_flags, 0x20, 0x10, true, 0x6207c3e0193a61f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRAWMOUSE.usButtonData", us_button_data, 0x30, 0x10, true, 0x8cd68eccb78de881)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWMOUSE.ulRawButtons", ul_raw_buttons, 0x40, 0x20, true, 0x8e1980c7ea41bcdb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRAWMOUSE.lLastX", l_last_x, 0x60, 0x20, true, 0xb4354a436b902c88)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRAWMOUSE.lLastY", l_last_y, 0x80, 0x20, true, 0x17e8027afa2242e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWMOUSE.ulExtraInformation", ul_extra_information, 0xa0, 0x20, true, 0xce12cc66ac537c9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif