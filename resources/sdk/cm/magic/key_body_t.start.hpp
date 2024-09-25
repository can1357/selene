#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_BODY.Type", type, 0x0, 0x20, true, 0x6b9356c0e7246f62)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_KEY_BODY.KeyControlBlock", key_control_block, 0x40, 0x40, true, 0x6e2b6d702c3e842e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::notify_block_t*), "_CM_KEY_BODY.NotifyBlock", notify_block, 0x80, 0x40, true, 0xda4b57bbaf5790f7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_KEY_BODY.ProcessID", process_id, 0xc0, 0x40, true, 0xeaaba0a6006e790b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KEY_BODY.KeyBodyList", key_body_list, 0x100, 0x80, true, 0x763c61e2dce33ccd)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_CM_KEY_BODY.Flags", flags, 0x180, 0x10, true, 0xcbdffa95b874d01a, 16, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_CM_KEY_BODY.HandleTags", handle_tags, 0x190, 0x10, true, 0x19eb8bae20fc6b84, 16, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union cm::trans_ptr_t), "_CM_KEY_BODY.Trans", trans, 0x1c0, 0x40, true, 0x62b3715a60f615f0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_CM_KEY_BODY.KtmUow", ktm_uow, 0x200, 0x40, true, 0x49d36a0597b154ef)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CM_KEY_BODY.ContextListHead", context_list_head, 0x240, 0x80, true, 0x9a38c9b97f0052c9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_KEY_BODY.EnumerationResumeContext", enumeration_resume_context, 0x2c0, 0x40, true, 0xcd1fdadd809c71ed)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_BODY.RestrictedAccessMask", restricted_access_mask, 0x300, 0x20, true, 0x719aef3f4cef9e74)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_BODY.LastSearchedIndex", last_searched_index, 0x0, 0x0, false, 0xe41543fb3db93133)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CM_KEY_BODY.LockedMemoryMdls", locked_memory_mdls, 0x0, 0x0, false, 0x304813b696a92f81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif