#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CArrayFValue.m_pData", m_p_data, 0x0, 0x40, true, 0xb8d790ee2b1be449)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CArrayFValue.m_cbValue", m_cb_value, 0x40, 0x20, true, 0x9e7f786a9c7526a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CArrayFValue.m_nSize", m_n_size, 0x60, 0x20, true, 0xdfb1e1082ad635ca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CArrayFValue.m_nMaxSize", m_n_max_size, 0x80, 0x20, true, 0xf8b1af847f71c6ee)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CArrayFValue.m_nGrowBy", m_n_grow_by, 0xa0, 0x20, true, 0xa04e105ff7c16cf9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif