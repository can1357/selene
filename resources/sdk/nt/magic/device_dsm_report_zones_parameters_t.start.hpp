#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_REPORT_ZONES_PARAMETERS.Size", size, 0x0, 0x20, true, 0xfbc9c2e5f038226d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DSM_REPORT_ZONES_PARAMETERS.ReportOption", report_option, 0x20, 0x8, true, 0x97753e2b442bc192)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DSM_REPORT_ZONES_PARAMETERS.Partial", partial, 0x28, 0x8, true, 0x2043bc2f50a08761)
#else
#define _m00
#define _m01
#define _m02
#endif