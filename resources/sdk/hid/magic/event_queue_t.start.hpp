#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union hid::event_t, 16>), "_EVENT_QUEUE.Events", events, 0x0, 0x0, true, 0xa164ff7828a2181)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_QUEUE.QueueHead", queue_head, 0x200, 0x8, true, 0x80ef4c50a3167d50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_QUEUE.QueueTail", queue_tail, 0x208, 0x8, true, 0xd775ac88f92b6cb5)
#else
#define _m00
#define _m01
#define _m02
#endif