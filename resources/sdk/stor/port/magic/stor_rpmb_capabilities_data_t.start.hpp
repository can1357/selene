#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_RPMB_CAPABILITIES_DATA.Version", version, 0x0, 0x20, true, 0xe44ddbbf7a1a0af0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_RPMB_CAPABILITIES_DATA.Size", size, 0x20, 0x20, true, 0xee4dec3060d81d09)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_RPMB_CAPABILITIES_DATA.RpmbSize", rpmb_size, 0x40, 0x20, true, 0xe6d493b467d9ba8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_RPMB_CAPABILITIES_DATA.MaxReliableRpmbWriteSize", max_reliable_rpmb_write_size, 0x60, 0x20, true, 0xabaf91055616bc10)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_RPMB_CAPABILITIES_DATA.SecurityProtocol", security_protocol, 0x80, 0x8, true, 0x7f2869b2b751c462)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_RPMB_CAPABILITIES_DATA.SecurityProtocolSpecifier", security_protocol_specifier, 0x90, 0x10, true, 0xedd2570ef8e9cab4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_address_t), "_STOR_RPMB_CAPABILITIES_DATA.RpmbTarget", rpmb_target, 0xc0, 0x80, true, 0x97d5fbd66c64af85)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_rpmb_frame_type_t), "_STOR_RPMB_CAPABILITIES_DATA.FrameFormat", frame_format, 0x140, 0x20, true, 0x53b7734a73963bd8)
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