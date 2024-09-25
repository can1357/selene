#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RUNTIME_FUNCTION_ENTRY.BeginAddress", begin_address, 0x0, 0x20, true, 0x4a187a0ebe12f294)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RUNTIME_FUNCTION_ENTRY.EndAddress", end_address, 0x20, 0x20, true, 0xe5318c562c8f2bac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RUNTIME_FUNCTION_ENTRY.UnwindInfoAddress", unwind_info_address, 0x40, 0x20, true, 0xe7ad49b897f31944)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RUNTIME_FUNCTION_ENTRY.UnwindData", unwind_data, 0x40, 0x20, true, 0xf60fd41b8e9469a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif