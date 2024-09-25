#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxEnumerationInfo.m_PowerStateLock", m_power_state_lock, 0x0, 0x40, true, 0xbe83923813a202f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_transactioned_list_t), "FxEnumerationInfo.m_ChildListList", m_child_list_list, 0x140, 0x0, true, 0x9ef8cf3c72c00c0f)
#else
#define _m00
#define _m01
#endif