#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_AGP_INTERFACE.Size", size, 0x0, 0x10, true, 0xd9556772b327a2ff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_AGP_INTERFACE.Version", version, 0x10, 0x10, true, 0xfb66ebb1bb9ea55a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_PORT_AGP_INTERFACE.Context", context, 0x40, 0x40, true, 0x5ee5b44e86f786b4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_AGP_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x2616c530a6ff6f7a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_AGP_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xa72018d8b5bc4ea2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_reserve_physical_t ), "_VIDEO_PORT_AGP_INTERFACE.AgpReservePhysical", agp_reserve_physical, 0x100, 0x40, true, 0xa7d26400c05d73b3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_VIDEO_PORT_AGP_INTERFACE.AgpReleasePhysical", agp_release_physical, 0x140, 0x40, true, 0x7e1e7de3f6b99ac2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_commit_physical_t ), "_VIDEO_PORT_AGP_INTERFACE.AgpCommitPhysical", agp_commit_physical, 0x180, 0x40, true, 0x415897f95fed6925)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, uint32_t, uint32_t)>*), "_VIDEO_PORT_AGP_INTERFACE.AgpFreePhysical", agp_free_physical, 0x1c0, 0x40, true, 0x39f6a101deb6c323)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_reserve_virtual_t ), "_VIDEO_PORT_AGP_INTERFACE.AgpReserveVirtual", agp_reserve_virtual, 0x200, 0x40, true, 0xfb40a6449c8e7044)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_VIDEO_PORT_AGP_INTERFACE.AgpReleaseVirtual", agp_release_virtual, 0x240, 0x40, true, 0xb6f482327cd1ffba)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_commit_virtual_t ), "_VIDEO_PORT_AGP_INTERFACE.AgpCommitVirtual", agp_commit_virtual, 0x280, 0x40, true, 0x5140619d041d613c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, uint32_t, uint32_t)>*), "_VIDEO_PORT_AGP_INTERFACE.AgpFreeVirtual", agp_free_virtual, 0x2c0, 0x40, true, 0x45874c9322608bc6)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PORT_AGP_INTERFACE.AgpAllocationLimit", agp_allocation_limit, 0x300, 0x40, true, 0x620fe282caa4814e)
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
#endif