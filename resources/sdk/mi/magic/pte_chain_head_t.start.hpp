#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t), "_MI_PTE_CHAIN_HEAD.Flink", flink, 0x0, 0x40, true, 0xcfe1407f9a06147a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t), "_MI_PTE_CHAIN_HEAD.Blink", blink, 0x40, 0x40, true, 0x7352d60ddf5129d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_PTE_CHAIN_HEAD.PteBase", pte_base, 0x80, 0x40, true, 0xf61763e7ddf59a51)
#else
#define _m00
#define _m01
#define _m02
#endif