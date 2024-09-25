#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.hDevice", h_device, 0x0, 0x20, true, 0x449ff3695e330562)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.hContext", h_context, 0x0, 0x20, true, 0x7ab7af84f7c37279)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.CommandOffset", command_offset, 0x20, 0x20, true, 0xf45eca10ee6ff7ea)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.CommandLength", command_length, 0x40, 0x20, true, 0xc992c11b00c9cad3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.AllocationCount", allocation_count, 0x60, 0x20, true, 0x13abc4100febe53)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.PatchLocationCount", patch_location_count, 0x80, 0x20, true, 0xea755310d268b801)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_RENDER.pNewCommandBuffer", p_new_command_buffer, 0xc0, 0x40, true, 0x7bc19bfbc3319839)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.NewCommandBufferSize", new_command_buffer_size, 0x100, 0x20, true, 0xaeb0e8aadc6c6c5f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::allocationlist_t*), "_D3DKMT_RENDER.pNewAllocationList", p_new_allocation_list, 0x140, 0x40, true, 0xb15eaa86ef8a1d49)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.NewAllocationListSize", new_allocation_list_size, 0x180, 0x20, true, 0xb9c6e054cdff9d26)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::patchlocationlist_t*), "_D3DKMT_RENDER.pNewPatchLocationList", p_new_patch_location_list, 0x1c0, 0x40, true, 0xb93424242a0e4c5f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.NewPatchLocationListSize", new_patch_location_list_size, 0x200, 0x20, true, 0x98f8c7b5d806548c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::renderflags_t), "_D3DKMT_RENDER.Flags", flags, 0x220, 0x20, true, 0xaa1ededffd452e28)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_RENDER.PresentHistoryToken", present_history_token, 0x240, 0x40, true, 0x8b6128428b883237)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.BroadcastContextCount", broadcast_context_count, 0x280, 0x20, true, 0x99b622981252cfdd)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_D3DKMT_RENDER.BroadcastContext", broadcast_context, 0x2a0, 0x0, true, 0x75372b79f43333be)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.QueuedBufferCount", queued_buffer_count, 0xaa0, 0x20, true, 0xe591be8d2d8a196d)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_RENDER.NewCommandBuffer", new_command_buffer, 0xac0, 0x40, true, 0x1dcd69413db62584)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_RENDER.pPrivateDriverData", p_private_driver_data, 0xb00, 0x40, true, 0xdd7836a68a1cb3ad)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RENDER.PrivateDriverDataSize", private_driver_data_size, 0xb40, 0x20, true, 0x86e969d0d4bfc27e)
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
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif