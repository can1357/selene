#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint64_t), "_MMPFNLIST.Total", total, 0x0, 0x40, true, 0xcd037e13a81582d8, 64, uint64_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::mmlists_t), "_MMPFNLIST.ListName", list_name, 0x40, 0x20, true, 0x4f271d38c94a2801)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPFNLIST.Flink", flink, 0x80, 0x40, true, 0x2951dfcd31eea9af)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPFNLIST.Blink", blink, 0xc0, 0x40, true, 0xe3da8cdc8a37606c)
#define _m04 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int64_t), "_MMPFNLIST.Lock", lock, 0x100, 0x40, true, 0x6201ded62e0a09b2, 0, uint64_t,uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t), "_MMPFNLIST.EmbeddedPfn", embedded_pfn, 0x0, 0x0, false, 0x7b7ae0783bfd1729)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif