#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_LOCK2.hDevice", h_device, 0x0, 0x20, true, 0x7d30aad8a0b626c8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_LOCK2.hAllocation", h_allocation, 0x20, 0x20, true, 0x617e10e84f31102)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddicb_lock2flags_t), "_D3DKMT_LOCK2.Flags", flags, 0x40, 0x20, true, 0x377b77c63fdb234)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_LOCK2.pData", p_data, 0x80, 0x40, true, 0xed51d522685c8489)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif