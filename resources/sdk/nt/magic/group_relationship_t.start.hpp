#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GROUP_RELATIONSHIP.MaximumGroupCount", maximum_group_count, 0x0, 0x10, true, 0x4cce90fa24689252)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GROUP_RELATIONSHIP.ActiveGroupCount", active_group_count, 0x10, 0x10, true, 0x83198d1a6a822d80)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::processor_group_info_t, 1>), "_GROUP_RELATIONSHIP.GroupInfo", group_info, 0xc0, 0x80, true, 0x7b9e7aaf3b82c0ba)
#else
#define _m00
#define _m01
#define _m02
#endif