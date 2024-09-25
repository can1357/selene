#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_record_type_t), "_KTRANSACTION_HISTORY.RecordType", record_type, 0x0, 0x20, true, 0x67b7cf113e8220e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTRANSACTION_HISTORY.Payload", payload, 0x20, 0x20, true, 0x1835c0e42969bf35)
#else
#define _m00
#define _m01
#endif