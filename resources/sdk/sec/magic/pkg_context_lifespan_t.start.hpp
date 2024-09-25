#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_SecPkgContext_Lifespan.tsStart", ts_start, 0x0, 0x40, true, 0xcc883fc71d5015f4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_SecPkgContext_Lifespan.tsExpiry", ts_expiry, 0x40, 0x40, true, 0x21148d6b582ebf19)
#else
#define _m00
#define _m01
#endif