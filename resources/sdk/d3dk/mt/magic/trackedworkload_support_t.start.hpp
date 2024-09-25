#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_TRACKEDWORKLOAD_SUPPORT.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0x95e9a93cc97a6483)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_engine_type_t), "_D3DKMT_TRACKEDWORKLOAD_SUPPORT.EngineType", engine_type, 0x20, 0x20, true, 0xe035b32d1b6fa648)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_TRACKEDWORKLOAD_SUPPORT.Support", support, 0x40, 0x20, true, 0xf2b815c5543fbbed)
#else
#define _m00
#define _m01
#define _m02
#endif