#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPnpMachineStateHistory.S.State1", state1, 0x0, 0x10, true, 0xb41e9ee1aca6dbc9, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPnpMachineStateHistory.S.State2", state2, 0x10, 0x10, true, 0x1ee28b87d0b771fa, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPnpMachineStateHistory.S.State3", state3, 0x20, 0x10, true, 0x7e24f832bd42a218, 16, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPnpMachineStateHistory.S.State4", state4, 0x30, 0x10, true, 0x5072224bf63b6945, 16, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPnpMachineStateHistory.S.State5", state5, 0x40, 0x10, true, 0xa029aefacd49a2bc, 16, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPnpMachineStateHistory.S.State6", state6, 0x50, 0x10, true, 0x2f1c4819c6cd3ad2, 16, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPnpMachineStateHistory.S.State7", state7, 0x60, 0x10, true, 0xad89370d942cd38e, 16, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPnpMachineStateHistory.S.State8", state8, 0x70, 0x10, true, 0xb03f4817eaac4032, 16, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_s_t), "FxPnpMachineStateHistory.S", s, 0x0, 0x80, true, 0xad51e030b90ce73a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "FxPnpMachineStateHistory.History", history, 0x0, 0x80, true, 0x76b1cdabedccfe7d)
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