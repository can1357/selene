#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_UNINITMTAWORKERCONTEXT.hUninitMTADoneEvent", h_uninit_mta_done_event, 0x0, 0x40, true, 0xf7a4655a26e002)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::s_ole_tls_data_t*), "_UNINITMTAWORKERCONTEXT.pSOleTlsData", p_s_ole_tls_data, 0x40, 0x40, true, 0x319481452e3c50e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::work_t*), "_UNINITMTAWORKERCONTEXT.ptpWork", ptp_work, 0x80, 0x40, true, 0xb10faaaf217b00d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::uninit_mta_worker_context_flags_t), "_UNINITMTAWORKERCONTEXT.flags", flags, 0xc0, 0x20, true, 0xe7e8d40b25cc5c8e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif