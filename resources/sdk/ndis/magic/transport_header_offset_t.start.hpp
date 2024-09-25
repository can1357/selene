#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRANSPORT_HEADER_OFFSET.ProtocolType", protocol_type, 0x0, 0x10, true, 0x9dda6df79340a59e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRANSPORT_HEADER_OFFSET.HeaderOffset", header_offset, 0x10, 0x10, true, 0x9c632d9f16261540)
#else
#define _m00
#define _m01
#endif