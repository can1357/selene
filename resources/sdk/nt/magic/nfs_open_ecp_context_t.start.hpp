#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NFS_OPEN_ECP_CONTEXT.ExportAlias", export_alias, 0x0, 0x40, true, 0x75e260d193902046)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sockaddr_storage_t*), "_NFS_OPEN_ECP_CONTEXT.ClientSocketAddress", client_socket_address, 0x40, 0x40, true, 0x7591c65b7713dd48)
#else
#define _m00
#define _m01
#endif