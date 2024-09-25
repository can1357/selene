#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "DEBUG_DEVICE_ADDRESS.Type", type, 0x0, 0x8, true, 0xfa2af87b90ca68d2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "DEBUG_DEVICE_ADDRESS.Valid", valid, 0x8, 0x8, true, 0x747620b48d2bd291)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "DEBUG_DEVICE_ADDRESS.TranslatedAddress", translated_address, 0x40, 0x40, true, 0x41e2604d1a8578ad)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DEBUG_DEVICE_ADDRESS.Length", length, 0x80, 0x20, true, 0x3b807f1853153693)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "DEBUG_DEVICE_ADDRESS.BitWidth", bit_width, 0x10, 0x8, true, 0xab873d366fe5d895)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "DEBUG_DEVICE_ADDRESS.AccessSize", access_size, 0x18, 0x8, true, 0x834a192141a65bb3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif