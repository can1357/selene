#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_POWER_RECORD.SystemS1", system_s1, 0x0, 0x8, true, 0xe1409016f6ee5845)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_POWER_RECORD.SystemS2", system_s2, 0x8, 0x8, true, 0xac56b9b396119718)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_POWER_RECORD.SystemS3", system_s3, 0x10, 0x8, true, 0xff7b6ce58cd09dab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_POWER_RECORD.SystemS4", system_s4, 0x18, 0x8, true, 0x8751ba39c1506040)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_POWER_RECORD.SystemS5", system_s5, 0x20, 0x8, true, 0x4e1eab6fcf0caa1d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_POWER_RECORD.AoAc", ao_ac, 0x28, 0x8, true, 0x4f3f10cf150139b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif