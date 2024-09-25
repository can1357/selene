#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t), "SActivatableClassIdHashNode.chain", chain, 0x0, 0x80, true, 0xe32dc20842154a3e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "SActivatableClassIdHashNode.activatableClassId", activatable_class_id, 0x80, 0x40, true, 0x5fa143a3b9043c54)
#else
#define _m00
#define _m01
#endif