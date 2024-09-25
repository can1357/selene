#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint40_t), "_MIPFNBLINK.Blink", blink, 0x0, 0x24, true, 0x5977802e8ae41684, 0, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint4_t), "_MIPFNBLINK.TbFlushStamp", tb_flush_stamp, 0x38, 0x4, true, 0xa9fdc3fb10a3cc60, 0, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_MIPFNBLINK.PageBlinkDeleteBit", page_blink_delete_bit, 0x3e, 0x1, true, 0xe55891de014c8a79, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_MIPFNBLINK.PageBlinkLockBit", page_blink_lock_bit, 0x3f, 0x1, true, 0x1e7f6428c90544e8, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint62_t), "_MIPFNBLINK.ShareCount", share_count, 0x0, 0x3e, true, 0x83e795e15949da20, 62, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_MIPFNBLINK.PageShareCountDeleteBit", page_share_count_delete_bit, 0x3e, 0x1, true, 0xcf89a7724fc96c25, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_MIPFNBLINK.PageShareCountLockBit", page_share_count_lock_bit, 0x3f, 0x1, true, 0xd5b3969229add029, 1, uint64_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MIPFNBLINK.EntireField", entire_field, 0x0, 0x40, true, 0x2d4d746982534860)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_MIPFNBLINK.Lock", lock, 0x0, 0x40, true, 0x167ecb1fc42a9730)
#define _m09 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint62_t), "_MIPFNBLINK.LockNotUsed", lock_not_used, 0x0, 0x3e, true, 0xbb5fa405ff3a58a1, 62, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_MIPFNBLINK.DeleteBit", delete_bit, 0x3e, 0x1, true, 0x9dcd6dd8c5698d0a, 1, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_MIPFNBLINK.LockBit", lock_bit, 0x3f, 0x1, true, 0x3701c116bcc79259, 1, uint64_t)
#define _m12 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint20_t), "_MIPFNBLINK.NodeBlinkHigh", node_blink_high, 0x24, 0x14, true, 0xeba353d910dbbedf, 20, uint64_t)
#define _m13 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint19_t), "_MIPFNBLINK.NodeBlinkLow", node_blink_low, 0x0, 0x0, false, 0x672ae607ce89ee76, 19, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif