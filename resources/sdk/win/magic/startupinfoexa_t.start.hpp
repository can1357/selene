#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::startupinfoa_t), "_STARTUPINFOEXA.StartupInfo", startup_info, 0x0, 0x40, true, 0xf5211e9c277cc10f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::proc_thread_attribute_list_t*), "_STARTUPINFOEXA.lpAttributeList", lp_attribute_list, 0x340, 0x40, true, 0xdb01014adfdc6cb5)
#else
#define _m00
#define _m01
#endif