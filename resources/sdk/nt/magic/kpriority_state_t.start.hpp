#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_KPRIORITY_STATE.Priority", priority, 0x0, 0x0, false, 0xa4c943de4db55bd2, 7, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRIORITY_STATE.IsolationWidth", isolation_width, 0x0, 0x0, false, 0x82f5a8972b0fa8d, 1, uint8_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRIORITY_STATE.AllFields", all_fields, 0x0, 0x0, false, 0xb8f0b9eb438f213)
#else
#define _m00
#define _m01
#define _m02
#endif