#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_EISA_IRQ_DESCRIPTOR.Interrupt", interrupt, 0x0, 0x4, true, 0x921775a613ccd39b, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EISA_IRQ_DESCRIPTOR.LevelTriggered", level_triggered, 0x5, 0x1, true, 0x6b28b18d65420a54, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EISA_IRQ_DESCRIPTOR.Shared", shared, 0x6, 0x1, true, 0xccbffadab5a15588, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EISA_IRQ_DESCRIPTOR.MoreEntries", more_entries, 0x7, 0x1, true, 0xafc4b113e61b2e9b, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif