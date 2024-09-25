#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPTE.Long", _long, 0x0, 0x40, true, 0xa543df2c02ceb3fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MMPTE.VolatileLong", volatile_long, 0x0, 0x40, true, 0x2d25642ca2dd3054)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_hardware_t), "_MMPTE.Hard", hard, 0x0, 0x40, true, 0xa369eb2a0c912ad7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_prototype_t), "_MMPTE.Proto", proto, 0x0, 0x40, true, 0xfb4c9142fade64f2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_software_t), "_MMPTE.Soft", soft, 0x0, 0x40, true, 0xacdce2f109ce4b5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_timestamp_t), "_MMPTE.TimeStamp", time_stamp, 0x0, 0x40, true, 0x5fe0883068f8afae)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_transition_t), "_MMPTE.Trans", trans, 0x0, 0x40, true, 0x2ac5a6516cdde0aa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_subsection_t), "_MMPTE.Subsect", subsect, 0x0, 0x40, true, 0x396a5bc73b8b7e4a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_list_t), "_MMPTE.List", list, 0x0, 0x40, true, 0x6aca04bc443bc68f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hardware_pte_t), "_MMPTE.Flush", flush, 0x0, 0x0, false, 0x20c21eecb95991c5)
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
#endif