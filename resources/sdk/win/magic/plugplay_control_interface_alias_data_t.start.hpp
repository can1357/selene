#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_INTERFACE_ALIAS_DATA.SymbolicLinkName", symbolic_link_name, 0x0, 0x80, true, 0xb002c952faa4303)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_PLUGPLAY_CONTROL_INTERFACE_ALIAS_DATA.AliasClassGuid", alias_class_guid, 0x80, 0x40, true, 0xe2339ae66994ed78)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_INTERFACE_ALIAS_DATA.AliasSymbolicLinkName", alias_symbolic_link_name, 0xc0, 0x40, true, 0x52442028788de34f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_INTERFACE_ALIAS_DATA.AliasSymbolicLinkNameLength", alias_symbolic_link_name_length, 0x100, 0x20, true, 0x434ce2fc64a9b177)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif