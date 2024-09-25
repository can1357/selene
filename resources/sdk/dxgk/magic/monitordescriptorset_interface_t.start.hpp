#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitordescriptorset_getnumdescriptors_t ), "_DXGK_MONITORDESCRIPTORSET_INTERFACE.pfnGetNumDescriptors", pfn_get_num_descriptors, 0x0, 0x40, true, 0xb4c62ad035e21ada)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitordescriptorset_acquirefirstdescriptorinfo_t ), "_DXGK_MONITORDESCRIPTORSET_INTERFACE.pfnAcquireFirstDescriptorInfo", pfn_acquire_first_descriptor_info, 0x40, 0x40, true, 0xc75e5cd19d00c64c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitordescriptorset_acquirenextdescriptorinfo_t ), "_DXGK_MONITORDESCRIPTORSET_INTERFACE.pfnAcquireNextDescriptorInfo", pfn_acquire_next_descriptor_info, 0x80, 0x40, true, 0x2424410a02afb638)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitordescriptorset_releasedescriptorinfo_t ), "_DXGK_MONITORDESCRIPTORSET_INTERFACE.pfnReleaseDescriptorInfo", pfn_release_descriptor_info, 0xc0, 0x40, true, 0x61043ab8355d5707)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif