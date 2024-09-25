#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_EINFO.entryIndex", entry_index, 0x0, 0x18, true, 0x23777d07c10ba1f, 24, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint40_t), "_EINFO.compatibilityBits", compatibility_bits, 0x18, 0x28, true, 0x23c782496d28ce21, 40, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct kuser::hobj_t*), "_EINFO.hFree", h_free, 0x0, 0x40, true, 0x18fd95e576f3cc42)
#else
#define _m00
#define _m01
#define _m02
#endif