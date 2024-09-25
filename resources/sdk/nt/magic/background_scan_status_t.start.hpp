#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_BACKGROUND_SCAN_STATUS.PowerOnMinutes", power_on_minutes, 0x0, 0x20, true, 0x1ba7220aff5db6f2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BACKGROUND_SCAN_STATUS.ScanStatus", scan_status, 0x28, 0x8, true, 0x8e595bf0120bfc2c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_BACKGROUND_SCAN_STATUS.ScansPerformed", scans_performed, 0x30, 0x10, true, 0xd56d0572a36c0194)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_BACKGROUND_SCAN_STATUS.ScanProgress", scan_progress, 0x40, 0x10, true, 0xb8f57ef002298f10)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_BACKGROUND_SCAN_STATUS.MediumScansPerformed", medium_scans_performed, 0x50, 0x10, true, 0xba198f942569523c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif