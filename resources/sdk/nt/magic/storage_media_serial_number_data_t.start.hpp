#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_MEDIA_SERIAL_NUMBER_DATA.SerialNumberLength", serial_number_length, 0x10, 0x10, true, 0xb87aefdc201a6d1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_STORAGE_MEDIA_SERIAL_NUMBER_DATA.SerialNumber", serial_number, 0x20, 0x0, true, 0x2d6af9b294dc0773)
#else
#define _m00
#define _m01
#endif