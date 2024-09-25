#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_DESCRIPTOR.Id", id, 0x0, 0x10, true, 0xee109025c2f29d8c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_DESCRIPTOR.Version", version, 0x10, 0x8, true, 0x5586e066b097150a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_DESCRIPTOR.Channel", channel, 0x18, 0x8, true, 0xb35ada11bf15ebe0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_DESCRIPTOR.Level", level, 0x20, 0x8, true, 0x3f4dae57361c1357)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_DESCRIPTOR.Opcode", opcode, 0x28, 0x8, true, 0x511711829a0d411d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_DESCRIPTOR.Task", task, 0x30, 0x10, true, 0xa61910ca8929c79f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_DESCRIPTOR.Keyword", keyword, 0x40, 0x40, true, 0xfe07dc589accea5b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif