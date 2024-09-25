#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_WMI_REGCONTROL_ARGS.DeviceObject", device_object, 0x0, 0x40, true, 0x9ce270a93f6b78e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_WMI_REGCONTROL_ARGS.Action", action, 0x40, 0x20, true, 0x577aeda2064a414a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_WMI_REGCONTROL_ARGS.result", result, 0x60, 0x20, true, 0x734c4e9a07ece3c4)
#else
#define _m00
#define _m01
#define _m02
#endif