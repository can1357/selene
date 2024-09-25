#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagPROTOCOLFILTERDATA.cbSize", cb_size, 0x0, 0x20, true, 0x8383093171b18251)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_internet_protocol_sink_t*), "_tagPROTOCOLFILTERDATA.pProtocolSink", p_protocol_sink, 0x40, 0x40, true, 0x6cef181d0af430e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_internet_protocol_t*), "_tagPROTOCOLFILTERDATA.pProtocol", p_protocol, 0x80, 0x40, true, 0xc7c1913750b17bdc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "_tagPROTOCOLFILTERDATA.pUnk", p_unk, 0xc0, 0x40, true, 0x72ed82a9f6e00372)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagPROTOCOLFILTERDATA.dwFilterFlags", dw_filter_flags, 0x100, 0x20, true, 0x416ad7425dfa427a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif