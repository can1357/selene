#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_ATTRIBUTE.Attribute", attribute, 0x0, 0x40, true, 0xca267ae4f31bb262)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_ATTRIBUTE.Size", size, 0x40, 0x40, true, 0xf8f7da5a8da74281)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_ATTRIBUTE.Value", value, 0x80, 0x40, true, 0x58f0b942a52deb35)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PS_ATTRIBUTE.ValuePtr", value_ptr, 0x80, 0x40, true, 0xe4e114d309fbe2fc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_PS_ATTRIBUTE.ReturnLength", return_length, 0xc0, 0x40, true, 0x4cf6a7e2f8e9c68b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif