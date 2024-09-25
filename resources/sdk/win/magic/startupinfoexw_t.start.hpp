#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::startupinfow_t), "_STARTUPINFOEXW.StartupInfo", startup_info, 0x0, 0x40, true, 0x78efe5266fe3cd72)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::proc_thread_attribute_list_t*), "_STARTUPINFOEXW.lpAttributeList", lp_attribute_list, 0x340, 0x40, true, 0x803fcf374fe74c9d)
#else
#define _m00
#define _m01
#endif