#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 51>), "_DXGK_GENERIC_DESCRIPTOR.HardwareId", hardware_id, 0x0, 0x30, true, 0x849561212e1c0e8d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 51>), "_DXGK_GENERIC_DESCRIPTOR.InstanceId", instance_id, 0x330, 0x30, true, 0xbbb288fe10d3e79)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 51>), "_DXGK_GENERIC_DESCRIPTOR.CompatibleId", compatible_id, 0x660, 0x30, true, 0xabfb3ee26c527ad9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 51>), "_DXGK_GENERIC_DESCRIPTOR.DeviceText", device_text, 0x990, 0x30, true, 0xf1374ab632941b95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif