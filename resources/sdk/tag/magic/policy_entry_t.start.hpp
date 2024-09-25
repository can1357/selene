#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::policy_entry_t*), "tagPolicyEntry.pNext", p_next, 0x0, 0x40, true, 0x6fad8b87edb3a63e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::policy_entry_t*), "tagPolicyEntry.pPrev", p_prev, 0x40, 0x40, true, 0x28e195f4d0e5f3cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPolicyEntry.ctxEvent", ctx_event, 0x80, 0x20, true, 0x10104d80bacbabf2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_policy_t*), "tagPolicyEntry.pPolicy", p_policy, 0xc0, 0x40, true, 0x4576b92d901c8b08)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagPolicyEntry.policyID", policy_id, 0x100, 0x80, true, 0x345b012f1ed7da08)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif