#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMemStm.m_dwSig", m_dw_sig, 0x40, 0x20, true, 0x405e7b437f044170)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMemStm.m_refs", m_refs, 0x60, 0x20, true, 0x3d98a8b6865550f7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMemStm.m_pos", m_pos, 0x80, 0x20, true, 0x377cff0631dbe854)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CMemStm.m_hMem", m_h_mem, 0xc0, 0x40, true, 0xb1083e185abca129)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::memstm_t*), "CMemStm.m_pData", m_p_data, 0x100, 0x40, true, 0x41ac0bbb71a8cfa1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ref_mutex_sem_t*), "CMemStm.m_pmxs", m_pmxs, 0x140, 0x40, true, 0xd97cc118760e969d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif