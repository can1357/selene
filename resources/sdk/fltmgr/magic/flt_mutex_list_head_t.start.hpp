#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_FLT_MUTEX_LIST_HEAD.mLock", m_lock, 0x0, 0xc0, true, 0x1b5f7e0b841b45b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLT_MUTEX_LIST_HEAD.mList", m_list, 0x1c0, 0x80, true, 0x21c1842889e067de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_MUTEX_LIST_HEAD.mCount", m_count, 0x240, 0x20, true, 0xdab24fd2e26b2acd)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FLT_MUTEX_LIST_HEAD.mInvalid", m_invalid, 0x240, 0x1, true, 0x910877fde96e03e1, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif