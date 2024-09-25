#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_REQUEST_LINE_BINDING_DESCRIPTION.RequestLine", request_line, 0x0, 0x20, true, 0xee0e2574c7ff3d6f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_REQUEST_LINE_BINDING_DESCRIPTION.ChannelNumber", channel_number, 0x20, 0x20, true, 0xaa8b11f542b033c3)
#else
#define _m00
#define _m01
#endif