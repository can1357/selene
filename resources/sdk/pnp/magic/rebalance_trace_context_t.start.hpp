#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint32_t, sdk::array<uint32_t, 2>>), "_PNP_REBALANCE_TRACE_CONTEXT.DeviceCount", device_count, 0x0, 0x20, true, 0x7fde33b7fde9fd0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REBALANCE_TRACE_CONTEXT.RebalancePhase", rebalance_phase, 0x20, 0x20, true, 0x36b40a77c4e79d07)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<enum pnp::rebalance_reason_t, 2>, enum pnp::rebalance_reason_t>), "_PNP_REBALANCE_TRACE_CONTEXT.Reason", reason, 0x40, 0x40, true, 0x1c205e45875e4f90)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum pnp::rebalance_failure_t, 2>), "_PNP_REBALANCE_TRACE_CONTEXT.Failure", failure, 0x80, 0x40, true, 0x575c94580358311)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::device_node_t*, sdk::array<struct nt::device_node_t*, 2>>), "_PNP_REBALANCE_TRACE_CONTEXT.SubtreeRoot", subtree_root, 0xc0, 0x40, true, 0x119283af704945c5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint8_t, sdk::array<uint8_t, 2>>), "_PNP_REBALANCE_TRACE_CONTEXT.SubtreeIncludesRoot", subtree_includes_root, 0x100, 0x8, true, 0x8ee448960a9f83bc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_PNP_REBALANCE_TRACE_CONTEXT.TriggerRoot", trigger_root, 0x140, 0x40, true, 0x15a0a2e13a8915f0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, sdk::array<uint64_t, 2>>), "_PNP_REBALANCE_TRACE_CONTEXT.BeginTime", begin_time, 0x1c0, 0x40, true, 0xb777c81c1a658441)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::device_node_t*, 2>), "_PNP_REBALANCE_TRACE_CONTEXT.VetoNode", veto_node, 0x200, 0x80, true, 0x81d3d628ce589319)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum pnp::devnode_query_rebalance_veto_reason_t, 2>), "_PNP_REBALANCE_TRACE_CONTEXT.VetoQueryRebalanceReason", veto_query_rebalance_reason, 0x280, 0x40, true, 0x76df54895f3eaa77)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::resource_conflict_trace_context_t), "_PNP_REBALANCE_TRACE_CONTEXT.ConflictContext", conflict_context, 0x2c0, 0xc0, true, 0x3e3d0753c4f196c4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_REBALANCE_TRACE_CONTEXT.RebalanceDueToDynamicPartitioning", rebalance_due_to_dynamic_partitioning, 0x180, 0x8, true, 0xc586ceeffea25ab3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pnp::rebalance_flags_t), "_PNP_REBALANCE_TRACE_CONTEXT.Flags", flags, 0x0, 0x0, false, 0x384d0fef6c981c8c)
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
#define _m12
#endif