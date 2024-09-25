#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CReadWithSourceAttributesMarshalingStreamOnBuffer._cRefs", c_refs, 0x40, 0x20, true, 0x4e96eb54e51881c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "CReadWithSourceAttributesMarshalingStreamOnBuffer._pBuffer", p_buffer, 0x80, 0x40, true, 0x17ef8adb97cee60e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t), "CReadWithSourceAttributesMarshalingStreamOnBuffer._cbBufferMax", cb_buffer_max, 0xc0, 0x40, true, 0x9073212a3c01209a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CReadWithSourceAttributesMarshalingStreamOnBuffer._cbBuffer", cb_buffer, 0x100, 0x40, true, 0x6126d12975a63c00)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CReadWithSourceAttributesMarshalingStreamOnBuffer._pPosition", p_position, 0x140, 0x40, true, 0x17e70742cf665ab0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CReadWithSourceAttributesMarshalingStreamOnBuffer._cAttributesProvided", c_attributes_provided, 0x180, 0x40, true, 0x528905396dd0093e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::marshaling_context_attribute_value_t*), "CReadWithSourceAttributesMarshalingStreamOnBuffer._pAttributesProvided", p_attributes_provided, 0x1c0, 0x40, true, 0x7044c816982dd3c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif