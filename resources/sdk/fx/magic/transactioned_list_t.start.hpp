#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxTransactionedList.m_ListHead", m_list_head, 0x40, 0x80, true, 0xe3e6be83a2b45757)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxTransactionedList.m_TransactionHead", m_transaction_head, 0xc0, 0x80, true, 0xc14a823ec4748c3c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t*), "FxTransactionedList.m_DeletingDoneEvent", m_deleting_done_event, 0x140, 0x40, true, 0xd6c33006d191dbe5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxTransactionedList.m_ListLockedRecursionCount", m_list_locked_recursion_count, 0x180, 0x20, true, 0x97f8a5a6c6404e00)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxTransactionedList.m_DeleteOnRemove", m_delete_on_remove, 0x1a0, 0x8, true, 0x75514ac169a7fd94)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxTransactionedList.m_Deleting", m_deleting, 0x1a8, 0x8, true, 0x836033a4a7e87add)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxTransactionedList.m_Retries", m_retries, 0x1b0, 0x8, true, 0x451f53b3c590c743)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif