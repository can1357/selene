#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXT.hDevice", h_device, 0x0, 0x20, true, 0xc1be624665f94544)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXT.NodeOrdinal", node_ordinal, 0x20, 0x20, true, 0xf1c192fc83f7f97a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXT.EngineAffinity", engine_affinity, 0x40, 0x20, true, 0x5ef8176dfb6401c1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::createcontextflags_t), "_D3DKMT_CREATECONTEXT.Flags", flags, 0x60, 0x20, true, 0xc8e558e07277cfb2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATECONTEXT.pPrivateDriverData", p_private_driver_data, 0x80, 0x40, true, 0x2b2646cd153fe2a7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXT.PrivateDriverDataSize", private_driver_data_size, 0xc0, 0x20, true, 0xf54c22ca20d2702a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::clienthint_t), "_D3DKMT_CREATECONTEXT.ClientHint", client_hint, 0xe0, 0x20, true, 0x9ff96d10028618be)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXT.hContext", h_context, 0x100, 0x20, true, 0xc4e5f7317390acd2)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATECONTEXT.pCommandBuffer", p_command_buffer, 0x140, 0x40, true, 0x495fe99595c383f9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXT.CommandBufferSize", command_buffer_size, 0x180, 0x20, true, 0xa857b3acbdab77fd)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::allocationlist_t*), "_D3DKMT_CREATECONTEXT.pAllocationList", p_allocation_list, 0x1c0, 0x40, true, 0x3b9831d08a5a0f4f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXT.AllocationListSize", allocation_list_size, 0x200, 0x20, true, 0xa5d0e4b2e5c0ccf3)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::patchlocationlist_t*), "_D3DKMT_CREATECONTEXT.pPatchLocationList", p_patch_location_list, 0x240, 0x40, true, 0x11b8a37ab193330b)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXT.PatchLocationListSize", patch_location_list_size, 0x280, 0x20, true, 0xe95b7fbc9523a794)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_CREATECONTEXT.CommandBuffer", command_buffer, 0x2c0, 0x40, true, 0x20c980537892294)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif