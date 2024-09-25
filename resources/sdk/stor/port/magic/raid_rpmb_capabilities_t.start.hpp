#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_RPMB_CAPABILITIES.InterfaceNameRpmb", interface_name_rpmb, 0x0, 0x80, true, 0xa1bcea65829cf7e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_RPMB_CAPABILITIES.RpmbSize", rpmb_size, 0x80, 0x20, true, 0x3b2b2bab2f5e831d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_RPMB_CAPABILITIES.MaxReliableRpmbWriteSize", max_reliable_rpmb_write_size, 0xa0, 0x20, true, 0x26579c4ab060b460)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_RPMB_CAPABILITIES.SecurityProtocol", security_protocol, 0xc0, 0x8, true, 0xd535dd58f76145a5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RAID_RPMB_CAPABILITIES.SecurityProtocolSpecifier", security_protocol_specifier, 0xd0, 0x10, true, 0xe5796831bba85b7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_address_t), "_RAID_RPMB_CAPABILITIES.RpmbTarget", rpmb_target, 0x100, 0x80, true, 0xd9e95f6ead5eb373)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_rpmb_frame_type_t), "_RAID_RPMB_CAPABILITIES.FrameFormat", frame_format, 0x180, 0x20, true, 0x44b3ce070d0162e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif