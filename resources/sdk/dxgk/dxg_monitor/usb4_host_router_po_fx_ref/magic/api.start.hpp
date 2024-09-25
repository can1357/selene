#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x245a0608bfd4246c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x3768398a7f1cebc0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnInitialized@Usb4HostRouterPoFxRef@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x753d5056d3ad2237)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0xc7dbe7ba219dfd77)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif