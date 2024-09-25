#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_MIRACAST_INTERFACE.Size", size, 0x0, 0x10, true, 0x36d7166b35cc98d8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_MIRACAST_INTERFACE.Version", version, 0x10, 0x10, true, 0xdb0aa2670e74b004)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_MIRACAST_INTERFACE.Context", context, 0x40, 0x40, true, 0x247762816002b245)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_MIRACAST_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x364eee7107c222b3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_MIRACAST_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x2af2f209d86fe18)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_miracast_query_caps_t ), "_DXGK_MIRACAST_INTERFACE.DxgkDdiMiracastQueryCaps", dxgk_ddi_miracast_query_caps, 0x100, 0x40, true, 0x56d91eee3dbc507c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_miracast_create_context_t ), "_DXGK_MIRACAST_INTERFACE.DxgkDdiMiracastCreateContext", dxgk_ddi_miracast_create_context, 0x140, 0x40, true, 0xcad24fce36681830)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_miracast_handle_io_control_t ), "_DXGK_MIRACAST_INTERFACE.DxgkDdiMiracastIoControl", dxgk_ddi_miracast_io_control, 0x180, 0x40, true, 0xa592cbe3c33a5f35)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_DXGK_MIRACAST_INTERFACE.DxgkDdiMiracastDestroyContext", dxgk_ddi_miracast_destroy_context, 0x1c0, 0x40, true, 0xf30b6a758ac70db6)
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