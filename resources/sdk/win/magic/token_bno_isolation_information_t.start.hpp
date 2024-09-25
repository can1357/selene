#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_TOKEN_BNO_ISOLATION_INFORMATION.IsolationPrefix", isolation_prefix, 0x0, 0x40, true, 0xf12f00441b0c23b5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TOKEN_BNO_ISOLATION_INFORMATION.IsolationEnabled", isolation_enabled, 0x40, 0x8, true, 0xfcc7c743a01d889e)
#else
#define _m00
#define _m01
#endif