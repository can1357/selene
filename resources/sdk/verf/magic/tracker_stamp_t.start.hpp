#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VF_TRACKER_STAMP.Thread", thread, 0x0, 0x40, true, 0xf73813ca5352f403)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VF_TRACKER_STAMP.Flags", flags, 0x40, 0x8, true, 0xaff8580a31aed5fb, 8, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VF_TRACKER_STAMP.OldIrql", old_irql, 0x48, 0x8, true, 0x23adce86acd9e294, 8, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VF_TRACKER_STAMP.NewIrql", new_irql, 0x50, 0x8, true, 0xd6f4630626d035fe, 8, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VF_TRACKER_STAMP.Processor", processor, 0x58, 0x8, true, 0x11e2cf58a6b82fb3, 8, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif