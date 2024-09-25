#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_LIBRARY_INFO.Size", size, 0x0, 0x20, true, 0x4dac459872c95ad4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_WDF_LIBRARY_INFO.LibraryCommission", library_commission, 0x40, 0x40, true, 0xd6fdb2dcaee610cb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_WDF_LIBRARY_INFO.LibraryDecommission", library_decommission, 0x80, 0x40, true, 0xa68953c83e04cb95)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnlibraryregisterclient_t ), "_WDF_LIBRARY_INFO.LibraryRegisterClient", library_register_client, 0xc0, 0x40, true, 0x3e4d642d38cadcd1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnlibraryunregisterclient_t ), "_WDF_LIBRARY_INFO.LibraryUnregisterClient", library_unregister_client, 0x100, 0x40, true, 0x87ebcfbfa36f386)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::version_t), "_WDF_LIBRARY_INFO.Version", version, 0x140, 0x60, true, 0x534afbdbe7b65f6c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif