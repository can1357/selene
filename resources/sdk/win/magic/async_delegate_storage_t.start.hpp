#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "AsyncDelegateStorage._bucketAssist", bucket_assist, 0xc0, 0x40, true, 0x2d26e89d66b743a2)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "AsyncDelegateStorage._delegateIsAgile", delegate_is_agile, 0x100, 0x1, true, 0xf4b3d86b758f5026, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "AsyncDelegateStorage._isProxyToOutofprocProgressThunk", is_proxy_to_outofproc_progress_thunk, 0x101, 0x1, true, 0xb33183a9aadbfc46, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "AsyncDelegateStorage._isPlaceholder", is_placeholder, 0x102, 0x1, true, 0xb00e1aaf546ff514, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif