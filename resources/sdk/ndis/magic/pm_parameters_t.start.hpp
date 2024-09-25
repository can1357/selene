#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PM_PARAMETERS.Header", header, 0x0, 0x20, true, 0x81b369beb832dd7c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PARAMETERS.EnabledWoLPacketPatterns", enabled_wo_l_packet_patterns, 0x20, 0x20, true, 0xeedfced3fe3bf4b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PARAMETERS.EnabledProtocolOffloads", enabled_protocol_offloads, 0x40, 0x20, true, 0x9cf35c3b9be6bb6c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PARAMETERS.WakeUpFlags", wake_up_flags, 0x60, 0x20, true, 0x98ac4f9628ffa0c8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PARAMETERS.MediaSpecificWakeUpEvents", media_specific_wake_up_events, 0x80, 0x20, true, 0xddd39d71a12fa911)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif