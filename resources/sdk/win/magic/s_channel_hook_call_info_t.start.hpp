#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "SChannelHookCallInfo.iid", iid, 0x0, 0x80, true, 0x7985df9c541ba6dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SChannelHookCallInfo.cbSize", cb_size, 0x80, 0x20, true, 0xc209afb67c84cb6e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "SChannelHookCallInfo.uCausality", u_causality, 0xa0, 0x80, true, 0xfda84fca7bedcf17)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SChannelHookCallInfo.dwServerPid", dw_server_pid, 0x120, 0x20, true, 0xd221a2c5c643ac01)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SChannelHookCallInfo.iMethod", i_method, 0x140, 0x20, true, 0x6b83360b8dab2a91)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "SChannelHookCallInfo.pObject", p_object, 0x180, 0x40, true, 0x6ce2ba4c3ab10c0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif