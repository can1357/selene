#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::formatetc_t), "tagSTATDATA.formatetc", formatetc, 0x0, 0x0, true, 0x9f664eb53ea9e484)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTATDATA.advf", advf, 0x100, 0x20, true, 0x9aafb680814a6be0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_advise_sink_t*), "tagSTATDATA.pAdvSink", p_adv_sink, 0x140, 0x40, true, 0xc05e9f53b0fca88d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTATDATA.dwConnection", dw_connection, 0x180, 0x20, true, 0x413a5d36cc028ef1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif