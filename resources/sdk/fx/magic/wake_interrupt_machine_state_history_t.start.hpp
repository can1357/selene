#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "FxWakeInterruptMachineStateHistory.S.State1", state1, 0x0, 0x8, true, 0xd1eabedc71507145, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "FxWakeInterruptMachineStateHistory.S.State2", state2, 0x8, 0x8, true, 0x67896288bf4373cf, 8, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "FxWakeInterruptMachineStateHistory.S.State3", state3, 0x10, 0x8, true, 0xe40e74ab3e89a7f9, 8, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "FxWakeInterruptMachineStateHistory.S.State4", state4, 0x18, 0x8, true, 0x4281745c6fc2e4d6, 8, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "FxWakeInterruptMachineStateHistory.S.State5", state5, 0x20, 0x8, true, 0x774a15a6c984c8e5, 8, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "FxWakeInterruptMachineStateHistory.S.State6", state6, 0x28, 0x8, true, 0x3b89360c483ad947, 8, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "FxWakeInterruptMachineStateHistory.S.State7", state7, 0x30, 0x8, true, 0xfd404f2b743e8e9b, 8, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "FxWakeInterruptMachineStateHistory.S.State8", state8, 0x38, 0x8, true, 0x75a5c0d652285770, 8, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_s_t), "FxWakeInterruptMachineStateHistory.S", s, 0x0, 0x40, true, 0x3a93502508bee94d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "FxWakeInterruptMachineStateHistory.History", history, 0x0, 0x40, true, 0x79bd8251733aeda4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif