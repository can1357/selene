#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_IDLE_POWER.Version", version, 0x0, 0x20, true, 0x63ee46abab2da8a8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_IDLE_POWER.Size", size, 0x20, 0x20, true, 0x382fe884d6a2941c)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_IDLE_POWER.WakeCapableHint", wake_capable_hint, 0x40, 0x1, true, 0x20603e4cf506b6a6, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_IDLE_POWER.D3ColdSupported", d3_cold_supported, 0x41, 0x1, true, 0xe8d3a816810715fa, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_IDLE_POWER.D3IdleTimeout", d3_idle_timeout, 0x60, 0x20, true, 0x749288ba64a0925e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif