#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "SAVE_NDRSLOT.pOldSlotValue", p_old_slot_value, 0x0, 0x40, true, 0x896838611488e8bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SAVE_NDRSLOT.fSucceededInSet", f_succeeded_in_set, 0x40, 0x8, true, 0x6c4b73d5dc2a821e)
#else
#define _m00
#define _m01
#endif