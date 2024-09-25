#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_SPB_INTERFACE.Size", size, 0x0, 0x10, true, 0xc7bc5fa6ab1aba7d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_SPB_INTERFACE.Version", version, 0x10, 0x10, true, 0xb9cddf44dc635969)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_SPB_INTERFACE.Context", context, 0x40, 0x40, true, 0xc12df0f2b43d5468)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_SPB_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xe19d0f5edc2accbd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_SPB_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xcb2ae81d1c7234cd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t, nt::unicode_view*, uint32_t, uint32_t, uint32_t, void**)>*), "_DXGK_SPB_INTERFACE.OpenSpbResource", open_spb_resource, 0x100, 0x40, true, 0x8a731a1606a9dfb6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_DXGK_SPB_INTERFACE.CloseSpbResource", close_spb_resource, 0x140, 0x40, true, 0x22b7a0b924b3b46a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, void*, int64_t*, void*, struct io::status_block_t*)>*), "_DXGK_SPB_INTERFACE.ReadSpbResource", read_spb_resource, 0x180, 0x40, true, 0xe2895d62891c1b02)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, void*, int64_t*, void*, struct io::status_block_t*)>*), "_DXGK_SPB_INTERFACE.WriteSpbResource", write_spb_resource, 0x1c0, 0x40, true, 0xde4d459082749142)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, uint32_t, void*, uint32_t, void*, void*, struct io::status_block_t*)>*), "_DXGK_SPB_INTERFACE.SpbResourceIoControl", spb_resource_io_control, 0x200, 0x40, true, 0x1753ed911b4c0b22)
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