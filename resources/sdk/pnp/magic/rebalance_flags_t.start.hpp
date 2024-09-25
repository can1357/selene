#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PNP_REBALANCE_FLAGS.RebalanceDueToDynamicPartitioning", rebalance_due_to_dynamic_partitioning, 0x0, 0x0, false, 0x50d0e61ba21ec992, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PNP_REBALANCE_FLAGS.ResetDeviceWhileStopped", reset_device_while_stopped, 0x0, 0x0, false, 0x70aaab1a1fa2c056, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REBALANCE_FLAGS.AsUlong", as_ulong, 0x0, 0x0, false, 0x9065fce6dca872cb)
#else
#define _m00
#define _m01
#define _m02
#endif