#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMapKeyToValue.m_cbValue", m_cb_value, 0x0, 0x0, false, 0xa8d7fee8add54124)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMapKeyToValue.m_cbKey", m_cb_key, 0x0, 0x0, false, 0x54950e8a3a96bf5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMapKeyToValue.m_cbKeyInAssoc", m_cb_key_in_assoc, 0x0, 0x0, false, 0xd23b3e5bf0fe3bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMapKeyToValue.m_nHashTableSize", m_n_hash_table_size, 0x0, 0x0, false, 0xa812e200fd60998f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t)>*), "CMapKeyToValue.m_lpfnHashKey", m_lpfn_hash_key, 0x0, 0x0, false, 0xe4219c7267a2e56)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CMapKeyToValue.m_nCount", m_n_count, 0x0, 0x0, false, 0x60ca9def3d7b77f8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::c_plex_t*), "CMapKeyToValue.m_pBlocks", m_p_blocks, 0x0, 0x0, false, 0xc9777cdaadfa3c3c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CMapKeyToValue.m_nBlockSize", m_n_block_size, 0x0, 0x0, false, 0x5957c83a407f27cd)
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