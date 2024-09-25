#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGEFILE_METADATA_LAYOUT.EntryInBytes", entry_in_bytes, 0x0, 0x0, false, 0x3ac7413afc1f8f85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGEFILE_METADATA_LAYOUT.OwningPteOffset", owning_pte_offset, 0x0, 0x0, false, 0xcdd31f8e6b58807d)
#else
#define _m00
#define _m01
#endif