#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_PMCSR_BSE.Rsvd1", rsvd1, 0x0, 0x6, true, 0x19dace0c0e4057, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_PMCSR_BSE.D3HotSupportsStopClock", d3_hot_supports_stop_clock, 0x6, 0x1, true, 0x2c7f44760586e319, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_PMCSR_BSE.BusPowerClockControlEnabled", bus_power_clock_control_enabled, 0x7, 0x1, true, 0x1af890d702c406f6, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif