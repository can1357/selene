#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCONTEXTTYPE_TRIAGE_INFO.TypeInfoSize", type_info_size, 0x0, 0x20, true, 0xdd6c47558122cf10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCONTEXTTYPE_TRIAGE_INFO.ContextSize", context_size, 0x20, 0x20, true, 0x2fa2778eafa9ef6e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCONTEXTTYPE_TRIAGE_INFO.ContextName", context_name, 0x40, 0x20, true, 0xfaf3ca4e6ea8e740)
#else
#define _m00
#define _m01
#define _m02
#endif