#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KBUGCHECK_REMOVE_PAGES.Context", context, 0x0, 0x40, true, 0xfbabe0fb8bae23ab)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_REMOVE_PAGES.Flags", flags, 0x40, 0x20, true, 0x8afdb9a7b688cb24)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_REMOVE_PAGES.BugCheckCode", bug_check_code, 0x60, 0x20, true, 0x4d97b774410e649f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_REMOVE_PAGES.Address", address, 0x80, 0x40, true, 0x9d937eaa2af4e521)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_REMOVE_PAGES.Count", count, 0xc0, 0x40, true, 0x2ee3b3008f166a50)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif