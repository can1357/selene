#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_DECAY_TIMER_LINK.Long", _long, 0x0, 0x40, true, 0xa4b77c3679d5f84a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::decay_timer_linkage_t), "_MI_DECAY_TIMER_LINK.e1", e1, 0x0, 0x40, true, 0x863c9e8bfa1dc7e1)
#else
#define _m00
#define _m01
#endif