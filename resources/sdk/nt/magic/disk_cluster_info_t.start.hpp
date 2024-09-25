#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_CLUSTER_INFO.Version", version, 0x0, 0x20, true, 0xb7e17f73822938f1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISK_CLUSTER_INFO.Flags", flags, 0x40, 0x40, true, 0x571f64da28bd025b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISK_CLUSTER_INFO.FlagsMask", flags_mask, 0x80, 0x40, true, 0x8f1c0aba694450e9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_CLUSTER_INFO.Notify", notify, 0xc0, 0x8, true, 0x8ed464be75fe555d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif