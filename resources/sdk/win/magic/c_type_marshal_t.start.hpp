#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CTypeMarshal._cRefs", c_refs, 0x80, 0x20, true, 0x739de68ff1b23eeb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CTypeMarshal._offset", offset, 0xa0, 0x20, true, 0x98cf0dbfcc6894fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CTypeMarshal._length", length, 0xc0, 0x20, true, 0x7f33a85358e66395)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "CTypeMarshal._pFormatString", p_format_string, 0x100, 0x40, true, 0x4129dc965a6c33e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_desc_t), "CTypeMarshal._StubDesc", stub_desc, 0x140, 0xc0, true, 0x552495747b245adc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif