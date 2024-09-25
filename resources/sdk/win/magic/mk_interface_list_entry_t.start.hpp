#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::interface_data_t*), "_MkInterfaceListEntry.pIFD", p_ifd, 0x0, 0x40, true, 0x9a03482c646379c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MkInterfaceListEntry.fRegisteredByAppContainer", f_registered_by_app_container, 0x40, 0x20, true, 0xd0f82ab50a7100ef)
#else
#define _m00
#define _m01
#endif