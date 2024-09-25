#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_DXVA_MVvalue.horz", horz, 0x0, 0x10, true, 0x54786cdbdc15c5c0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_DXVA_MVvalue.vert", vert, 0x10, 0x10, true, 0x2c383a2bd8f531f7)
#else
#define _m00
#define _m01
#endif