#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE.Version", version, 0x0, 0x20, true, 0x2926e2556de5feae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE.Size", size, 0x20, 0x20, true, 0x4016eaf0cfcbb79d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE.ComponentCount", component_count, 0x40, 0x20, true, 0x632bbf08980d1317)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE.Flags", flags, 0x60, 0x20, true, 0xae7e404132a86ccd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::stor_pofx_component_t, 1>), "_STOR_POFX_DEVICE.Components", components, 0x80, 0x0, true, 0x4cd11aa9bf4c7495)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif