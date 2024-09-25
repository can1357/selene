#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CBaseMarshalingStreamOnBuffer._cRefs", c_refs, 0x40, 0x20, true, 0xa3cc560442062e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "CBaseMarshalingStreamOnBuffer._pBuffer", p_buffer, 0x80, 0x40, true, 0xaff8c74a562fc80d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t), "CBaseMarshalingStreamOnBuffer._cbBufferMax", cb_buffer_max, 0xc0, 0x40, true, 0x396db671431aeea4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CBaseMarshalingStreamOnBuffer._cbBuffer", cb_buffer, 0x100, 0x40, true, 0xb0fbdbc82db4f151)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CBaseMarshalingStreamOnBuffer._pPosition", p_position, 0x140, 0x40, true, 0x9d50e84ac115db75)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif