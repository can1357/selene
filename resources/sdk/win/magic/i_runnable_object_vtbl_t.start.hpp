#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_runnable_object_t*, const struct nt::guid_t*, void**)>*), "IRunnableObjectVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xb1cfc1ea48c27259)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_runnable_object_t*)>*), "IRunnableObjectVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x16598012976f326e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_runnable_object_t*)>*), "IRunnableObjectVtbl.Release", release, 0x80, 0x40, true, 0xcfc237ba24f6a490)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_runnable_object_t*, struct nt::guid_t*)>*), "IRunnableObjectVtbl.GetRunningClass", get_running_class, 0xc0, 0x40, true, 0xd8557627b6805574)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_runnable_object_t*, struct win::i_bind_ctx_t*)>*), "IRunnableObjectVtbl.Run", run, 0x100, 0x40, true, 0xa0958dfb8f1c3a32)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct win::i_runnable_object_t*)>*), "IRunnableObjectVtbl.IsRunning", is_running, 0x140, 0x40, true, 0xd28454c3a96a395b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_runnable_object_t*, int32_t, int32_t)>*), "IRunnableObjectVtbl.LockRunning", lock_running, 0x180, 0x40, true, 0x904bbe05121744fb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_runnable_object_t*, int32_t)>*), "IRunnableObjectVtbl.SetContainedObject", set_contained_object, 0x1c0, 0x40, true, 0x261cc66b834eb651)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif