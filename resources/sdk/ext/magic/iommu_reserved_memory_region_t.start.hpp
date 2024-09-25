#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EXT_IOMMU_RESERVED_MEMORY_REGION.Base", base, 0x0, 0x0, false, 0xb5d1db3c89f19ada)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EXT_IOMMU_RESERVED_MEMORY_REGION.Limit", limit, 0x0, 0x0, false, 0x9310c2c387a502da)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXT_IOMMU_RESERVED_MEMORY_REGION.Ignored", ignored, 0x0, 0x0, false, 0xf853dceefacb563a)
#else
#define _m00
#define _m01
#define _m02
#endif