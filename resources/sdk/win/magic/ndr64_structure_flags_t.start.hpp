#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_STRUCTURE_FLAGS.HasPointerInfo", has_pointer_info, 0x0, 0x1, true, 0x3b6d64ea84660d9c, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_STRUCTURE_FLAGS.HasMemberInfo", has_member_info, 0x1, 0x1, true, 0xcc1141d95dcd3940, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_STRUCTURE_FLAGS.HasConfArray", has_conf_array, 0x2, 0x1, true, 0x26220fcb1521f9ff, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_STRUCTURE_FLAGS.HasOrigPointerInfo", has_orig_pointer_info, 0x3, 0x1, true, 0x6c35681cd8e5af03, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_STRUCTURE_FLAGS.HasOrigMemberInfo", has_orig_member_info, 0x4, 0x1, true, 0xef7ba203979ef74, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif