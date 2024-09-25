#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxTransactionedEntry.m_ListLink", m_list_link, 0x0, 0x80, true, 0xb36526908c732ea1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxTransactionedEntry.m_TransactionLink", m_transaction_link, 0x80, 0x80, true, 0x8de023553725d159)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::list_transaction_action_t), "FxTransactionedEntry.m_Transaction", m_transaction, 0x100, 0x20, true, 0x36a3ca8a65dfb9d6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxTransactionedEntry.m_TransactionedObject", m_transactioned_object, 0x140, 0x40, true, 0xcc32d62bf7ddb439)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif