#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION.ElementCount", element_count, 0x0, 0x20, true, 0xa9a5b63dfb415970)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::compatibility_context_element_t>), "_ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION.Elements", elements, 0x40, 0x0, true, 0xc6aa02884cf14d49)
#else
#define _m00
#define _m01
#endif