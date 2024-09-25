#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSQIResult.pv", pv, 0x0, 0x40, true, 0xc14aa3a87b553847)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "tagSQIResult.hr", hr, 0x40, 0x20, true, 0x8b5c1b7d42ef898e)
#else
#define _m00
#define _m01
#endif