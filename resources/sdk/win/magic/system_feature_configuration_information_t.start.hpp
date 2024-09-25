#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FEATURE_CONFIGURATION_INFORMATION.ChangeStamp", change_stamp, 0x0, 0x40, true, 0x4053f451e147a4e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::feature_configuration_t), "_SYSTEM_FEATURE_CONFIGURATION_INFORMATION.Configuration", configuration, 0x40, 0x60, true, 0xaecf52a33ceda27c)
#else
#define _m00
#define _m01
#endif