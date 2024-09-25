#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ALLOCATION_STATE.Start", start, 0x0, 0x40, true, 0x908ed586f9788d2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ALLOCATION_STATE.End", end, 0x40, 0x40, true, 0x50837ac728259f08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ALLOCATION_STATE.CurrentMinimum", current_minimum, 0x80, 0x40, true, 0x8a578a0c275d2d0c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ALLOCATION_STATE.CurrentMaximum", current_maximum, 0xc0, 0x40, true, 0x785719d5dcf829ee)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::list_entry_t*), "_ARBITER_ALLOCATION_STATE.Entry", entry, 0x100, 0x40, true, 0x5700c0115c37387a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::alternative_t*), "_ARBITER_ALLOCATION_STATE.CurrentAlternative", current_alternative, 0x140, 0x40, true, 0x92e5c85532835ce0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARBITER_ALLOCATION_STATE.AlternativeCount", alternative_count, 0x180, 0x20, true, 0x67f99093d0b94c30)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::alternative_t*), "_ARBITER_ALLOCATION_STATE.Alternatives", alternatives, 0x1c0, 0x40, true, 0x729ad707cab922e2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ARBITER_ALLOCATION_STATE.Flags", flags, 0x200, 0x10, true, 0xca8e158b0a84123)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ARBITER_ALLOCATION_STATE.RangeAttributes", range_attributes, 0x210, 0x8, true, 0xa07f35e84ef3f51)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ARBITER_ALLOCATION_STATE.RangeAvailableAttributes", range_available_attributes, 0x218, 0x8, true, 0xffc213cb482c0219)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ALLOCATION_STATE.WorkSpace", work_space, 0x240, 0x40, true, 0xec3726ec23bc15ac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif