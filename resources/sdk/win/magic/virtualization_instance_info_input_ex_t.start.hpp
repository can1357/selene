#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIRTUALIZATION_INSTANCE_INFO_INPUT_EX.HeaderSize", header_size, 0x0, 0x10, true, 0x98a4205a4cba29c1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUALIZATION_INSTANCE_INFO_INPUT_EX.Flags", flags, 0x20, 0x20, true, 0xdcd0536025ac7c59)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUALIZATION_INSTANCE_INFO_INPUT_EX.NotificationInfoSize", notification_info_size, 0x40, 0x20, true, 0x611f36d76b5d0067)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIRTUALIZATION_INSTANCE_INFO_INPUT_EX.NotificationInfoOffset", notification_info_offset, 0x60, 0x10, true, 0x1b2cc1f0b5288258)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIRTUALIZATION_INSTANCE_INFO_INPUT_EX.ProviderMajorVersion", provider_major_version, 0x70, 0x10, true, 0x716f7e22cdb62909)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif