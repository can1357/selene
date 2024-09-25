#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_stream_t*), "CStmBuf.m_pStm", m_p_stm, 0x0, 0x0, false, 0x2297cc9fe4e88943)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "CStmBuf.m_aBuffer", m_a_buffer, 0x0, 0x0, false, 0xda8be99e0cff3ff3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CStmBuf.m_pBuffer", m_p_buffer, 0x0, 0x0, false, 0x632a5de53f913390)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStmBuf.m_cBuffer", m_c_buffer, 0x0, 0x0, false, 0xeadbe1a17cf50144)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif