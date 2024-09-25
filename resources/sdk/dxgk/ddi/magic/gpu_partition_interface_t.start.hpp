#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKDDI_GPU_PARTITION_INTERFACE.Size", size, 0x0, 0x10, true, 0x3e9691f1cfeebb98)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKDDI_GPU_PARTITION_INTERFACE.Version", version, 0x10, 0x10, true, 0x6fdea4b7c07120c7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKDDI_GPU_PARTITION_INTERFACE.Context", context, 0x40, 0x40, true, 0x13de987d70043848)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGKDDI_GPU_PARTITION_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x75aac27ee76c4426)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGKDDI_GPU_PARTITION_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xb4f96145b7f893af)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getgpupartitioninfo_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiGetGpuPartitionInfo", dxgk_ddi_get_gpu_partition_info, 0x100, 0x40, true, 0xec38401902a88f65)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setgpupartitioncount_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiSetGpuPartitionCount", dxgk_ddi_set_gpu_partition_count, 0x140, 0x40, true, 0x8f83be94f6603b60)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getgpuengines_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiGetGpuEngines", dxgk_ddi_get_gpu_engines, 0x180, 0x40, true, 0x698fc92f287e8e35)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getvirtualgpuprofile_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiGetVirtualGpuProfile", dxgk_ddi_get_virtual_gpu_profile, 0x1c0, 0x40, true, 0x73d667ab192c845a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_createvirtualgpu_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiCreateVirtualGpu", dxgk_ddi_create_virtual_gpu, 0x200, 0x40, true, 0x71d5f893d328ae3e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_getvirtualgpuinfo_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiGetVirtualGpuInfo", dxgk_ddi_get_virtual_gpu_info, 0x240, 0x40, true, 0xd7dee87201dc1122)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvirtualgpuresources_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiSetVirtualGpuResources", dxgk_ddi_set_virtual_gpu_resources, 0x280, 0x40, true, 0x1bb9954f8011e0b0)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_destroyvirtualgpu_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiDestroyVirtualGpu", dxgk_ddi_destroy_virtual_gpu, 0x2c0, 0x40, true, 0x72bdfb4af69fcad9)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_suspendvirtualgpu_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiSuspendVirtualGpu", dxgk_ddi_suspend_virtual_gpu, 0x300, 0x40, true, 0x86ca27f086982125)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_resumevirtualgpu_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiResumeVirtualGpu", dxgk_ddi_resume_virtual_gpu, 0x340, 0x40, true, 0x4e203788da96b0f4)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_virtualgpudriverescape_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiVirtualGpuDriverEscape", dxgk_ddi_virtual_gpu_driver_escape, 0x380, 0x40, true, 0xd492ddabba9be50f)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_setvirtualgpuvmbus_t ), "_DXGKDDI_GPU_PARTITION_INTERFACE.DxgkDdiSetVirtualGpuVmBus", dxgk_ddi_set_virtual_gpu_vm_bus, 0x3c0, 0x40, true, 0x637bb1c805925ea5)
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
#endif