#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CThreadStack.m_dwCurrentPageSize", m_dw_current_page_size, 0x0, 0x20, true, 0x53691a202c399b01)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CThreadStack.m_CurrentProcessDefaultStackCommit", m_current_process_default_stack_commit, 0x40, 0x40, true, 0x1ca0d078aa61ec4a)
#else
#define _m00
#define _m01
#endif