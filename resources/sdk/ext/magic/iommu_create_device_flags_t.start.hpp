#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXT_IOMMU_CREATE_DEVICE_FLAGS.AsUINT32", as_uint32, 0x0, 0x0, false, 0xb587aba4b9227eff)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CREATE_DEVICE_FLAGS.WildCard", wild_card, 0x0, 0x0, false, 0x3db470f8b4a3f338, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CREATE_DEVICE_FLAGS.ForceCreate", force_create, 0x0, 0x0, false, 0x96eaf876cedbda90, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CREATE_DEVICE_FLAGS.LiveTraffic", live_traffic, 0x0, 0x0, false, 0x6fd2e903eea38f36, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif