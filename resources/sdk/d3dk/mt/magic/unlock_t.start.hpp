#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UNLOCK.hDevice", h_device, 0x0, 0x20, true, 0x2099819777aebcdf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UNLOCK.NumAllocations", num_allocations, 0x20, 0x20, true, 0x13ed1c6f4dcc6e3e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_UNLOCK.phAllocations", ph_allocations, 0x40, 0x40, true, 0xe825e34c2b3b76e2)
#else
#define _m00
#define _m01
#define _m02
#endif