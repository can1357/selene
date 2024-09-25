#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_COMPATIBILITY_CONTEXT_ELEMENT.Id", id, 0x0, 0x80, true, 0x15a09d12de2da670)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::actctx_compatibility_element_type_t), "_COMPATIBILITY_CONTEXT_ELEMENT.Type", type, 0x80, 0x20, true, 0xec3cc23d8ef14a12)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_COMPATIBILITY_CONTEXT_ELEMENT.MaxVersionTested", max_version_tested, 0xc0, 0x40, true, 0x5ac4aa6486d22a43)
#else
#define _m00
#define _m01
#define _m02
#endif