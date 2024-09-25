#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_context_t*), "_NET_BUFFER_LIST_CONTEXT.Next", next, 0x0, 0x40, true, 0x7159b5d51fe1b96b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NET_BUFFER_LIST_CONTEXT.Size", size, 0x40, 0x10, true, 0xc8522249e3eb2151)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NET_BUFFER_LIST_CONTEXT.Offset", offset, 0x50, 0x10, true, 0x40adccdda1c095ca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_NET_BUFFER_LIST_CONTEXT.ContextData", context_data, 0x80, 0x0, true, 0xd68e5e3e354b37d4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif