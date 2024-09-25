#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPORT_ZONES.OperationCode", operation_code, 0x0, 0x8, true, 0x25ba3f4a7c5e1264)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_REPORT_ZONES.ServiceAction", service_action, 0x8, 0x5, true, 0x41755c99131dc64, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_REPORT_ZONES.ZoneStartLBA", zone_start_lba, 0x10, 0x40, true, 0x9c7282e4ebfa4a88)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_REPORT_ZONES.AllocationLength", allocation_length, 0x50, 0x20, true, 0x5ce5261d71651582)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_REPORT_ZONES.ReportingOptions", reporting_options, 0x70, 0x6, true, 0xb7205c2a6d657547, 6, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_REPORT_ZONES.Partial", partial, 0x77, 0x1, true, 0x76d9ec7c06b132f0, 1, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REPORT_ZONES.Control", control, 0x78, 0x8, true, 0xa7d589231c5df9e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif