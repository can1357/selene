#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_INFORMATION_ENTRY.Version", version, 0x0, 0x20, true, 0x1c1a710d525b3646)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_INFORMATION_ENTRY.Flags", flags, 0x20, 0x20, true, 0xa3a5daaca63e4f81)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::stream_information_t), "_STREAM_INFORMATION_ENTRY.StreamInformation", stream_information, 0x40, 0x80, true, 0x96cd7263e9d3166b)
#else
#define _m00
#define _m01
#define _m02
#endif