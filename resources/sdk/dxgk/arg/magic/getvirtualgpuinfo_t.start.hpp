#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETVIRTUALGPUINFO.PartitionId", partition_id, 0x0, 0x20, true, 0xf3587ecea0e7d762)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::vgpu_capability_t, 4>), "_DXGKARG_GETVIRTUALGPUINFO.Capability", capability, 0x40, 0x0, true, 0x936d70bc2f575e01)
#else
#define _m00
#define _m01
#endif