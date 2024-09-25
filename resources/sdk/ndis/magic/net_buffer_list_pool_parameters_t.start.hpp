#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NET_BUFFER_LIST_POOL_PARAMETERS.Header", header, 0x0, 0x20, true, 0x849321e374498943)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NET_BUFFER_LIST_POOL_PARAMETERS.ProtocolId", protocol_id, 0x20, 0x8, true, 0xad1c3928a32468fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NET_BUFFER_LIST_POOL_PARAMETERS.fAllocateNetBuffer", f_allocate_net_buffer, 0x28, 0x8, true, 0xb10f76f1b8e6d462)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NET_BUFFER_LIST_POOL_PARAMETERS.ContextSize", context_size, 0x30, 0x10, true, 0x8143decc08a4ee23)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_LIST_POOL_PARAMETERS.PoolTag", pool_tag, 0x40, 0x20, true, 0x7e9bdd0c2e176494)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_LIST_POOL_PARAMETERS.DataSize", data_size, 0x60, 0x20, true, 0xf12df55bebddbb73)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif