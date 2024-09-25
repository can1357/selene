#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPoolTypeOrPoolFlags.UsePoolType", use_pool_type, 0x0, 0x0, false, 0x32712fd10cb24fd1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "FxPoolTypeOrPoolFlags.PoolType", pool_type, 0x0, 0x0, false, 0x8dda390c5941ca1c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxPoolTypeOrPoolFlags.PoolFlags", pool_flags, 0x0, 0x0, false, 0xfe6033a382c32407)
#else
#define _m00
#define _m01
#define _m02
#endif