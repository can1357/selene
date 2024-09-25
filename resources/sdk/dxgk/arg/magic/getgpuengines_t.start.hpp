#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETGPUENGINES.NumEngines", num_engines, 0x0, 0x20, true, 0xf151b3f0d9c8f617)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::gpuengine_t, 1>), "_DXGKARG_GETGPUENGINES.EngineInfo", engine_info, 0x20, 0x40, true, 0xe17e02968bdb1791)
#else
#define _m00
#define _m01
#endif