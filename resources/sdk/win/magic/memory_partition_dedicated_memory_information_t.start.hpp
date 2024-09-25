#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x0, false, 0x5d857608394e287d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION.SizeOfInformation", size_of_information, 0x0, 0x0, false, 0x1cc17974fb75ee71)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION.Flags", flags, 0x0, 0x0, false, 0xa14d1098a28a0fc8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION.AttributesOffset", attributes_offset, 0x0, 0x0, false, 0xe930146cbf90a26b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION.AttributeCount", attribute_count, 0x0, 0x0, false, 0xaf9ee943219dc4c9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION.TypeId", type_id, 0x0, 0x0, false, 0x19be86dbbd3ff3dc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif