#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "pvalueW.pv_valuename", pv_valuename, 0x0, 0x40, true, 0xe044045a25df3465)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "pvalueW.pv_valuelen", pv_valuelen, 0x40, 0x20, true, 0x8472fad4041e37c8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "pvalueW.pv_value_context", pv_value_context, 0x80, 0x40, true, 0xecf65952b51663be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "pvalueW.pv_type", pv_type, 0xc0, 0x20, true, 0xf7a8cf6af278ad8d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif