#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 8>), "_TOKEN_SOURCE.SourceName", source_name, 0x0, 0x40, true, 0xd08dc48ea607d156)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_SOURCE.SourceIdentifier", source_identifier, 0x40, 0x40, true, 0xde54f2b718d0972d)
#else
#define _m00
#define _m01
#endif