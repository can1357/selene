#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "EnsureInValidComThreadAndApartmentInScope._isOleTlsInitialized", is_ole_tls_initialized, 0x0, 0x8, true, 0x181fc495da742a67)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "EnsureInValidComThreadAndApartmentInScope._isComInitializedOnThread", is_com_initialized_on_thread, 0x8, 0x8, true, 0xecd8ddf30a49a2f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "EnsureInValidComThreadAndApartmentInScope._isDispatchThread", is_dispatch_thread, 0x10, 0x8, true, 0x60b66a9ba3e09c1a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "EnsureInValidComThreadAndApartmentInScope._isThreadInNTA", is_thread_in_nta, 0x18, 0x8, true, 0xd2b98987b3bc3d60)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "EnsureInValidComThreadAndApartmentInScope._pSavedCtx", p_saved_ctx, 0x40, 0x40, true, 0x91acf3d7724ebb35)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif