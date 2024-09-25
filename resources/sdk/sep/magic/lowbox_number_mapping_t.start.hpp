#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_SEP_LOWBOX_NUMBER_MAPPING.Lock", lock, 0x0, 0x40, true, 0x19026b10f28bed3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_SEP_LOWBOX_NUMBER_MAPPING.Bitmap", bitmap, 0x40, 0x80, true, 0xb0008f97253b3717)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_hash_table_t*), "_SEP_LOWBOX_NUMBER_MAPPING.HashTable", hash_table, 0xc0, 0x40, true, 0xbff8d5c9263cf36f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEP_LOWBOX_NUMBER_MAPPING.Active", active, 0x100, 0x8, true, 0x87eff5cf580d2f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif