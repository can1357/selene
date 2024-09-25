#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAPFILEHEADER.bfType", bf_type, 0x0, 0x10, true, 0x469a5c2b352c9c0d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBITMAPFILEHEADER.bfSize", bf_size, 0x10, 0x20, true, 0x1c95a6bf49f721cd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAPFILEHEADER.bfReserved1", bf_reserved1, 0x30, 0x10, true, 0x126ee3d23669002f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAPFILEHEADER.bfReserved2", bf_reserved2, 0x40, 0x10, true, 0xb666d9f25a0b597a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBITMAPFILEHEADER.bfOffBits", bf_off_bits, 0x50, 0x20, true, 0x9859c0f242193a64)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif