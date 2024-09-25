#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KBUGCHECK_ADD_PAGES.Context", context, 0x0, 0x40, true, 0xc321cc165955882a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_ADD_PAGES.Flags", flags, 0x40, 0x20, true, 0x6ccda0b1aa900bef)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_ADD_PAGES.BugCheckCode", bug_check_code, 0x60, 0x20, true, 0xa82aa59004493ded)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_ADD_PAGES.Address", address, 0x80, 0x40, true, 0x48a2e64ad8477eaf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_ADD_PAGES.Count", count, 0xc0, 0x40, true, 0x32fcfe272bed7171)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif