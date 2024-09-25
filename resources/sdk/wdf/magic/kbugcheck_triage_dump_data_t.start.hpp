#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::ktriage_dump_data_array_t*), "_KBUGCHECK_TRIAGE_DUMP_DATA.DataArray", data_array, 0x0, 0x40, true, 0x7af20869fa5532ff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_TRIAGE_DUMP_DATA.Flags", flags, 0x40, 0x20, true, 0x2ab599dfd65f6c7c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_TRIAGE_DUMP_DATA.MaxVirtMemSize", max_virt_mem_size, 0x60, 0x20, true, 0xea01002055c62f69)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_TRIAGE_DUMP_DATA.BugCheckCode", bug_check_code, 0x80, 0x20, true, 0xdf0936e6282ba443)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_TRIAGE_DUMP_DATA.BugCheckParameter1", bug_check_parameter1, 0xc0, 0x40, true, 0x1de7edeb7ee01cdf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_TRIAGE_DUMP_DATA.BugCheckParameter2", bug_check_parameter2, 0x100, 0x40, true, 0xf5dec553025c2797)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_TRIAGE_DUMP_DATA.BugCheckParameter3", bug_check_parameter3, 0x140, 0x40, true, 0x45b6cc14f165d7e2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_TRIAGE_DUMP_DATA.BugCheckParameter4", bug_check_parameter4, 0x180, 0x40, true, 0x1aec01a351698c07)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif