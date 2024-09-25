#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_stream_t*), "CStmBufWrite.m_pStm", m_p_stm, 0x0, 0x0, false, 0x88718def02c308a4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "CStmBufWrite.m_aBuffer", m_a_buffer, 0x0, 0x0, false, 0x635add3a94cd72eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CStmBufWrite.m_pBuffer", m_p_buffer, 0x0, 0x0, false, 0x95ca2839b476e8a0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStmBufWrite.m_cBuffer", m_c_buffer, 0x0, 0x0, false, 0xcd76609bc69705db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif