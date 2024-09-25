#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x116c27123e87b351)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x36494ab856abf0c7)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.ThinProvisioningEnabled", thin_provisioning_enabled, 0x40, 0x1, true, 0x9cd4aebc746f5a08, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.ThinProvisioningReadZeros", thin_provisioning_read_zeros, 0x41, 0x1, true, 0xeb19f2b2e495084f, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.AnchorSupported", anchor_supported, 0x42, 0x3, true, 0xe9293219c68c3613, 3, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.UnmapGranularityAlignmentValid", unmap_granularity_alignment_valid, 0x45, 0x1, true, 0x9496e6fa2a87b0ed, 1, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.OptimalUnmapGranularity", optimal_unmap_granularity, 0x80, 0x40, true, 0xa7c61854fd833093)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.UnmapGranularityAlignment", unmap_granularity_alignment, 0xc0, 0x40, true, 0x1208d982c2856546)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.MaxUnmapLbaCount", max_unmap_lba_count, 0x100, 0x20, true, 0x73bbdad4574ad6fc)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LB_PROVISIONING_DESCRIPTOR.MaxUnmapBlockDescriptorCount", max_unmap_block_descriptor_count, 0x120, 0x20, true, 0xe6872aea1797dde)
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
#endif