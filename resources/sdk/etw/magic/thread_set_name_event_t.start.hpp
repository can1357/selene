#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_THREAD_SET_NAME_EVENT.ProcessId", process_id, 0x0, 0x20, true, 0xe1c3da3a0d184837)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_THREAD_SET_NAME_EVENT.ThreadId", thread_id, 0x20, 0x20, true, 0x4afe4a2904767537)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_ETW_THREAD_SET_NAME_EVENT.ThreadName", thread_name, 0x40, 0x10, true, 0x432d1e8ebcb65674)
#else
#define _m00
#define _m01
#define _m02
#endif