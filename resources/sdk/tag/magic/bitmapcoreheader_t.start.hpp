#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBITMAPCOREHEADER.bcSize", bc_size, 0x0, 0x20, true, 0x4a200d02c0d7a785)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAPCOREHEADER.bcWidth", bc_width, 0x20, 0x10, true, 0xc19f509d63260ab8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAPCOREHEADER.bcHeight", bc_height, 0x30, 0x10, true, 0x60211d1b380840f2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAPCOREHEADER.bcPlanes", bc_planes, 0x40, 0x10, true, 0xdf436644ce5b1eb2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAPCOREHEADER.bcBitCount", bc_bit_count, 0x50, 0x10, true, 0x11f09fe3c678e37a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif