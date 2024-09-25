#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_ENERGY_TRACKING_STATE.StateUpdateMask", state_update_mask, 0x0, 0x20, true, 0x41c0e863f4df2f61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_ENERGY_TRACKING_STATE.StateDesiredValue", state_desired_value, 0x20, 0x20, true, 0xbed4f831e5e9e14b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_ENERGY_TRACKING_STATE.StateSequence", state_sequence, 0x40, 0x20, true, 0x942f1aca9e2a9c3)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_ENERGY_TRACKING_STATE.UpdateTag", update_tag, 0x60, 0x1, true, 0xa34e0d18d0087c31, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "_PROCESS_ENERGY_TRACKING_STATE.Tag", tag, 0x80, 0x0, true, 0x3032379358992562)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif