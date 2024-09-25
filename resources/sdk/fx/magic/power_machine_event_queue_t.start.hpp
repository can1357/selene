#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineEventQueue.E.Event1", event1, 0x0, 0x10, true, 0xcf0de5ad0b9c0a34, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineEventQueue.E.Event2", event2, 0x10, 0x10, true, 0x357b152846980886, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineEventQueue.E.Event3", event3, 0x20, 0x10, true, 0x9c8ed9dea36b343f, 16, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineEventQueue.E.Event4", event4, 0x30, 0x10, true, 0x16b9a380bddc7d08, 16, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineEventQueue.E.Event5", event5, 0x40, 0x10, true, 0x1cde404dea0df3da, 16, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineEventQueue.E.Event6", event6, 0x50, 0x10, true, 0xa1e8a9d734b1d838, 16, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineEventQueue.E.Event7", event7, 0x60, 0x10, true, 0x7ef6d6dc662fd6e7, 16, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "FxPowerMachineEventQueue.E.Event8", event8, 0x70, 0x10, true, 0x79e9451da236f10c, 16, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_e_t), "FxPowerMachineEventQueue.E", e, 0x0, 0x80, true, 0x77501947b76db1a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "FxPowerMachineEventQueue.Events", events, 0x0, 0x80, true, 0x22739650f1dfb04e)
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