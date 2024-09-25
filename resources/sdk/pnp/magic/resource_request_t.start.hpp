#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PNP_RESOURCE_REQUEST.PhysicalDevice", physical_device, 0x0, 0x40, true, 0x58750735cd7a554)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_RESOURCE_REQUEST.Flags", flags, 0x40, 0x20, true, 0xc017e51f6cb2b3ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum arbiter::request_source_t), "_PNP_RESOURCE_REQUEST.AllocationType", allocation_type, 0x60, 0x20, true, 0xb19b6d1fb1dc76c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_RESOURCE_REQUEST.Priority", priority, 0x80, 0x20, true, 0x6a80bd4811ff080f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_RESOURCE_REQUEST.Position", position, 0xa0, 0x20, true, 0xf149d0f7a2d1aa42)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_requirements_list_t*), "_PNP_RESOURCE_REQUEST.ResourceRequirements", resource_requirements, 0xc0, 0x40, true, 0x8a8ba857defd66aa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PNP_RESOURCE_REQUEST.ReqList", req_list, 0x100, 0x40, true, 0x16eba487f88d2c5b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_PNP_RESOURCE_REQUEST.ResourceAssignment", resource_assignment, 0x140, 0x40, true, 0x7cbf318afd737944)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_PNP_RESOURCE_REQUEST.TranslatedResourceAssignment", translated_resource_assignment, 0x180, 0x40, true, 0xf668a02e501a339e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PNP_RESOURCE_REQUEST.Status", status, 0x1c0, 0x20, true, 0xa35a297520052e91)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif