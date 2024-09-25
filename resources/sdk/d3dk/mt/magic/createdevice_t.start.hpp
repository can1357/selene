#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEDEVICE.hAdapter", h_adapter, 0x0, 0x20, true, 0x83c146b5b0379116)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEDEVICE.pAdapter", p_adapter, 0x0, 0x40, true, 0xfd73c0f360093649)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::createdeviceflags_t), "_D3DKMT_CREATEDEVICE.Flags", flags, 0x40, 0x20, true, 0x942a776d90d9bfd0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEDEVICE.hDevice", h_device, 0x60, 0x20, true, 0x8043ae8b1ffef02e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEDEVICE.pCommandBuffer", p_command_buffer, 0x80, 0x40, true, 0xc67634c6a53f869f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEDEVICE.CommandBufferSize", command_buffer_size, 0xc0, 0x20, true, 0xd3cb253be10291a5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::allocationlist_t*), "_D3DKMT_CREATEDEVICE.pAllocationList", p_allocation_list, 0x100, 0x40, true, 0xc46d3d230761c2c7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEDEVICE.AllocationListSize", allocation_list_size, 0x140, 0x20, true, 0x5b45fc1bf664a167)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::patchlocationlist_t*), "_D3DKMT_CREATEDEVICE.pPatchLocationList", p_patch_location_list, 0x180, 0x40, true, 0x6defb6a4173ab268)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEDEVICE.PatchLocationListSize", patch_location_list_size, 0x1c0, 0x20, true, 0xe3d7eefb510859ff)
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
#endif