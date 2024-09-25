#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t, void*, uint32_t)>*), "_HAL_LOG_REGISTER_CONTEXT.LogRoutine", log_routine, 0x0, 0x40, true, 0x5aead81da69175a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_LOG_REGISTER_CONTEXT.Flag", flag, 0x40, 0x20, true, 0x128273c2477a453)
#else
#define _m00
#define _m01
#endif