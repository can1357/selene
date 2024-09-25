#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ACQUIREKEYEDMUTEX.hKeyedMutex", h_keyed_mutex, 0x0, 0x20, true, 0x2174d33d2f046603)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ACQUIREKEYEDMUTEX.Key", key, 0x40, 0x40, true, 0x80bb90e30e4ddc88)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t*), "_D3DKMT_ACQUIREKEYEDMUTEX.pTimeout", p_timeout, 0x80, 0x40, true, 0xa3b5d45b751540b5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ACQUIREKEYEDMUTEX.FenceValue", fence_value, 0xc0, 0x40, true, 0xc7ea2d0706ccfc39)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif