#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_KTRANSACTION.OutcomeEvent", outcome_event, 0x0, 0xc0, true, 0xd750535dfa3722c0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.cookie", cookie, 0xc0, 0x20, true, 0x236b6e819e596348)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_KTRANSACTION.Mutex", mutex, 0x100, 0xc0, true, 0xeb602e061b3cb7ea)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktransaction_t*), "_KTRANSACTION.TreeTx", tree_tx, 0x2c0, 0x40, true, 0x26c9b1fa55facbe4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktmobject_namespace_link_t), "_KTRANSACTION.GlobalNamespaceLink", global_namespace_link, 0x300, 0x40, true, 0xddcd20c6251050a1)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktmobject_namespace_link_t), "_KTRANSACTION.TmNamespaceLink", tm_namespace_link, 0x440, 0x40, true, 0xf3c58f8cf7eff85b)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KTRANSACTION.UOW", uow, 0x580, 0x80, true, 0x481d305edd631171)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::ktransaction_state_t), "_KTRANSACTION.State", state, 0x600, 0x20, true, 0x966c61cd2503596d)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.Flags", flags, 0x620, 0x20, true, 0xe813159ddb451c64)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTRANSACTION.EnlistmentHead", enlistment_head, 0x640, 0x80, true, 0x3f430bab6ed1a8f)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.EnlistmentCount", enlistment_count, 0x6c0, 0x20, true, 0xff352e95fa3e6cb1)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.RecoverableEnlistmentCount", recoverable_enlistment_count, 0x6e0, 0x20, true, 0x91abb8f22471a82a)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.PrePrepareRequiredEnlistmentCount", pre_prepare_required_enlistment_count, 0x700, 0x20, true, 0x4994a256f234fa72)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.PrepareRequiredEnlistmentCount", prepare_required_enlistment_count, 0x720, 0x20, true, 0x58418aa4decb971)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.OutcomeRequiredEnlistmentCount", outcome_required_enlistment_count, 0x740, 0x20, true, 0x8a1aafade6833592)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.PendingResponses", pending_responses, 0x760, 0x20, true, 0xd5e3669e7b6feb5e)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kenlistment_t*), "_KTRANSACTION.SuperiorEnlistment", superior_enlistment, 0x780, 0x40, true, 0xa6325a9e9f28c3de)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_KTRANSACTION.LastLsn", last_lsn, 0x7c0, 0x40, true, 0x7c478e853c02dd4)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTRANSACTION.PromotedEntry", promoted_entry, 0x800, 0x80, true, 0x2e635edaca59a1ad)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktransaction_t*), "_KTRANSACTION.PromoterTransaction", promoter_transaction, 0x880, 0x40, true, 0x1b2ff3cfeff4fb9e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTRANSACTION.PromotePropagation", promote_propagation, 0x8c0, 0x40, true, 0x59ddf567b8c433b5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.IsolationLevel", isolation_level, 0x900, 0x20, true, 0x156c3f30bc43046c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.IsolationFlags", isolation_flags, 0x920, 0x20, true, 0x78cd04c116f8d38f)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTRANSACTION.Timeout", timeout, 0x940, 0x40, true, 0x60327a2b7a7c8aae)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_KTRANSACTION.Description", description, 0x980, 0x80, true, 0x12dab5dccd35a12e)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KTRANSACTION.RollbackThread", rollback_thread, 0xa00, 0x40, true, 0xd0a5f9f03e58bba4)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_KTRANSACTION.RollbackWorkItem", rollback_work_item, 0xa40, 0x0, true, 0xbe45c54ec35dc7fa)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KTRANSACTION.RollbackDpc", rollback_dpc, 0xb40, 0x0, true, 0xe2b68889f1bf2d11)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_KTRANSACTION.RollbackTimer", rollback_timer, 0xd40, 0x0, true, 0xa82308bcb9265ead)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTRANSACTION.LsnOrderedEntry", lsn_ordered_entry, 0xf40, 0x80, true, 0x5936a6433581472e)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::ktransaction_outcome_t), "_KTRANSACTION.Outcome", outcome, 0xfc0, 0x20, true, 0x47e425c1e77c814c)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktm_t*), "_KTRANSACTION.Tm", tm, 0x1000, 0x40, true, 0x3959d358abaf8b07)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTRANSACTION.CommitReservation", commit_reservation, 0x1040, 0x40, true, 0xa7606dc9c854a910)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ktransaction_history_t, 10>), "_KTRANSACTION.TransactionHistory", transaction_history, 0x1080, 0x80, true, 0x68f1620b3bf41211)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.TransactionHistoryCount", transaction_history_count, 0x1300, 0x20, true, 0x7043deb725f276bd)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTRANSACTION.DTCPrivateInformation", dtc_private_information, 0x1340, 0x40, true, 0x2ef6d033bcf689d8)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.DTCPrivateInformationLength", dtc_private_information_length, 0x1380, 0x20, true, 0x71dd4a4e48d944e6)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_KTRANSACTION.DTCPrivateInformationMutex", dtc_private_information_mutex, 0x13c0, 0xc0, true, 0xb6aa3bb2ba45877a)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTRANSACTION.PromotedTxSelfHandle", promoted_tx_self_handle, 0x1580, 0x40, true, 0x387c375772a8784)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION.PendingPromotionCount", pending_promotion_count, 0x15c0, 0x20, true, 0x63c25027b1c62c4b)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_KTRANSACTION.PromotionCompletedEvent", promotion_completed_event, 0x1600, 0xc0, true, 0x8824f075bc0c2937)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#endif