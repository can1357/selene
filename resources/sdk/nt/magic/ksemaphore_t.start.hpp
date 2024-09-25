#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dispatcher_header_t), "_KSEMAPHORE.Header", header, 0x0, 0xc0, true, 0xf496f111ed21c3c3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_KSEMAPHORE.Limit", limit, 0xc0, 0x20, true, 0x4c83fa67c53b47e8)
#else
#define _m00
#define _m01
#endif