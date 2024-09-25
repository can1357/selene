#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineStateHistory.S.State1", state1, 0x0, 0x10, true, 0x80f16227488bc7ff, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineStateHistory.S.State2", state2, 0x10, 0x10, true, 0xa4416c0a3c87ed19, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineStateHistory.S.State3", state3, 0x20, 0x10, true, 0x39e643ff2e610b6d, 16, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineStateHistory.S.State4", state4, 0x30, 0x10, true, 0x937bb84522522fb5, 16, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineStateHistory.S.State5", state5, 0x40, 0x10, true, 0x985b32fc9e5e86cf, 16, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineStateHistory.S.State6", state6, 0x50, 0x10, true, 0x9b86144d3944c797, 16, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineStateHistory.S.State7", state7, 0x60, 0x10, true, 0xfdc0c53cc68ecde, 16, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineStateHistory.S.State8", state8, 0x70, 0x10, true, 0x7bd571fb0b8fc522, 16, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_s_t), "FxPowerMachineStateHistory.S", s, 0x0, 0x80, true, 0xcdeaa1fdcf04977b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "FxPowerMachineStateHistory.History", history, 0x0, 0x80, true, 0xc8d79d44509109fb)
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