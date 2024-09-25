#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxVerifierOrderMapping.ObjectType", object_type, 0x0, 0x10, true, 0x32b8ff4746660f22)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxVerifierOrderMapping.ObjectLockOrder", object_lock_order, 0x10, 0x10, true, 0xe4bfcd7586ffa6de)
#else
#define _m00
#define _m01
#endif