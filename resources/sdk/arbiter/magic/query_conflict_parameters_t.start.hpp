#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_ARBITER_QUERY_CONFLICT_PARAMETERS.PhysicalDeviceObject", physical_device_object, 0x0, 0x40, true, 0xe4186779c73fd706)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t*), "_ARBITER_QUERY_CONFLICT_PARAMETERS.ConflictingResource", conflicting_resource, 0x40, 0x40, true, 0xedeeee2fd18b6f25)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_ARBITER_QUERY_CONFLICT_PARAMETERS.ConflictCount", conflict_count, 0x80, 0x40, true, 0x8b37277bbc9da69e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct arbiter::conflict_info_t**), "_ARBITER_QUERY_CONFLICT_PARAMETERS.Conflicts", conflicts, 0xc0, 0x40, true, 0x9e93c505bf8172a8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif