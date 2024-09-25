#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_PNP_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x3d02ae4f9e672057)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_NDIS_MINIPORT_PNP_CHARACTERISTICS.MiniportAddDeviceHandler", miniport_add_device_handler, 0x40, 0x40, true, 0xbcdf1a4ecb017155)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_PNP_CHARACTERISTICS.MiniportRemoveDeviceHandler", miniport_remove_device_handler, 0x80, 0x40, true, 0x6534271336eccc8a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::irp_t*)>*), "_NDIS_MINIPORT_PNP_CHARACTERISTICS.MiniportFilterResourceRequirementsHandler", miniport_filter_resource_requirements_handler, 0xc0, 0x40, true, 0xaf172fd30b57c89)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::irp_t*)>*), "_NDIS_MINIPORT_PNP_CHARACTERISTICS.MiniportStartDeviceHandler", miniport_start_device_handler, 0x100, 0x40, true, 0x99f326335d46c6ba)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_PNP_CHARACTERISTICS.Flags", flags, 0x140, 0x20, true, 0x70b58e43eae37ea5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif