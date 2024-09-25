#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(whea_memory_correctable_error_section_validbits_t ), "_WHEA_MEMORY_CORRECTABLE_ERROR_DATA.ValidBits", valid_bits, 0x0, 0x0, false, 0xfd50244e6dd7a282)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_DATA.SocketId", socket_id, 0x0, 0x0, false, 0x62a1f67af1803bb4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_DATA.ChannelId", channel_id, 0x0, 0x0, false, 0xb74dbab1e489bff3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_DATA.DimmSlot", dimm_slot, 0x0, 0x0, false, 0x1381e053d6373dd4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_DATA.CorrectableErrorCount", correctable_error_count, 0x0, 0x0, false, 0x3618afff0c12cd4b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif