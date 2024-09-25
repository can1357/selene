#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::header_t), "_TRACE_BUFFER.Header", header, 0x0, 0x80, true, 0xf30083359593ceea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::mof_field_t, 9>), "_TRACE_BUFFER.MofField", mof_field, 0x180, 0x80, true, 0x1c44cccc3a9418ac)
#else
#define _m00
#define _m01
#endif