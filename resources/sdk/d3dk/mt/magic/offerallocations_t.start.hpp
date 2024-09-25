#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OFFERALLOCATIONS.hDevice", h_device, 0x0, 0x20, true, 0xd7a300682490a9af)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_OFFERALLOCATIONS.pResources", p_resources, 0x40, 0x40, true, 0xd126799f5b2a6f7d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_OFFERALLOCATIONS.HandleList", handle_list, 0x80, 0x40, true, 0x894e604f337c5475)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OFFERALLOCATIONS.NumAllocations", num_allocations, 0xc0, 0x20, true, 0x1c737031acb8dfbd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::offer_priority_t), "_D3DKMT_OFFERALLOCATIONS.Priority", priority, 0xe0, 0x20, true, 0x58c4fcf22edce457)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::offer_flags_t), "_D3DKMT_OFFERALLOCATIONS.Flags", flags, 0x100, 0x20, true, 0xb9096248b00bc67c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif