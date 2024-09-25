#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint8_t)>*), "_CACHE_MANAGER_CALLBACKS.AcquireForLazyWrite", acquire_for_lazy_write, 0x0, 0x40, true, 0x3885438d324d0595)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CACHE_MANAGER_CALLBACKS.ReleaseFromLazyWrite", release_from_lazy_write, 0x40, 0x40, true, 0x38338e23072b1281)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint8_t)>*), "_CACHE_MANAGER_CALLBACKS.AcquireForReadAhead", acquire_for_read_ahead, 0x80, 0x40, true, 0x1327d4b63e6f0f76)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CACHE_MANAGER_CALLBACKS.ReleaseFromReadAhead", release_from_read_ahead, 0xc0, 0x40, true, 0x8ff3d640c3e0478c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif