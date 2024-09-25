#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_VIDPN_SERIALIZATION.Size", size, 0x0, 0x20, true, 0x51244af11778b5ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_VIDPN_SERIALIZATION.NumActiveSources", num_active_sources, 0x20, 0x8, true, 0x369b9e1be4d5f997)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DMM_VIDPN_SERIALIZATION.PathsFromSourceSerializationOffsets", paths_from_source_serialization_offsets, 0x40, 0x20, true, 0x3899bff9d73190cf)
#else
#define _m00
#define _m01
#define _m02
#endif