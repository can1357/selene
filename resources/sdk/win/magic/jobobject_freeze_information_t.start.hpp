#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_FREEZE_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xfc37f20cdc9bf036)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_JOBOBJECT_FREEZE_INFORMATION.FreezeOperation", freeze_operation, 0x0, 0x1, true, 0x9e536304067d43b2, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_JOBOBJECT_FREEZE_INFORMATION.FilterOperation", filter_operation, 0x1, 0x1, true, 0x88feae270bd50d12, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_JOBOBJECT_FREEZE_INFORMATION.SwapOperation", swap_operation, 0x2, 0x1, true, 0x581c324f5ef08c76, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_JOBOBJECT_FREEZE_INFORMATION.Freeze", freeze, 0x20, 0x8, true, 0xe00f6d66478e89e3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_JOBOBJECT_FREEZE_INFORMATION.Swap", swap, 0x28, 0x8, true, 0xa661ee89f25e455b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::jobobject_wake_filter_t), "_JOBOBJECT_FREEZE_INFORMATION.WakeFilter", wake_filter, 0x40, 0x40, true, 0x10fe3d24f28b9e84)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif