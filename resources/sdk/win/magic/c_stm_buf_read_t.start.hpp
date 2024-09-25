#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_stream_t*), "CStmBufRead.m_pStm", m_p_stm, 0x0, 0x0, false, 0x5a92e28783413f81)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "CStmBufRead.m_aBuffer", m_a_buffer, 0x0, 0x0, false, 0x1fd45feeb52a5213)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CStmBufRead.m_pBuffer", m_p_buffer, 0x0, 0x0, false, 0xa91dc6fd38507a08)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStmBufRead.m_cBuffer", m_c_buffer, 0x0, 0x0, false, 0x1b7c09348148195b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif