#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_HD_SPLIT_CURRENT_CONFIG.Header", header, 0x0, 0x20, true, 0xea1748f5c57ea112)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_CURRENT_CONFIG.HardwareCapabilities", hardware_capabilities, 0x20, 0x20, true, 0xa04b8d8939809f5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_CURRENT_CONFIG.CurrentCapabilities", current_capabilities, 0x40, 0x20, true, 0x775c90c02566c552)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_CURRENT_CONFIG.HDSplitFlags", hd_split_flags, 0x60, 0x20, true, 0x46552f975cd21953)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_CURRENT_CONFIG.HDSplitCombineFlags", hd_split_combine_flags, 0x80, 0x20, true, 0xc24161aa8fc8564e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_CURRENT_CONFIG.BackfillSize", backfill_size, 0xa0, 0x20, true, 0xc8d0f1d566969375)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_CURRENT_CONFIG.MaxHeaderSize", max_header_size, 0xc0, 0x20, true, 0xe200167331573c0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif