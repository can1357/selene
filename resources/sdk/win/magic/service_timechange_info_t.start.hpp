#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SERVICE_TIMECHANGE_INFO.liNewTime", li_new_time, 0x0, 0x40, true, 0xd7559497cc652e5d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SERVICE_TIMECHANGE_INFO.liOldTime", li_old_time, 0x40, 0x40, true, 0xe6e6ad44617fdd3e)
#else
#define _m00
#define _m01
#endif