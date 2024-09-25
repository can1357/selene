#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION.DedicatedMemoryTypeId", dedicated_memory_type_id, 0x0, 0x0, false, 0xfc2dc7bd4a546b1a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION.HandleAttributes", handle_attributes, 0x0, 0x0, false, 0x9611e70ac923831)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION.DesiredAccess", desired_access, 0x0, 0x0, false, 0xd669fa517c7bbdab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION.DedicatedMemoryPartitionHandle", dedicated_memory_partition_handle, 0x0, 0x0, false, 0x2a2758a6bb7e5ff3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif