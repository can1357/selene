#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOOKUP_STREAM_FROM_CLUSTER_ENTRY.OffsetToNext", offset_to_next, 0x0, 0x20, true, 0x282fa99785868d82)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOOKUP_STREAM_FROM_CLUSTER_ENTRY.Flags", flags, 0x20, 0x20, true, 0xbdfc026a42860ce5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_LOOKUP_STREAM_FROM_CLUSTER_ENTRY.Cluster", cluster, 0x80, 0x40, true, 0xc28f8b8f3844952)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_LOOKUP_STREAM_FROM_CLUSTER_ENTRY.FileName", file_name, 0xc0, 0x10, true, 0x141bc19f76a24f20)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif