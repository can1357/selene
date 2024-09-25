#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CRASHDUMP_FUNCTIONS_INTERFACE.Size", size, 0x0, 0x10, true, 0x22658c420fcdd65f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CRASHDUMP_FUNCTIONS_INTERFACE.Version", version, 0x10, 0x10, true, 0x3e42c775cf1bf5e3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CRASHDUMP_FUNCTIONS_INTERFACE.Context", context, 0x40, 0x40, true, 0x81c2e1a06eb17b8c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CRASHDUMP_FUNCTIONS_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x14754645141905cf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CRASHDUMP_FUNCTIONS_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x386c1efb72c00ed4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_CRASHDUMP_FUNCTIONS_INTERFACE.PowerOn", power_on, 0x100, 0x40, true, 0x2df2920e8cbafc9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif