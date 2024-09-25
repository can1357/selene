#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ACQUIREKEYEDMUTEX2.hKeyedMutex", h_keyed_mutex, 0x0, 0x20, true, 0xdb22565bdb9e7310)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ACQUIREKEYEDMUTEX2.Key", key, 0x40, 0x40, true, 0xdc93b26c09c830dc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t*), "_D3DKMT_ACQUIREKEYEDMUTEX2.pTimeout", p_timeout, 0x80, 0x40, true, 0xc56f9ac8372f15c6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ACQUIREKEYEDMUTEX2.FenceValue", fence_value, 0xc0, 0x40, true, 0x5e93ade47aba15f9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_ACQUIREKEYEDMUTEX2.pPrivateRuntimeData", p_private_runtime_data, 0x100, 0x40, true, 0xf422be8a6f0a682d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ACQUIREKEYEDMUTEX2.PrivateRuntimeDataSize", private_runtime_data_size, 0x140, 0x20, true, 0xfbc47563f4485c26)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif