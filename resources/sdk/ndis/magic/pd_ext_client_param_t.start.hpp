#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_EXT_CLIENT_PARAM.PDExtClientBufferContextSize", pd_ext_client_buffer_context_size, 0x0, 0x20, true, 0x655f0ff2aaa5402d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_EXT_CLIENT_PARAM.PDExtClientBufferBackfillSize", pd_ext_client_buffer_backfill_size, 0x20, 0x20, true, 0x9b445440426aace6)
#else
#define _m00
#define _m01
#endif