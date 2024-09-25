#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_OPENALLOCATION.NumAllocations", num_allocations, 0x0, 0x20, true, 0x41354bfecf4c6fc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::openallocationinfo_t*), "_DXGKARG_OPENALLOCATION.pOpenAllocation", p_open_allocation, 0x40, 0x40, true, 0x7b5aa75923d3251e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_OPENALLOCATION.pPrivateDriverData", p_private_driver_data, 0x80, 0x40, true, 0x6c1c983ce69aee9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_OPENALLOCATION.PrivateDriverSize", private_driver_size, 0xc0, 0x20, true, 0x3a0683d4ef2b7e42)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::openallocationflags_t), "_DXGKARG_OPENALLOCATION.Flags", flags, 0xe0, 0x20, true, 0xa83ae0b97dd9088d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_OPENALLOCATION.SubresourceIndex", subresource_index, 0x100, 0x20, true, 0xec02e7b1601c1d4d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_OPENALLOCATION.SubresourceOffset", subresource_offset, 0x140, 0x40, true, 0xe4847cfb667100b9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_OPENALLOCATION.Pitch", pitch, 0x180, 0x20, true, 0x6b21ae0e20163da0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif