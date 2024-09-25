#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_flags_t), "_CM_COMPONENT_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xf27eeaa05dbeb848)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_COMPONENT_INFORMATION.Version", version, 0x20, 0x20, true, 0x6d3fe71eb6f447e4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_COMPONENT_INFORMATION.Key", key, 0x40, 0x20, true, 0x55ad3c382aafe429)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_COMPONENT_INFORMATION.AffinityMask", affinity_mask, 0x80, 0x40, true, 0xb27887982ed6f998)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif