#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PREEMPTCOMMAND.PreemptionFenceId", preemption_fence_id, 0x0, 0x20, true, 0x271dc85bcc2d7a4a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PREEMPTCOMMAND.NodeOrdinal", node_ordinal, 0x20, 0x20, true, 0xf683b3f9ef8c16)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PREEMPTCOMMAND.EngineOrdinal", engine_ordinal, 0x40, 0x20, true, 0xd010a62e2b887a9f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::preemptcommandflags_t), "_DXGKARG_PREEMPTCOMMAND.Flags", flags, 0x60, 0x20, true, 0x547f93cac9db27c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif