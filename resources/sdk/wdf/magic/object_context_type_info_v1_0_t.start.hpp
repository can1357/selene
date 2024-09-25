#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_0.Size", size, 0x0, 0x20, true, 0xefb6de3eb7246a20)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_0.ContextName", context_name, 0x40, 0x40, true, 0x236aa3782b0a9ab8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_0.ContextSize", context_size, 0x80, 0x40, true, 0xfba60134c7ae4380)
#else
#define _m00
#define _m01
#define _m02
#endif