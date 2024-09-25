#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union wdf::virtual_resource_capability_t), "_VIRTUAL_RESOURCE.Capability", capability, 0x0, 0x20, true, 0xbec547217be97c32)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union wdf::virtual_resource_control_t), "_VIRTUAL_RESOURCE.Control", control, 0x20, 0x20, true, 0x1e9d34ac73345036)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIRTUAL_RESOURCE.RsvdP", rsvd_p, 0x40, 0x10, true, 0x7c2821d26d69056f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union wdf::virtual_resource_status_t), "_VIRTUAL_RESOURCE.Status", status, 0x50, 0x10, true, 0xe6e5eaf1213d3168)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif