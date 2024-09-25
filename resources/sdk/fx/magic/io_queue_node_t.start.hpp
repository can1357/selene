#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoQueueNode.m_ListEntry", m_list_entry, 0x0, 0x80, true, 0xd511983976058786)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::io_queue_node_type_t), "FxIoQueueNode.m_Type", m_type, 0x80, 0x20, true, 0x659fc17fd60f113f)
#else
#define _m00
#define _m01
#endif