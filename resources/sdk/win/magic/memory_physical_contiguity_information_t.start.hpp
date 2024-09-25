#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_PHYSICAL_CONTIGUITY_INFORMATION.VirtualAddress", virtual_address, 0x0, 0x40, true, 0x413b69ca60b34ded)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PHYSICAL_CONTIGUITY_INFORMATION.Size", size, 0x40, 0x40, true, 0x321aacf569f147f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PHYSICAL_CONTIGUITY_INFORMATION.ContiguityUnitSize", contiguity_unit_size, 0x80, 0x40, true, 0xb5ac9bcaa5dfe79e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PHYSICAL_CONTIGUITY_INFORMATION.Flags", flags, 0xc0, 0x20, true, 0x83ef19876f4d6e84)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pmemory_physical_contiguity_unit_information_t ), "_MEMORY_PHYSICAL_CONTIGUITY_INFORMATION.ContiguityUnitInformation", contiguity_unit_information, 0x100, 0x40, true, 0x6eb7c7bff393afbd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif