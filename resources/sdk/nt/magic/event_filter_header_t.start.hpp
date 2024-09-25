#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_FILTER_HEADER.Id", id, 0x0, 0x10, true, 0x894aac20cc57225f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_FILTER_HEADER.Version", version, 0x10, 0x8, true, 0xea63d47ffae83bff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_FILTER_HEADER.InstanceId", instance_id, 0x40, 0x40, true, 0x5ba76b970c739619)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_FILTER_HEADER.Size", size, 0x80, 0x20, true, 0x28bd37ab9e18b3ed)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_FILTER_HEADER.NextOffset", next_offset, 0xa0, 0x20, true, 0x2f889f6c6274b4d2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif