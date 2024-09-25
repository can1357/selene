#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SPECIAL_POOL.Lock", lock, 0x0, 0x0, false, 0x206d5511b5549f9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pte_chain_head_t), "_MI_SPECIAL_POOL.Paged", paged, 0x0, 0x0, false, 0xcd5ab9e12e272f00)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pte_chain_head_t), "_MI_SPECIAL_POOL.NonPaged", non_paged, 0x0, 0x0, false, 0xe876cd04f2cbe47b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_SPECIAL_POOL.PagesInUse", pages_in_use, 0x0, 0x0, false, 0x8faa4d900ac0b892)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_SPECIAL_POOL.SpecialPoolPdes", special_pool_pdes, 0x0, 0x0, false, 0xb7f67af23554522f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif