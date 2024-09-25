#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_COMMAND.CorrectableErrorReportingEnable", correctable_error_reporting_enable, 0x0, 0x1, true, 0xb685600c29124055, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_COMMAND.NonFatalErrorReportingEnable", non_fatal_error_reporting_enable, 0x1, 0x1, true, 0xefe4a38122fc2b8, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_COMMAND.FatalErrorReportingEnable", fatal_error_reporting_enable, 0x2, 0x1, true, 0x9b3006f59544ad73, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_ROOT_ERROR_COMMAND.AsULONG", as_ulong, 0x0, 0x20, true, 0x129b86e635f38035)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif