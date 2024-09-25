#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "CTypeGen._pTypeFormat", p_type_format, 0x0, 0x40, true, 0x430c0a1674563bf4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CTypeGen._cbTypeFormat", cb_type_format, 0x40, 0x10, true, 0x9e832cc8477974ba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CTypeGen._offset", offset, 0x50, 0x10, true, 0xdfd2bbf82a642710)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CTypeGen._uStructSize", u_struct_size, 0x60, 0x20, true, 0x60599683f7402eee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif