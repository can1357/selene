#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_reserve_physical_t ), "_VIDEO_PORT_AGP_SERVICES.AgpReservePhysical", agp_reserve_physical, 0x0, 0x40, true, 0x5acec8959fbfa5d8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_VIDEO_PORT_AGP_SERVICES.AgpReleasePhysical", agp_release_physical, 0x40, 0x40, true, 0xfa6860363f10e1d6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_commit_physical_t ), "_VIDEO_PORT_AGP_SERVICES.AgpCommitPhysical", agp_commit_physical, 0x80, 0x40, true, 0xb8c00e7abf53932)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, uint32_t, uint32_t)>*), "_VIDEO_PORT_AGP_SERVICES.AgpFreePhysical", agp_free_physical, 0xc0, 0x40, true, 0xcd78290db26ff008)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_reserve_virtual_t ), "_VIDEO_PORT_AGP_SERVICES.AgpReserveVirtual", agp_reserve_virtual, 0x100, 0x40, true, 0xf32a64ad599c74b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_VIDEO_PORT_AGP_SERVICES.AgpReleaseVirtual", agp_release_virtual, 0x140, 0x40, true, 0xcf1cf0f5ccfed452)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pagp_commit_virtual_t ), "_VIDEO_PORT_AGP_SERVICES.AgpCommitVirtual", agp_commit_virtual, 0x180, 0x40, true, 0x56066f3e901dc166)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, uint32_t, uint32_t)>*), "_VIDEO_PORT_AGP_SERVICES.AgpFreeVirtual", agp_free_virtual, 0x1c0, 0x40, true, 0x9de05e07bfc7a205)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIDEO_PORT_AGP_SERVICES.AllocationLimit", allocation_limit, 0x200, 0x40, true, 0x12ee9133aa8b136e)
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