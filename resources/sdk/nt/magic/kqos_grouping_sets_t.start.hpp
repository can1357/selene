#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KQOS_GROUPING_SETS.SingleCoreSet", single_core_set, 0x0, 0x40, true, 0xe7ae90669a2b8fcc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KQOS_GROUPING_SETS.SmtSet", smt_set, 0x40, 0x40, true, 0xd2d36cc2be62a9d2)
#else
#define _m00
#define _m01
#endif