#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "POWERBROADCAST_SETTING.PowerSetting", power_setting, 0x0, 0x80, true, 0x453f75879ddbffc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "POWERBROADCAST_SETTING.DataLength", data_length, 0x80, 0x20, true, 0x371e5a756bcedc3c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "POWERBROADCAST_SETTING.Data", data, 0xa0, 0x8, true, 0x8e3b7772d2e29ff)
#else
#define _m00
#define _m01
#define _m02
#endif