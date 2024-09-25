#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_HV_HYPERCALL.CallCode", call_code, 0x0, 0x20, true, 0x8c52a0e7eaca0298)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_HV_HYPERCALL.IsFast", is_fast, 0x20, 0x8, true, 0x99d61b8170fa96c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_HV_HYPERCALL.IsNested", is_nested, 0x28, 0x8, true, 0xb1724dc5da35c3ea)
#else
#define _m00
#define _m01
#define _m02
#endif