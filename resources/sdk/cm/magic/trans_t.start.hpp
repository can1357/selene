#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_TRANS.TransactionListEntry", transaction_list_entry, 0x0, 0x80, true, 0x59ec9b417bcb8800)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_TRANS.KCBUoWListHead", kcb_uo_w_list_head, 0x80, 0x80, true, 0x14f3c5c3debc45f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_TRANS.LazyCommitListEntry", lazy_commit_list_entry, 0x100, 0x80, true, 0x6b5259c19f019b53)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.Prepared", prepared, 0x180, 0x1, true, 0x7e25c9290d1649ae, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.Aborted", aborted, 0x181, 0x1, true, 0xc39352df1757112, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.Committed", committed, 0x182, 0x1, true, 0xaeb719af4a25a136, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.Initializing", initializing, 0x183, 0x1, true, 0x5972de3be8124631, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.Invalid", invalid, 0x184, 0x1, true, 0x4277ec7f7987b0ff, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.UseReservation", use_reservation, 0x185, 0x1, true, 0xee46881b6ba6288, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.TmCallbacksActive", tm_callbacks_active, 0x186, 0x1, true, 0x7c7d7c7fec68a79, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.LightWeight", light_weight, 0x187, 0x1, true, 0x203e4f3c1cd04d37, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.Freed1", freed1, 0x188, 0x1, true, 0x7a5c504c79532774, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.Freed2", freed2, 0x189, 0x1, true, 0xb0101659a6798c10, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_TRANS.Freed", freed, 0x18c, 0x1, true, 0xe7e9cadd0b7da0c8, 1, uint32_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_TRANS.TransState", trans_state, 0x180, 0x20, true, 0xee1c1d2882f558e6)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union cm::trans_ptr_t), "_CM_TRANS.Trans", trans, 0x1c0, 0x40, true, 0xf4d222ae0c38377c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::rm_t*), "_CM_TRANS.CmRm", cm_rm, 0x200, 0x40, true, 0x8aa0ef00dd102550)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kenlistment_t*), "_CM_TRANS.KtmEnlistmentObject", ktm_enlistment_object, 0x240, 0x40, true, 0x3219a205899562d0)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_TRANS.KtmEnlistmentHandle", ktm_enlistment_handle, 0x280, 0x40, true, 0xf56ab0c84ee359fc)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CM_TRANS.KtmUow", ktm_uow, 0x2c0, 0x80, true, 0x8e340e53271e0ddf)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_TRANS.StartLsn", start_lsn, 0x340, 0x40, true, 0x5920ae6960b97001)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_TRANS.HiveCount", hive_count, 0x380, 0x20, true, 0x71b2dbb67b43490)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cmhive_t*, 7>), "_CM_TRANS.HiveArray", hive_array, 0x3c0, 0x0, true, 0xc01e0899728a1a47)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif