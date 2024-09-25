#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WSK_PROVIDER_DISPATCH.Version", version, 0x0, 0x10, true, 0xa8a5a17189590b5d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wsk_socket_t ), "_WSK_PROVIDER_DISPATCH.WskSocket", wsk_socket, 0x40, 0x40, true, 0xd2294b44da84cb2d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wsk_socket_connect_t ), "_WSK_PROVIDER_DISPATCH.WskSocketConnect", wsk_socket_connect, 0x80, 0x40, true, 0x5a1e17683a494023)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wsk_control_client_t ), "_WSK_PROVIDER_DISPATCH.WskControlClient", wsk_control_client, 0xc0, 0x40, true, 0x608060b7245e831e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wsk_get_address_info_t ), "_WSK_PROVIDER_DISPATCH.WskGetAddressInfo", wsk_get_address_info, 0x100, 0x40, true, 0x3f57ee0ad97a5019)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wsk_free_address_info_t ), "_WSK_PROVIDER_DISPATCH.WskFreeAddressInfo", wsk_free_address_info, 0x140, 0x40, true, 0x9a816f6f61773809)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wsk_get_name_info_t ), "_WSK_PROVIDER_DISPATCH.WskGetNameInfo", wsk_get_name_info, 0x180, 0x40, true, 0x3818a2454d72ca36)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif