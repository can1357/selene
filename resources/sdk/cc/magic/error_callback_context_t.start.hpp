#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_CC_ERROR_CALLBACK_CONTEXT.NodeByteSize", node_byte_size, 0x0, 0x10, true, 0x3396c189a2f3c4be)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_CC_ERROR_CALLBACK_CONTEXT.ErrorCode", error_code, 0x20, 0x20, true, 0x4405021c0ee560ea)
#else
#define _m00
#define _m01
#endif