#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CNdrStream.RefCount", ref_count, 0x40, 0x20, true, 0x4f0b99ff56420c3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_message_t*), "CNdrStream.pStubMsg", p_stub_msg, 0x80, 0x40, true, 0x83d8a79aff3228f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::com_call_marshaling_direction_t), "CNdrStream.direction", direction, 0xc0, 0x20, true, 0x4d9d751ddad66e24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CNdrStream.cbBufferLength", cb_buffer_length, 0xe0, 0x20, true, 0x7fdfc666e6f64c69)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CNdrStream.position", position, 0x100, 0x20, true, 0xb41c9e23493e6bea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif