#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PPM_COORDINATED_SYNCHRONIZATION.AsLong", as_long, 0x0, 0x20, true, 0x231eb5c4d0b719b8)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PPM_COORDINATED_SYNCHRONIZATION.EnterProcessor", enter_processor, 0x0, 0xc, true, 0x2958cf74587ea0b1, 12, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PPM_COORDINATED_SYNCHRONIZATION.ExitProcessor", exit_processor, 0xc, 0xc, true, 0xa12b73e91cc1dcd6, 12, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PPM_COORDINATED_SYNCHRONIZATION.Transition", transition, 0x18, 0x2, true, 0xf38db2c3fb6e5950, 2, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PPM_COORDINATED_SYNCHRONIZATION.Entered", entered, 0x1a, 0x1, true, 0xdd02e424317e35e5, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PPM_COORDINATED_SYNCHRONIZATION.EntryPriority", entry_priority, 0x1b, 0x5, true, 0xf746c84201101efc, 5, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif