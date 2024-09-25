#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTTPOLYCURVE.wType", w_type, 0x0, 0x10, true, 0x357cbc16524932cd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTTPOLYCURVE.cpfx", cpfx, 0x10, 0x10, true, 0x363026d9b9dea5ce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::pointfx_t, 1>), "tagTTPOLYCURVE.apfx", apfx, 0x20, 0x40, true, 0xc71656f03611650b)
#else
#define _m00
#define _m01
#define _m02
#endif