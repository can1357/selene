#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_SRB_HISTORY.ClassDriverUse", class_driver_use, 0x0, 0x0, true, 0xccbd94a36dc72b0e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRB_HISTORY.TotalHistoryCount", total_history_count, 0x100, 0x20, true, 0x148e5b7d5a4fa276)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRB_HISTORY.UsedHistoryCount", used_history_count, 0x120, 0x20, true, 0x3c05814a49c4657b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::srb_history_item_t, 1>), "_SRB_HISTORY.History", history, 0x140, 0x40, true, 0xb420c73111168d56)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif