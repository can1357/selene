#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_INTERFACE.Size", size, 0x0, 0x10, true, 0x2d842cade9d25b4f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_INTERFACE.Version", version, 0x10, 0x10, true, 0x978e65a18f8030a9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_INTERFACE.Context", context, 0x40, 0x40, true, 0x4400652c28b2ec93)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x74bc4cbc9ca1a3d3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xcab0771eef0d22d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif