#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_WIN32K_CALLBACKS.PhysDisp", phys_disp, 0x0, 0x40, true, 0xc5405f9c75207846)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_WIN32K_CALLBACKS.Callout", callout, 0x40, 0x40, true, 0x6a0cf0953190bdcb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_WIN32K_CALLBACKS.bACPI", b_acpi, 0x80, 0x20, true, 0xaae45241a17ddc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_WIN32K_CALLBACKS.pPhysDeviceObject", p_phys_device_object, 0xc0, 0x40, true, 0x4799e843d22d6ee9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_WIN32K_CALLBACKS.DualviewFlags", dualview_flags, 0x100, 0x20, true, 0xc1c104a6c96417aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif