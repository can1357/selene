#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgCredentials_KdcProxySettingsW.Version", version, 0x0, 0x20, true, 0x6bb15df0a022e353)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgCredentials_KdcProxySettingsW.Flags", flags, 0x20, 0x20, true, 0x32c82f9540f2da29)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgCredentials_KdcProxySettingsW.ProxyServerOffset", proxy_server_offset, 0x40, 0x10, true, 0x1b4ff76a7f978256)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgCredentials_KdcProxySettingsW.ProxyServerLength", proxy_server_length, 0x50, 0x10, true, 0xc6d7dbccbe5527f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgCredentials_KdcProxySettingsW.ClientTlsCredOffset", client_tls_cred_offset, 0x60, 0x10, true, 0x23e3adf7cf9cc1c8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgCredentials_KdcProxySettingsW.ClientTlsCredLength", client_tls_cred_length, 0x70, 0x10, true, 0x5a44e2e4aad1cf4c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif