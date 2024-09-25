#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NPEM_CONTROL_INTERFACE.Size", size, 0x0, 0x10, true, 0x2214930fb47d20ec)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NPEM_CONTROL_INTERFACE.Version", version, 0x10, 0x10, true, 0x419f379d03950fb3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_NPEM_CONTROL_INTERFACE.Context", context, 0x40, 0x40, true, 0x9c30b5884c964bfe)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NPEM_CONTROL_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x36b1c930858a4aef)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NPEM_CONTROL_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x70c2336c7312ffc1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "_NPEM_CONTROL_INTERFACE.SetNpemSupportState", set_npem_support_state, 0x100, 0x40, true, 0x6218ef038d63f965)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pnpem_control_query_standard_capabilities_t ), "_NPEM_CONTROL_INTERFACE.QueryStandardCapabilities", query_standard_capabilities, 0x140, 0x40, true, 0x4eafbc6dbd29a620)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pnpem_control_set_standard_control_t ), "_NPEM_CONTROL_INTERFACE.SetStandardControl", set_standard_control, 0x180, 0x40, true, 0xf1c5a04c001dbe65)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "_NPEM_CONTROL_INTERFACE.QueryNpemControl", query_npem_control, 0x1c0, 0x40, true, 0x11c147e54ec09690)
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