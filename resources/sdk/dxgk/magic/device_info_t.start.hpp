#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_DEVICE_INFO.MiniportDeviceContext", miniport_device_context, 0x0, 0x40, true, 0x47427531cccdbfde)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DXGK_DEVICE_INFO.PhysicalDeviceObject", physical_device_object, 0x40, 0x40, true, 0x6fe57312bda05968)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_DXGK_DEVICE_INFO.DeviceRegistryPath", device_registry_path, 0x80, 0x80, true, 0x7ca0fab006afdd22)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_DXGK_DEVICE_INFO.TranslatedResourceList", translated_resource_list, 0x100, 0x40, true, 0xefeba908b9fe808)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_DEVICE_INFO.SystemMemorySize", system_memory_size, 0x140, 0x40, true, 0x6d9aa52d20b49fcc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_DEVICE_INFO.HighestPhysicalAddress", highest_physical_address, 0x180, 0x40, true, 0xead67c66c26d5f2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_DEVICE_INFO.AgpApertureBase", agp_aperture_base, 0x1c0, 0x40, true, 0x89aeb324e31d8c02)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_DEVICE_INFO.AgpApertureSize", agp_aperture_size, 0x200, 0x40, true, 0xffb984f9accd317)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_docking_state_t), "_DXGK_DEVICE_INFO.DockingState", docking_state, 0x240, 0x20, true, 0x101a3e85f09461c7)
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
#endif