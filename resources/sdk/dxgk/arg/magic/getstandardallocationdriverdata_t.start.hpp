#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::standardallocation_type_t), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.StandardAllocationType", standard_allocation_type, 0x0, 0x20, true, 0x9b2f1105f83349f6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::sharedprimarysurfacedata_t*), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.pCreateSharedPrimarySurfaceData", p_create_shared_primary_surface_data, 0x40, 0x40, true, 0x1df5aa090f92a88a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::shadowsurfacedata_t*), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.pCreateShadowSurfaceData", p_create_shadow_surface_data, 0x40, 0x40, true, 0x6a90149f9cd7f33c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::stagingsurfacedata_t*), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.pCreateStagingSurfaceData", p_create_staging_surface_data, 0x40, 0x40, true, 0x878a5f3aae7e02e5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::gdisurfacedata_t*), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.pCreateGdiSurfaceData", p_create_gdi_surface_data, 0x40, 0x40, true, 0x2d92f880d8622064)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::virtualgpusurfacedata_t*), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.pCreateVirtualGpuSurfaceData", p_create_virtual_gpu_surface_data, 0x40, 0x40, true, 0x5ae8927e0fbe4328)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.pAllocationPrivateDriverData", p_allocation_private_driver_data, 0x80, 0x40, true, 0xf2773e9609298a38)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.AllocationPrivateDriverDataSize", allocation_private_driver_data_size, 0xc0, 0x20, true, 0x8d5971d343c596de)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.pResourcePrivateDriverData", p_resource_private_driver_data, 0x100, 0x40, true, 0xd27ec62d7624e427)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.ResourcePrivateDriverDataSize", resource_private_driver_data_size, 0x140, 0x20, true, 0x5e8ab5f8a9add22a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA.PhysicalAdapterIndex", physical_adapter_index, 0x160, 0x20, true, 0x4a409e1a7100fc30)
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
#endif