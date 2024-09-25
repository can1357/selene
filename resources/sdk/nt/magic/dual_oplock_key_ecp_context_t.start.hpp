#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DUAL_OPLOCK_KEY_ECP_CONTEXT.ParentOplockKey", parent_oplock_key, 0x0, 0x80, true, 0xbe27ce045c4d30bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DUAL_OPLOCK_KEY_ECP_CONTEXT.TargetOplockKey", target_oplock_key, 0x80, 0x80, true, 0x5415f8e0a20d5259)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUAL_OPLOCK_KEY_ECP_CONTEXT.ParentOplockKeySet", parent_oplock_key_set, 0x100, 0x8, true, 0x2da930dbfe5864a6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUAL_OPLOCK_KEY_ECP_CONTEXT.TargetOplockKeySet", target_oplock_key_set, 0x108, 0x8, true, 0x863b7381539d473a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif