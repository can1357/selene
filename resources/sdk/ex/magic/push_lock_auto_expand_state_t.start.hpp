#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_PUSH_LOCK_AUTO_EXPAND_STATE.Expanded", expanded, 0x0, 0x1, true, 0xc1b251f855c81c93, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_PUSH_LOCK_AUTO_EXPAND_STATE.Transitioning", transitioning, 0x1, 0x1, true, 0xb81e12e6a8252944, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_PUSH_LOCK_AUTO_EXPAND_STATE.Pageable", pageable, 0x2, 0x1, true, 0x2b38aa88bb37d313, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_PUSH_LOCK_AUTO_EXPAND_STATE.Value", value, 0x0, 0x20, true, 0x754b01e7ea846e02)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif