#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCryptBuffer.cbBuffer", cb_buffer, 0x0, 0x20, true, 0x8a3c6255e4be39ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCryptBuffer.BufferType", buffer_type, 0x20, 0x20, true, 0x84291c1036ad42f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_BCryptBuffer.pvBuffer", pv_buffer, 0x40, 0x40, true, 0x98c5b4b1348f94e2)
#else
#define _m00
#define _m01
#define _m02
#endif