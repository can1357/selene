#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_string_hash_node_t), "MIDEntry._Node", node, 0x0, 0x0, true, 0xb8d6f7cc3eaafcc4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "MIDEntry._mid", mid, 0x100, 0x40, true, 0xad47be6ebef9edc2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MIDEntry._cRefs", c_refs, 0x140, 0x20, true, 0xc444aef7816128ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MIDEntry._dwFlags", dw_flags, 0x0, 0x0, false, 0xd17c2db3bf4bf304)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif