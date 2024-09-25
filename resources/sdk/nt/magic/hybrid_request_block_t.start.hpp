#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_REQUEST_BLOCK.Version", version, 0x0, 0x20, true, 0x17c56a0a07d04d7e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_REQUEST_BLOCK.Size", size, 0x20, 0x20, true, 0x313dabd300605cf2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_REQUEST_BLOCK.Function", function, 0x40, 0x20, true, 0xe78e048cea2a3fcf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_REQUEST_BLOCK.Flags", flags, 0x60, 0x20, true, 0xbbbf6a786bc2f759)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_REQUEST_BLOCK.DataBufferOffset", data_buffer_offset, 0x80, 0x20, true, 0xba01feaebebd99e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_REQUEST_BLOCK.DataBufferLength", data_buffer_length, 0xa0, 0x20, true, 0x8b3ee7b960f8178a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif