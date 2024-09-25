#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CACHE_MANAGER_CALLBACKS_EX.Version", version, 0x0, 0x0, false, 0x10df1401a8f82822)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CACHE_MANAGER_CALLBACKS_EX.Size", size, 0x0, 0x0, false, 0xa29de4c8cf4158e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cache_manager_callback_functions_t), "_CACHE_MANAGER_CALLBACKS_EX.Functions", functions, 0x0, 0x0, false, 0x61f0acc528363c87)
#else
#define _m00
#define _m01
#define _m02
#endif