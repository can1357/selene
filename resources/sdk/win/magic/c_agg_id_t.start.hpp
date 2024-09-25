#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAggId._cRefs", c_refs, 0x40, 0x20, true, 0x8448a9931cbb0f84)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CAggId._punkInner", punk_inner, 0x80, 0x40, true, 0xbe13cc9e6c19196f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_marshal_t*), "CAggId._pmshInner", pmsh_inner, 0xc0, 0x40, true, 0x5402f4f44922ff97)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CAggId._pStdId", p_std_id, 0x100, 0x40, true, 0x6ee5839027cc3ebd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::effective_unmarshaling_policy_t), "CAggId._policy", policy, 0x140, 0x20, true, 0xa6d4b7d85137c59d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif