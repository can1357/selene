#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_OWNER_ENTRY.OwnerThread", owner_thread, 0x0, 0x40, true, 0x750e0dbf6cde513f)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OWNER_ENTRY.IoPriorityBoosted", io_priority_boosted, 0x40, 0x1, true, 0xb0939fbca3d7abcb, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OWNER_ENTRY.OwnerReferenced", owner_referenced, 0x41, 0x1, true, 0x1d47093fb16e750c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OWNER_ENTRY.IoQoSPriorityBoosted", io_qo_s_priority_boosted, 0x42, 0x1, true, 0xcacf71bd9c7c974, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_OWNER_ENTRY.OwnerCount", owner_count, 0x43, 0x1d, true, 0x664f2cade29050a9, 29, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OWNER_ENTRY.TableSize", table_size, 0x40, 0x20, true, 0xc32df80c2a950996)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif