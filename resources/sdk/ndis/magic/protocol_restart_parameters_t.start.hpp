#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PROTOCOL_RESTART_PARAMETERS.Header", header, 0x0, 0x20, true, 0x1866b9a4c4d76225)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_PROTOCOL_RESTART_PARAMETERS.FilterModuleNameBuffer", filter_module_name_buffer, 0x40, 0x40, true, 0xebf9a44d7c306b0c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_RESTART_PARAMETERS.FilterModuleNameBufferLength", filter_module_name_buffer_length, 0x80, 0x20, true, 0x36eaf52e53c868)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::restart_attributes_t*), "_NDIS_PROTOCOL_RESTART_PARAMETERS.RestartAttributes", restart_attributes, 0xc0, 0x40, true, 0x4e94ff0a7509b580)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_RESTART_PARAMETERS.BoundIfIndex", bound_if_index, 0x100, 0x20, true, 0x69c1a84dca3b139a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_PROTOCOL_RESTART_PARAMETERS.BoundIfNetluid", bound_if_netluid, 0x140, 0x40, true, 0x7f4c04fb03d6c682)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_RESTART_PARAMETERS.Flags", flags, 0x180, 0x20, true, 0x857b985489364bff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif