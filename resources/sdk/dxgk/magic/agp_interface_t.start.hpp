#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_AGP_INTERFACE.Size", size, 0x0, 0x10, true, 0x15d12cc65b0a3951)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_AGP_INTERFACE.Version", version, 0x10, 0x10, true, 0x22db01205d03863b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_AGP_INTERFACE.Context", context, 0x40, 0x40, true, 0x62411ab07f5c9e39)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_AGP_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x18c4bd6ac400a047)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_AGP_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xc4ac6fd1a9bbc91d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkcb_agp_allocate_pool_t ), "_DXGK_AGP_INTERFACE.AgpAllocatePool", agp_allocate_pool, 0x100, 0x40, true, 0x467511e04310f1b5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_DXGK_AGP_INTERFACE.AgpFreePool", agp_free_pool, 0x140, 0x40, true, 0xf82e12aee7ae7edb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_DXGK_AGP_INTERFACE.AgpSetCommand", agp_set_command, 0x180, 0x40, true, 0xfdec3e2abe38642d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif