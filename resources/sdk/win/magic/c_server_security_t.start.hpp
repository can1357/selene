#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CServerSecurity._iRefCount", i_ref_count, 0x180, 0x20, true, 0x2a153d475412b572)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CServerSecurity._iFlags", i_flags, 0x1a0, 0x20, true, 0x2824a80ce29adcfd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_channel_handle_t*), "CServerSecurity._pHandle", p_handle, 0x1c0, 0x40, true, 0xe1064d09bbb9e05)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CServerSecurity._hRpc", h_rpc, 0x200, 0x40, true, 0x6c0c65d596235342)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_message_call_t*), "CServerSecurity._pClientCall", p_client_call, 0x240, 0x40, true, 0x39776ac934e9e636)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CServerSecurity._hSaved", h_saved, 0x280, 0x40, true, 0xdca840b6ff3c721c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::com_call_locality_t), "CServerSecurity._callLocality", call_locality, 0x300, 0x20, true, 0xbfd1be605e4a7186)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif