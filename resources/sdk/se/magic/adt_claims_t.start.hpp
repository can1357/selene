#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_CLAIMS.Length", length, 0x0, 0x20, true, 0x214fe4c01ab43cbe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_ADT_CLAIMS.Claims", claims, 0x40, 0x40, true, 0x91df5eea1a223846)
#else
#define _m00
#define _m01
#endif