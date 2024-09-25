#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE.Size", size, 0x0, 0x10, true, 0x47863cea8f154bdc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE.Version", version, 0x10, 0x10, true, 0xf5e7455af355fe5e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE.Context", context, 0x40, 0x40, true, 0x67fa684413ef6836)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x796f830fa27294c5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x874ddae300c29919)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_getdisplaystatenonintrusive_t ), "_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE.DxgkDdiGetDisplayStateNonIntrusive", dxgk_ddi_get_display_state_non_intrusive, 0x100, 0x40, true, 0x2c732f061e67e7fd)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_getdisplaystateintrusive_t ), "_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE.DxgkDdiGetDisplayStateIntrusive", dxgk_ddi_get_display_state_intrusive, 0x140, 0x40, true, 0x47a1f9f5a176d23c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif