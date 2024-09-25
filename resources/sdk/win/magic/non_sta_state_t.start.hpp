#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NonSTAState._oidWaiterCount", oid_waiter_count, 0x80, 0x20, true, 0x274fedbaad126dd9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "NonSTAState._registeringOids", registering_oids, 0xa0, 0x8, true, 0x6cc385f3aed34fef)
#else
#define _m00
#define _m01
#endif