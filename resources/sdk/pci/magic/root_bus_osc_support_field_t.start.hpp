#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_SUPPORT_FIELD.ExtendedConfigOpRegions", extended_config_op_regions, 0x0, 0x1, true, 0xcaaa01c78dc79a09, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_SUPPORT_FIELD.ActiveStatePowerManagement", active_state_power_management, 0x1, 0x1, true, 0x479e32f316a7cf2f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_SUPPORT_FIELD.ClockPowerManagement", clock_power_management, 0x2, 0x1, true, 0x94319c17295e6563, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_SUPPORT_FIELD.SegmentGroups", segment_groups, 0x3, 0x1, true, 0xbfc57207664185d1, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_SUPPORT_FIELD.MessageSignaledInterrupts", message_signaled_interrupts, 0x4, 0x1, true, 0x313205649bcb6606, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_SUPPORT_FIELD.OptimizedBufferFlushAndFill", optimized_buffer_flush_and_fill, 0x5, 0x1, true, 0x541e22433780e5fa, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_SUPPORT_FIELD.AspmOptionality", aspm_optionality, 0x6, 0x1, true, 0x74b50698af0dd228, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_ROOT_BUS_OSC_SUPPORT_FIELD.AsULONG", as_ulong, 0x0, 0x20, true, 0x3fd8ed0ca7ed5835)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif