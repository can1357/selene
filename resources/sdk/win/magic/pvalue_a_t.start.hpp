#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "pvalueA.pv_valuename", pv_valuename, 0x0, 0x40, true, 0xbd7d2a2e0aa12e03)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "pvalueA.pv_valuelen", pv_valuelen, 0x40, 0x20, true, 0xcc2809615718737)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "pvalueA.pv_value_context", pv_value_context, 0x80, 0x40, true, 0x8afc7d14db36ae95)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "pvalueA.pv_type", pv_type, 0xc0, 0x20, true, 0xbb472096131da3ce)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif