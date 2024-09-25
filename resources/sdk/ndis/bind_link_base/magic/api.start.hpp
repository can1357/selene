#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NDIS_BIND_LINK_BASE@@QEAA@XZ$ndis.sys", 0x1030c4, 0x0, true, 0xe0ba34ab5bb99889)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NDIS_BIND_LINK_BASE@@QEAA@XZ$ndis.sys", 0x122bd0, 0x0, true, 0xda4e57edf9484e6d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LinkToDriver@NDIS_BIND_LINK_BASE$ndis.sys", 0x1035b4, 0x0, true, 0xa6660ac23cbad59c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif