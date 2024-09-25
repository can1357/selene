#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_COFUNCPATHSMODALITY_SERIALIZATION.NumPathsFromSource", num_paths_from_source, 0x0, 0x8, true, 0x1717e2a28b582540)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DMM_COFUNCPATHSMODALITY_SERIALIZATION.PathAndTargetModeSetOffset", path_and_target_mode_set_offset, 0x20, 0x20, true, 0x1f611f828767af6b)
#else
#define _m00
#define _m01
#endif