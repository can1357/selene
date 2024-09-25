#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_state_header_t), "_PATH_OFFLOAD_STATE_CONST.Header", header, 0x0, 0x40, true, 0x8d080cff042c813)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_PATH_OFFLOAD_STATE_CONST.SourceAddress", source_address, 0x40, 0x40, true, 0x9c5421f930d7f8c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_PATH_OFFLOAD_STATE_CONST.DestinationAddress", destination_address, 0x80, 0x40, true, 0x5eed94faccff80a6)
#else
#define _m00
#define _m01
#define _m02
#endif