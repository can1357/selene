#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSpinLockTransactionedList.m_ListHead", m_list_head, 0x40, 0x80, true, 0x8bf4eae950829335)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSpinLockTransactionedList.m_TransactionHead", m_transaction_head, 0xc0, 0x80, true, 0x30e37ee7f18774ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t*), "FxSpinLockTransactionedList.m_DeletingDoneEvent", m_deleting_done_event, 0x140, 0x40, true, 0xaeed7745d9c9f00)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxSpinLockTransactionedList.m_ListLockedRecursionCount", m_list_locked_recursion_count, 0x180, 0x20, true, 0xe68b3eefb752d1c3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSpinLockTransactionedList.m_DeleteOnRemove", m_delete_on_remove, 0x1a0, 0x8, true, 0xf9161bdef9342a3c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSpinLockTransactionedList.m_Deleting", m_deleting, 0x1a8, 0x8, true, 0xb7e1074ef96d5fff)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSpinLockTransactionedList.m_Retries", m_retries, 0x1b0, 0x8, true, 0xe4c14311354fbaa9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxSpinLockTransactionedList.m_ListLock", m_list_lock, 0x1c0, 0x80, true, 0x56a0fb21f6705e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif