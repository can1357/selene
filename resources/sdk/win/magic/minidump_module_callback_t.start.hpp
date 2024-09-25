#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_MINIDUMP_MODULE_CALLBACK.FullPath", full_path, 0x0, 0x40, true, 0xcf96cd742f0589a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_MODULE_CALLBACK.BaseOfImage", base_of_image, 0x40, 0x40, true, 0xecc68c5639cd3b6a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MODULE_CALLBACK.SizeOfImage", size_of_image, 0x80, 0x20, true, 0x3c072a108fc001b6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MODULE_CALLBACK.CheckSum", check_sum, 0xa0, 0x20, true, 0x3ab6c1ef1f5c3069)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MODULE_CALLBACK.TimeDateStamp", time_date_stamp, 0xc0, 0x20, true, 0xfb8cb77f76adaac6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::vs_fixedfileinfo_t), "_MINIDUMP_MODULE_CALLBACK.VersionInfo", version_info, 0xe0, 0xa0, true, 0x44df7a1a02624814)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_MODULE_CALLBACK.CvRecord", cv_record, 0x280, 0x40, true, 0x381d67e729c81438)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MODULE_CALLBACK.SizeOfCvRecord", size_of_cv_record, 0x2c0, 0x20, true, 0x894003c59c0b64d6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_MODULE_CALLBACK.MiscRecord", misc_record, 0x2e0, 0x40, true, 0x7c3ecdde34327c41)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MODULE_CALLBACK.SizeOfMiscRecord", size_of_misc_record, 0x320, 0x20, true, 0xb56b2a262272105f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif