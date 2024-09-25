#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PROTOCOL_PAUSE_PARAMETERS.Header", header, 0x0, 0x20, true, 0xa2e81ca14a36e3a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_PAUSE_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xb2c4b85f65ec6762)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_PAUSE_PARAMETERS.PauseReason", pause_reason, 0x40, 0x20, true, 0x2ae8b64317722669)
#else
#define _m00
#define _m01
#define _m02
#endif