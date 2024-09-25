#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_BUILDPAGINGBUFFER_NOTIFYRESIDENCY.hAllocation", h_allocation, 0x0, 0x40, true, 0x7e657f0ab496b6e0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dgpu_physical_address_t), "_DXGK_BUILDPAGINGBUFFER_NOTIFYRESIDENCY.PhysicalAddress", physical_address, 0x40, 0x80, true, 0xa936a4ff1e688e67)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_BUILDPAGINGBUFFER_NOTIFYRESIDENCY.Resident", resident, 0xc0, 0x1, true, 0x71f04f45dcfdc549, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif