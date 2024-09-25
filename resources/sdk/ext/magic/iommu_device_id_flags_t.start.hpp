#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXT_IOMMU_DEVICE_ID_FLAGS.AsUSHORT", as_ushort, 0x0, 0x0, false, 0xe39576171a542d59)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_DEVICE_ID_FLAGS.IsAliased", is_aliased, 0x0, 0x0, false, 0x5ea7fd399578228f, 1, uint16_t)
#else
#define _m00
#define _m01
#endif