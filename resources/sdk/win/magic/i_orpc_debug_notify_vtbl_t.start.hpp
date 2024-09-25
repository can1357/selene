#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_orpc_debug_notify_t*, const struct nt::guid_t const*, void**)>*), "IOrpcDebugNotifyVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xf432852b7594dfee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_orpc_debug_notify_t*)>*), "IOrpcDebugNotifyVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x3c9573b842aee66a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_orpc_debug_notify_t*)>*), "IOrpcDebugNotifyVtbl.Release", release, 0x80, 0x40, true, 0xabfd156d73e4da87)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*), "IOrpcDebugNotifyVtbl.ClientGetBufferSize", client_get_buffer_size, 0xc0, 0x40, true, 0xbf04c664715d80b7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*), "IOrpcDebugNotifyVtbl.ClientFillBuffer", client_fill_buffer, 0x100, 0x40, true, 0xe9767e52424dc72b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*), "IOrpcDebugNotifyVtbl.ClientNotify", client_notify, 0x140, 0x40, true, 0x7d9fb324855f448d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*), "IOrpcDebugNotifyVtbl.ServerNotify", server_notify, 0x180, 0x40, true, 0x56b354b80f93c779)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*), "IOrpcDebugNotifyVtbl.ServerGetBufferSize", server_get_buffer_size, 0x1c0, 0x40, true, 0x3bc6ac26d55851f6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*), "IOrpcDebugNotifyVtbl.ServerFillBuffer", server_fill_buffer, 0x200, 0x40, true, 0x773452b0c1adae55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif