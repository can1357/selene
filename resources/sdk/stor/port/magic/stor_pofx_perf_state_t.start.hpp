#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_PERF_STATE.Version", version, 0x0, 0x20, true, 0x5bb1298a116a9c0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_PERF_STATE.Size", size, 0x20, 0x20, true, 0x32209c24722c10e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_POFX_PERF_STATE.Value", value, 0x40, 0x40, true, 0xb19da8b96c476f4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_POFX_PERF_STATE.Context", context, 0x80, 0x40, true, 0x9e90ba14a391d8c8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif