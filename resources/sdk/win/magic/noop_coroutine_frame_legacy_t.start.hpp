#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "__noop_coroutine_frame_legacy.resume", resume, 0x0, 0x0, false, 0x8541d537946728e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "__noop_coroutine_frame_legacy.flag", flag, 0x0, 0x0, false, 0xb4e1d7c1cf68ac02)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "__noop_coroutine_frame_legacy.index", index, 0x0, 0x0, false, 0x61950b064bef3d13)
#else
#define _m00
#define _m01
#define _m02
#endif