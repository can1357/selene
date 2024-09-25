#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::s_hook_list_t*), "SHookList.pNext", p_next, 0x0, 0x40, true, 0x26a4695c6a1a3172)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_channel_hook_t*), "SHookList.pHook", p_hook, 0x40, 0x40, true, 0x25795233373eb07a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "SHookList.uExtension", u_extension, 0x80, 0x80, true, 0x965a80f404afe5ec)
#else
#define _m00
#define _m01
#define _m02
#endif