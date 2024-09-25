#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALGPUENGINEINFO.MinPartitionUnits", min_partition_units, 0x0, 0x20, true, 0x3b6c02038d0ead12)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALGPUENGINEINFO.MaxPartitionUnits", max_partition_units, 0x20, 0x20, true, 0xe79eb3154db45338)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALGPUENGINEINFO.EngineId", engine_id, 0x40, 0x20, true, 0xb4ff9498b7a0edfe)
#else
#define _m00
#define _m01
#define _m02
#endif