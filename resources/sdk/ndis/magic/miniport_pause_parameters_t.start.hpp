#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_PAUSE_PARAMETERS.Header", header, 0x0, 0x20, true, 0xdb9af42b6ed7fbe3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_PAUSE_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xaf1d1cdd1bf034e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_PAUSE_PARAMETERS.PauseReason", pause_reason, 0x40, 0x20, true, 0xaff3f6d428f9e541)
#else
#define _m00
#define _m01
#define _m02
#endif