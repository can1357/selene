#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPLOCK_KEY_CONTEXT.Version", version, 0x0, 0x10, true, 0x7c1f869f2f23c67e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPLOCK_KEY_CONTEXT.Flags", flags, 0x10, 0x10, true, 0xe402e0648ddd2131)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_OPLOCK_KEY_CONTEXT.ParentOplockKey", parent_oplock_key, 0x20, 0x80, true, 0xc4823ec573a05567)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_OPLOCK_KEY_CONTEXT.TargetOplockKey", target_oplock_key, 0xa0, 0x80, true, 0x33848997efe3fc48)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif