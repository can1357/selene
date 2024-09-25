#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_rpc_channel_buffer_vtbl_t*), "tagChannelWrapper.lpVtbl", lp_vtbl, 0x0, 0x40, true, 0xac0209bad56e5337)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagChannelWrapper.RefCount", ref_count, 0x40, 0x20, true, 0xd6ea4de81ef328ea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagChannelWrapper.pIID", p_iid, 0x80, 0x40, true, 0x3bb1c72359115830)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_channel_buffer_t*), "tagChannelWrapper.pChannel", p_channel, 0xc0, 0x40, true, 0x835b338f2faf4284)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_channel_wrapper_vtbl_t*), "tagChannelWrapper.pChannelWrapperVtbl", p_channel_wrapper_vtbl, 0x100, 0x40, true, 0x7ae2c6e378d571ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif