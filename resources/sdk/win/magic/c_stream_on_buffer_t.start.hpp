#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CStreamOnBuffer.RefCount", ref_count, 0x40, 0x20, true, 0xcd10334a2c7d7b96)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CStreamOnBuffer.pBuffer", p_buffer, 0x80, 0x40, true, 0xae85886d282227f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStreamOnBuffer.cbBufferLength", cb_buffer_length, 0xc0, 0x20, true, 0x95c3259d45e452c8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStreamOnBuffer.position", position, 0xe0, 0x20, true, 0xd383ace05bf52152)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif