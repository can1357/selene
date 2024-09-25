#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::perfinfo_groupmask_t), "_ETW_KERNEL_HEADER_EXTENSION.GroupMasks", group_masks, 0x0, 0x0, true, 0x69bc48f079fc316)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_KERNEL_HEADER_EXTENSION.Version", version, 0x100, 0x20, true, 0x9f4a83390298c168)
#else
#define _m00
#define _m01
#endif