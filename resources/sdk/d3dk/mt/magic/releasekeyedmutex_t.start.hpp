#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RELEASEKEYEDMUTEX.hKeyedMutex", h_keyed_mutex, 0x0, 0x20, true, 0x574673139aad2b0d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_RELEASEKEYEDMUTEX.Key", key, 0x40, 0x40, true, 0xb87e7cb2039a9ad0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_RELEASEKEYEDMUTEX.FenceValue", fence_value, 0x80, 0x40, true, 0x41984f8e75e77880)
#else
#define _m00
#define _m01
#define _m02
#endif