#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RELEASEKEYEDMUTEX2.hKeyedMutex", h_keyed_mutex, 0x0, 0x20, true, 0x2ccc41096f1bd6ba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_RELEASEKEYEDMUTEX2.Key", key, 0x40, 0x40, true, 0x5b3d408e04e3b8bc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_RELEASEKEYEDMUTEX2.FenceValue", fence_value, 0x80, 0x40, true, 0x3c6fd6bdcc6a1d92)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_RELEASEKEYEDMUTEX2.pPrivateRuntimeData", p_private_runtime_data, 0xc0, 0x40, true, 0xf5b29b8d423ae61f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RELEASEKEYEDMUTEX2.PrivateRuntimeDataSize", private_runtime_data_size, 0x100, 0x20, true, 0xcf16b30c6e423c37)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif