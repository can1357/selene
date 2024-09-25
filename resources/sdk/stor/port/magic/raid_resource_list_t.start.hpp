#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_RAID_RESOURCE_LIST.AllocatedResources", allocated_resources, 0x0, 0x40, true, 0xde7ca7ea5ca4cb96)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_RAID_RESOURCE_LIST.TranslatedResources", translated_resources, 0x40, 0x40, true, 0x4461337dd12a99d6)
#else
#define _m00
#define _m01
#endif