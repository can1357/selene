#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PHYSICALADAPTERFLAGS.IoMmuSupported", io_mmu_supported, 0x0, 0x1, true, 0xbf439a7056525c7d, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PHYSICALADAPTERFLAGS.GpuMmuSupported", gpu_mmu_supported, 0x1, 0x1, true, 0xfd1f8161010388eb, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PHYSICALADAPTERFLAGS.MovePagingSupported", move_paging_supported, 0x2, 0x1, true, 0xd9e8e392a430798a, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PHYSICALADAPTERFLAGS.VPRPagingContextRequired", vpr_paging_context_required, 0x3, 0x1, true, 0xb26e8deb0f316a0a, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PHYSICALADAPTERFLAGS.AllowHardwareProtectedNoVpr", allow_hardware_protected_no_vpr, 0x4, 0x1, true, 0x679e2ca5f5ad349c, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PHYSICALADAPTERFLAGS.VirtualCopyEngineSupported", virtual_copy_engine_supported, 0x5, 0x1, true, 0x7c6a0f5760da6e4c, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PHYSICALADAPTERFLAGS.Value", value, 0x0, 0x20, true, 0xa5167749b5141523)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif