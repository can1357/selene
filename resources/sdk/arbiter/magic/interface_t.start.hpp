#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ARBITER_INTERFACE.Size", size, 0x0, 0x10, true, 0x4a59a5b6f664f8da)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ARBITER_INTERFACE.Version", version, 0x10, 0x10, true, 0x2e2c2dfc8361f901)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ARBITER_INTERFACE.Context", context, 0x40, 0x40, true, 0x71a6658b9a5d2e25)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_ARBITER_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xa0a5eef74358ffcd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_ARBITER_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xb915cadb34f26d6b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(parbiter_handler_t ), "_ARBITER_INTERFACE.ArbiterHandler", arbiter_handler, 0x100, 0x40, true, 0xf88e8f49e66a2372)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_INTERFACE.Flags", flags, 0x140, 0x20, true, 0x1dc012a2d9d388e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif