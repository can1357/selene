#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CWriteMarshalingStreamOnBuffer._cRefs", c_refs, 0x40, 0x20, true, 0x8efbf52b3aa1fe86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "CWriteMarshalingStreamOnBuffer._pBuffer", p_buffer, 0x80, 0x40, true, 0x227684be420d952d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t), "CWriteMarshalingStreamOnBuffer._cbBufferMax", cb_buffer_max, 0xc0, 0x40, true, 0x362f8a465aeeeaa4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CWriteMarshalingStreamOnBuffer._cbBuffer", cb_buffer, 0x100, 0x40, true, 0x97a907a6bc5244ec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CWriteMarshalingStreamOnBuffer._pPosition", p_position, 0x140, 0x40, true, 0xbc11e095f4ad2b14)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif