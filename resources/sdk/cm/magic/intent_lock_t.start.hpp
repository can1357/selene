#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_INTENT_LOCK.OwnerCount", owner_count, 0x0, 0x20, true, 0xeeda5f00768f192)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::kcb_uow_t**), "_CM_INTENT_LOCK.OwnerTable", owner_table, 0x40, 0x40, true, 0xb63dc783960d4755)
#else
#define _m00
#define _m01
#endif