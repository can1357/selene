#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_UMGL_KEY.LoggerId", logger_id, 0x0, 0x8, true, 0x9a5306e0d66dd07a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_UMGL_KEY.Flags", flags, 0x8, 0x8, true, 0x545ffa23822826ab)
#else
#define _m00
#define _m01
#endif