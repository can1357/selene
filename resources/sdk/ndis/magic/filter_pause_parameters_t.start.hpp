#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_FILTER_PAUSE_PARAMETERS.Header", header, 0x0, 0x20, true, 0x3b1898208710040a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_PAUSE_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x6f09142fb65de81c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_PAUSE_PARAMETERS.PauseReason", pause_reason, 0x40, 0x20, true, 0xe45787e1ddd0bd12)
#else
#define _m00
#define _m01
#define _m02
#endif