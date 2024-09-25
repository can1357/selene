#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 36>), "_WHEA_PACKET_LOG_DATA.LogData", log_data, 0x0, 0x20, true, 0xe2b5f7ff5d37b8d4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 36>), "_WHEA_PACKET_LOG_DATA.ExtraBytes", extra_bytes, 0x120, 0x20, true, 0x8e4550c651d6cb06)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PACKET_LOG_DATA.BcParam3", bc_param3, 0x240, 0x40, true, 0x6aed9a091f14ab5b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PACKET_LOG_DATA.BcParam4", bc_param4, 0x280, 0x40, true, 0x129ef918f0e08da2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PACKET_LOG_DATA.LogDataLength", log_data_length, 0x2c0, 0x20, true, 0xe5d0995075de7222)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PACKET_LOG_DATA.LogTag", log_tag, 0x2e0, 0x10, true, 0xca6e13d80973bb9b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::report_hw_error_device_driver_flags_t), "_WHEA_PACKET_LOG_DATA.Flags", flags, 0x300, 0x20, true, 0x6ff76a0f60d30e0f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif