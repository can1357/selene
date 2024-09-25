#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_NEGOTIATION_INFO.Size", size, 0x0, 0x20, true, 0xf48e3932c76326dc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_NEGOTIATION_INFO.NameLength", name_length, 0x20, 0x20, true, 0x642f7205f999ca86)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SEC_NEGOTIATION_INFO.Name", name, 0x40, 0x40, true, 0xc4fa058460195fb2)
#else
#define _m00
#define _m01
#define _m02
#endif