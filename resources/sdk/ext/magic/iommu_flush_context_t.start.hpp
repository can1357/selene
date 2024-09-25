#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXT_IOMMU_FLUSH_CONTEXT.Intel.Status", status, 0x0, 0x0, false, 0x1dde2ee05ec12de6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXT_IOMMU_FLUSH_CONTEXT.Intel.PhysicalAddress", physical_address, 0x0, 0x0, false, 0x3157c9af9ed466fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_intel_t), "_EXT_IOMMU_FLUSH_CONTEXT.Intel", intel, 0x0, 0x0, false, 0x380d7bd24551de2c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_EXT_IOMMU_FLUSH_CONTEXT.Amd.StatusAddr", status_addr, 0x0, 0x0, false, 0x409db08214c97ea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXT_IOMMU_FLUSH_CONTEXT.Amd.OldStatus", old_status, 0x0, 0x0, false, 0x50c7baf3058691bb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_amd_t), "_EXT_IOMMU_FLUSH_CONTEXT.Amd", amd, 0x0, 0x0, false, 0x2d7004081ce7864a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif