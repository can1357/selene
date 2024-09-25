#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union hid::event_t), "_STATE_LOG.Event", event, 0x0, 0x20, true, 0x3e7ac3a6b0b05753)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union hid::state_t), "_STATE_LOG.State", state, 0x20, 0x20, true, 0xb2f7d7ccbe9a7254)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STATE_LOG.Depth", depth, 0x40, 0x20, true, 0x20e9d1558fddc5d9)
#else
#define _m00
#define _m01
#define _m02
#endif