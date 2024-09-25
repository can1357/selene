#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_PAYLOAD_PREDICATE.FieldIndex", field_index, 0x0, 0x10, true, 0x991a18ac047cfbae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_PAYLOAD_PREDICATE.CompareOp", compare_op, 0x10, 0x10, true, 0x13580c85474f8aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_EVENT_PAYLOAD_PREDICATE.Value", value, 0x40, 0x80, true, 0xd9216b908b7c4e98)
#else
#define _m00
#define _m01
#define _m02
#endif