#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_ALARM_CALLBACK_ACE.Header", header, 0x0, 0x20, true, 0x822e6c10838dc2dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_CALLBACK_ACE.Mask", mask, 0x20, 0x20, true, 0x193eac7481e3b9de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ALARM_CALLBACK_ACE.SidStart", sid_start, 0x40, 0x20, true, 0x9e2b730b7200b500)
#else
#define _m00
#define _m01
#define _m02
#endif