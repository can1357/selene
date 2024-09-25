#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_TRIM_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x8e47870de3f12a30)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_TRIM_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xe64e1236c73f31dc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_TRIM_DESCRIPTOR.TrimEnabled", trim_enabled, 0x40, 0x8, true, 0x267b98987113bff6)
#else
#define _m00
#define _m01
#define _m02
#endif