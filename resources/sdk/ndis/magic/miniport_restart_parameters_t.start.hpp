#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_RESTART_PARAMETERS.Header", header, 0x0, 0x20, true, 0x580777ca90934795)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::restart_attributes_t*), "_NDIS_MINIPORT_RESTART_PARAMETERS.RestartAttributes", restart_attributes, 0x40, 0x40, true, 0x50ec15eae621138a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_RESTART_PARAMETERS.Flags", flags, 0x80, 0x20, true, 0x58d105d4b1c26af2)
#else
#define _m00
#define _m01
#define _m02
#endif