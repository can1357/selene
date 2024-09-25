#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NVCACHE_PRIORITY_LEVEL_DESCRIPTOR.PriorityLevel", priority_level, 0x0, 0x8, true, 0x3e60eaeb157784b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_PRIORITY_LEVEL_DESCRIPTOR.ConsumedNVMSizeFraction", consumed_nvm_size_fraction, 0x20, 0x20, true, 0xf235b1d582391ff1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_PRIORITY_LEVEL_DESCRIPTOR.ConsumedMappingResourcesFraction", consumed_mapping_resources_fraction, 0x40, 0x20, true, 0x442f8076feaeb231)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_PRIORITY_LEVEL_DESCRIPTOR.ConsumedNVMSizeForDirtyDataFraction", consumed_nvm_size_for_dirty_data_fraction, 0x60, 0x20, true, 0x310bd7d7a2985477)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_PRIORITY_LEVEL_DESCRIPTOR.ConsumedMappingResourcesForDirtyDataFraction", consumed_mapping_resources_for_dirty_data_fraction, 0x80, 0x20, true, 0x29c2443fda6c96b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif