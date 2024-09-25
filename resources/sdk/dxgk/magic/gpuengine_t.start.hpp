#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_engine_type_t), "_DXGK_GPUENGINE.EngineType", engine_type, 0x0, 0x20, true, 0x205e524c75e11542)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_DXGK_GPUENGINE.Name", name, 0x20, 0x0, true, 0x4d7ca7c5c1260469)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GPUENGINE.NumPartitionUnits", num_partition_units, 0x220, 0x20, true, 0x6f54514dec41f569)
#else
#define _m00
#define _m01
#define _m02
#endif