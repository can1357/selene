#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_OPENADAPTERFROMLUID.AdapterLuid", adapter_luid, 0x0, 0x40, true, 0xa961e1090b009e2a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENADAPTERFROMLUID.AdapterHandle", adapter_handle, 0x40, 0x20, true, 0x6c2aae126595f189)
#else
#define _m00
#define _m01
#endif