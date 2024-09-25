#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t, uint32_t*)>*), "_CACHE_MANAGER_CALLBACK_FUNCTIONS.AcquireForLazyWriteEx", acquire_for_lazy_write_ex, 0x0, 0x0, false, 0x561c683922d9dc02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CACHE_MANAGER_CALLBACK_FUNCTIONS.ReleaseFromLazyWrite", release_from_lazy_write, 0x0, 0x0, false, 0xf471df26067f784a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint8_t)>*), "_CACHE_MANAGER_CALLBACK_FUNCTIONS.AcquireForReadAhead", acquire_for_read_ahead, 0x0, 0x0, false, 0x5812c3456feb178d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CACHE_MANAGER_CALLBACK_FUNCTIONS.ReleaseFromReadAhead", release_from_read_ahead, 0x0, 0x0, false, 0xd0029e4861f59530)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif