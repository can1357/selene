#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_NOTIFY_BLOCK.HiveList", hive_list, 0x0, 0x80, true, 0xa885e043ce8d66aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_NOTIFY_BLOCK.PostList", post_list, 0x80, 0x80, true, 0x9e0960fdde9991ef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_NOTIFY_BLOCK.KeyControlBlock", key_control_block, 0x100, 0x40, true, 0x6cb9aa925449a70a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_body_t*), "_CM_NOTIFY_BLOCK.KeyBody", key_body, 0x140, 0x40, true, 0x646a4ef2f18d951a)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_CM_NOTIFY_BLOCK.Filter", filter, 0x180, 0x1e, true, 0x9bd691ba12a0fb7f, 30, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_NOTIFY_BLOCK.WatchTree", watch_tree, 0x19e, 0x1, true, 0x30b1554e15fe3689, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CM_NOTIFY_BLOCK.NotifyPending", notify_pending, 0x19f, 0x1, true, 0x5d113e09bf15201a, 1, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::subject_context_t), "_CM_NOTIFY_BLOCK.SubjectContext", subject_context, 0x1c0, 0x0, true, 0xc0abbd0f065717fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif