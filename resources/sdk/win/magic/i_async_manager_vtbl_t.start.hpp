#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_manager_t*, const struct nt::guid_t&, void**)>*), "IAsyncManagerVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x7cd3d0466f23f95a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_async_manager_t*)>*), "IAsyncManagerVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xab90c7ee0645132c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_async_manager_t*)>*), "IAsyncManagerVtbl.Release", release, 0x80, 0x40, true, 0xe3f52a2877c42faf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_manager_t*, sdk::hresult)>*), "IAsyncManagerVtbl.CompleteCall", complete_call, 0xc0, 0x40, true, 0xb5ca431ea7130905)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_manager_t*, const struct nt::guid_t&, void**)>*), "IAsyncManagerVtbl.GetCallContext", get_call_context, 0x100, 0x40, true, 0x8096331f4935dfeb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_manager_t*, uint32_t*)>*), "IAsyncManagerVtbl.GetState", get_state, 0x140, 0x40, true, 0xac7c5d23616cccf8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif