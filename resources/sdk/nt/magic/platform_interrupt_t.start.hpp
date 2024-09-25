#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLATFORM_INTERRUPT.Type", type, 0x0, 0x8, true, 0xd32f3700124e3e97)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLATFORM_INTERRUPT.Length", length, 0x8, 0x8, true, 0x54985074cdc8f897)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PLATFORM_INTERRUPT.Flags", flags, 0x10, 0x10, true, 0xd9e7494c6f56345b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLATFORM_INTERRUPT.InterruptType", interrupt_type, 0x20, 0x8, true, 0x13d04378cb1dd9a0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLATFORM_INTERRUPT.APICID", apicid, 0x28, 0x8, true, 0x9613bd2c8acfb562)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLATFORM_INTERRUPT.ACPIEID", acpieid, 0x30, 0x8, true, 0x9127f9114a24eb3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLATFORM_INTERRUPT.IOSAPICVector", iosapic_vector, 0x38, 0x8, true, 0xcd8916bb740fea33)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLATFORM_INTERRUPT.GlobalVector", global_vector, 0x40, 0x20, true, 0x9f93acecc6c50c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif