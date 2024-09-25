#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "__noop_coroutine_frame_standard.resume", resume, 0x0, 0x0, false, 0x20b5b14c06716b96)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "__noop_coroutine_frame_standard.destroy", destroy, 0x0, 0x0, false, 0xbf3ff468e1b10781)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "__noop_coroutine_frame_standard.promise", promise, 0x0, 0x0, false, 0xa9a5cba9239091af)
#else
#define _m00
#define _m01
#define _m02
#endif