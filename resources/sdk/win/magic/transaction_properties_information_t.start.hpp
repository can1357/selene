#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_PROPERTIES_INFORMATION.IsolationLevel", isolation_level, 0x0, 0x20, true, 0xc92430567b0d82d9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_PROPERTIES_INFORMATION.IsolationFlags", isolation_flags, 0x20, 0x20, true, 0xed10c15c9172b22b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TRANSACTION_PROPERTIES_INFORMATION.Timeout", timeout, 0x40, 0x40, true, 0x589e0ff89ce35392)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_PROPERTIES_INFORMATION.Outcome", outcome, 0x80, 0x20, true, 0xa5d9728397763af7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_PROPERTIES_INFORMATION.DescriptionLength", description_length, 0xa0, 0x20, true, 0x679fdf242ea71a57)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_TRANSACTION_PROPERTIES_INFORMATION.Description", description, 0xc0, 0x10, true, 0xdd8bf9c1fcdffefc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif