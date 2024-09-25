#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_AGP_INTERFACE_2.Size", size, 0x0, 0x10, true, 0x8c5a75898f09d62f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_AGP_INTERFACE_2.Version", version, 0x10, 0x10, true, 0x4b3eab2f8e21a611)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_PORT_AGP_INTERFACE_2.Context", context, 0x40, 0x40, true, 0x86682e7105e41772)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_AGP_INTERFACE_2.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xd3d1170db40b1ff)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_AGP_INTERFACE_2.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x33ee3e5e0ff550f9)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_reserve_physical_t ), "_VIDEO_PORT_AGP_INTERFACE_2.AgpReservePhysical", agp_reserve_physical, 0x100, 0x40, true, 0x30d8ae5f74ed3148)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_VIDEO_PORT_AGP_INTERFACE_2.AgpReleasePhysical", agp_release_physical, 0x140, 0x40, true, 0xe211e4ce430c79c7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_commit_physical_t ), "_VIDEO_PORT_AGP_INTERFACE_2.AgpCommitPhysical", agp_commit_physical, 0x180, 0x40, true, 0xb8b7f051641a3cbd)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, uint32_t, uint32_t)>*), "_VIDEO_PORT_AGP_INTERFACE_2.AgpFreePhysical", agp_free_physical, 0x1c0, 0x40, true, 0x4186259c1c0ed6a2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_reserve_virtual_t ), "_VIDEO_PORT_AGP_INTERFACE_2.AgpReserveVirtual", agp_reserve_virtual, 0x200, 0x40, true, 0xb65ccbf538552f2c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_VIDEO_PORT_AGP_INTERFACE_2.AgpReleaseVirtual", agp_release_virtual, 0x240, 0x40, true, 0xd318a909ca381ac2)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_commit_virtual_t ), "_VIDEO_PORT_AGP_INTERFACE_2.AgpCommitVirtual", agp_commit_virtual, 0x280, 0x40, true, 0x8822c4bc9b02cc12)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, uint32_t, uint32_t)>*), "_VIDEO_PORT_AGP_INTERFACE_2.AgpFreeVirtual", agp_free_virtual, 0x2c0, 0x40, true, 0xc4288fac3b62995b)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PORT_AGP_INTERFACE_2.AgpAllocationLimit", agp_allocation_limit, 0x300, 0x40, true, 0x2f0d68e8f3d3e0ff)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t)>*), "_VIDEO_PORT_AGP_INTERFACE_2.AgpSetRate", agp_set_rate, 0x340, 0x40, true, 0x9d4062f427f72e14)
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