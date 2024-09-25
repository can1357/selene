#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_USER_PWD_CHANGE_FAILURE_INFORMATION.ExtendedFailureReason", extended_failure_reason, 0x0, 0x20, true, 0x6a71c1234f666c91)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_USER_PWD_CHANGE_FAILURE_INFORMATION.FilterModuleName", filter_module_name, 0x40, 0x80, true, 0x32da5dfd8dac582a)
#else
#define _m00
#define _m01
#endif