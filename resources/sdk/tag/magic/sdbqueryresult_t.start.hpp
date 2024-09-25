#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "tagSDBQUERYRESULT.atrExes", atr_exes, 0x0, 0x0, true, 0xbaef3327aabc39f3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "tagSDBQUERYRESULT.adwExeFlags", adw_exe_flags, 0x200, 0x0, true, 0xcaf226d3e7788dba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "tagSDBQUERYRESULT.atrLayers", atr_layers, 0x400, 0x0, true, 0xa1efe2eed1e81d7c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBQUERYRESULT.dwLayerFlags", dw_layer_flags, 0x500, 0x20, true, 0x23b1448edaff2680)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBQUERYRESULT.trAppHelp", tr_app_help, 0x520, 0x20, true, 0xd65821317d695ca4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBQUERYRESULT.dwExeCount", dw_exe_count, 0x540, 0x20, true, 0xc6ae08b9b6f86ecb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBQUERYRESULT.dwLayerCount", dw_layer_count, 0x560, 0x20, true, 0xb6ecb35767392568)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSDBQUERYRESULT.guidID", guid_id, 0x580, 0x80, true, 0x5303591ba95758bd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBQUERYRESULT.dwExtraFlags", dw_extra_flags, 0x600, 0x20, true, 0x9f66ebe14bae7263)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBQUERYRESULT.dwCustomSDBMap", dw_custom_sdb_map, 0x620, 0x20, true, 0x42c0b0267df58fef)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 16>), "tagSDBQUERYRESULT.rgGuidDB", rg_guid_db, 0x640, 0x0, true, 0x900eda4177da6df3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif