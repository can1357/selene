#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_channel_wrapper_t*, const struct nt::guid_t&, void**)>*), "IChannelWrapperVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x847f4d7ded83f283)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_channel_wrapper_t*)>*), "IChannelWrapperVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x8e21ff6e41645e96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_channel_wrapper_t*)>*), "IChannelWrapperVtbl.Release", release, 0x80, 0x40, true, 0xb1515c4c8236c79e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_channel_wrapper_t*, const struct nt::guid_t&, void**)>*), "IChannelWrapperVtbl.GetWrappedChannel", get_wrapped_channel, 0xc0, 0x40, true, 0x59e9d00b4cc480e4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif