#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_FEATURE_INTERRUPT_COALESCING.THR", thr, 0x0, 0x0, false, 0x182a8030fefd15b2, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_FEATURE_INTERRUPT_COALESCING.LARGE_INTEGER", large_integer, 0x0, 0x0, false, 0x21832d6b75da3b58, 8, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_INTERRUPT_COALESCING.AsUlong", as_ulong, 0x0, 0x0, false, 0x9ff395e1527e662b)
#else
#define _m00
#define _m01
#define _m02
#endif