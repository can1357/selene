#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS.SocketId", socket_id, 0x0, 0x0, false, 0xd766490dd6055f73, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS.ChannelId", channel_id, 0x0, 0x0, false, 0x9463a1da60514470, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS.DimmSlot", dimm_slot, 0x0, 0x0, false, 0x146bc8889bb87ce0, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS.CorrectableErrorCount", correctable_error_count, 0x0, 0x0, false, 0xb4b33f6eba5a92d, 1, uint64_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS.ValidBits", valid_bits, 0x0, 0x0, false, 0x973e6f6a908647f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif