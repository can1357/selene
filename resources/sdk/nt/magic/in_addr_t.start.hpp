#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "in_addr.S_un.S_un_b.s_b1", s_b1, 0x0, 0x8, true, 0x37ba72781e5b56e5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "in_addr.S_un.S_un_b.s_b2", s_b2, 0x8, 0x8, true, 0x1df30df1ad074a30)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "in_addr.S_un.S_un_b.s_b3", s_b3, 0x10, 0x8, true, 0x5afdc046ab47717)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "in_addr.S_un.S_un_b.s_b4", s_b4, 0x18, 0x8, true, 0xa1e0ad3446e7c243)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_s_un_b_t), "in_addr.S_un.S_un_b", s_un_b, 0x0, 0x20, true, 0x2f545873ac8b5328)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "in_addr.S_un.S_un_w.s_w1", s_w1, 0x0, 0x10, true, 0xb16ee483e3ce3f40)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "in_addr.S_un.S_un_w.s_w2", s_w2, 0x10, 0x10, true, 0x30695457e0dcb55f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_s_un_w_t), "in_addr.S_un.S_un_w", s_un_w, 0x0, 0x20, true, 0xed3d196673a57f1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "in_addr.S_un.S_addr", s_addr, 0x0, 0x20, true, 0xfa14dd9bcb7732cd)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_s_un_t), "in_addr.S_un", s_un, 0x0, 0x20, true, 0x25a64cb87a8e3303)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif