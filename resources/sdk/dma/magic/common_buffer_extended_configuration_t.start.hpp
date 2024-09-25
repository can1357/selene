#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::common_buffer_extended_configuration_type_t), "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.ConfigType", config_type, 0x0, 0x0, false, 0x348e457e074671d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.LogicalAddressLimits.MinimumAddress", minimum_address, 0x0, 0x0, false, 0xca9b09b00cc41646)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.LogicalAddressLimits.MaximumAddress", maximum_address, 0x0, 0x0, false, 0x24b956848289540d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_logical_address_limits_t), "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.LogicalAddressLimits", logical_address_limits, 0x0, 0x0, false, 0xee13a0ec47d2de30)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.SubSection.Offset", offset, 0x0, 0x0, false, 0xcde748ed891c5f76)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.SubSection.Length", length, 0x0, 0x0, false, 0x60db7c8ecabdd521)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_sub_section_t), "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.SubSection", sub_section, 0x0, 0x0, false, 0x254374bf4b7c531d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::common_buffer_extended_configuration_access_type_t), "_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION.HardwareAccessType", hardware_access_type, 0x0, 0x0, false, 0xf4d062fb7b259392)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif