#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCONTEXT_TRIAGE_INFO.HeaderSize", header_size, 0x0, 0x20, true, 0xfa32eda2a7c24e9f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCONTEXT_TRIAGE_INFO.NextHeader", next_header, 0x20, 0x20, true, 0x681ca186a16099e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCONTEXT_TRIAGE_INFO.Object", object, 0x40, 0x20, true, 0xdf0cfe44e92b818d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCONTEXT_TRIAGE_INFO.TypeInfoPtr", type_info_ptr, 0x60, 0x20, true, 0xa91fe5cc322d5be8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCONTEXT_TRIAGE_INFO.Context", context, 0x80, 0x20, true, 0x4df66fa4fac21579)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif