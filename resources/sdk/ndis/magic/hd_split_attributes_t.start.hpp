#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_HD_SPLIT_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x9e1e073a5885c27b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_ATTRIBUTES.HardwareCapabilities", hardware_capabilities, 0x20, 0x20, true, 0x424b83bfcf212f2d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_ATTRIBUTES.CurrentCapabilities", current_capabilities, 0x40, 0x20, true, 0x5aebc747d974181f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_ATTRIBUTES.HDSplitFlags", hd_split_flags, 0x60, 0x20, true, 0xd0bac7df1caeb186)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_ATTRIBUTES.BackfillSize", backfill_size, 0x80, 0x20, true, 0xcd8cc91459141baf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_HD_SPLIT_ATTRIBUTES.MaxHeaderSize", max_header_size, 0xa0, 0x20, true, 0xc3e8ea491fa65344)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif