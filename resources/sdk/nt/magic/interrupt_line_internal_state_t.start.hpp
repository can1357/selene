#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INTERRUPT_LINE_INTERNAL_STATE.Fixed", fixed, 0x0, 0x0, false, 0x38eec5b587c82cfc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INTERRUPT_LINE_INTERNAL_STATE.Irql", irql, 0x0, 0x0, false, 0x9a018dfb94d57bab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INTERRUPT_LINE_INTERNAL_STATE.Swapping", swapping, 0x0, 0x0, false, 0x65e405f8e9c97136)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_LINE_INTERNAL_STATE.OldClusterId", old_cluster_id, 0x0, 0x0, false, 0xfa5aec716682516e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_LINE_INTERNAL_STATE.OldClusterMask", old_cluster_mask, 0x0, 0x0, false, 0xcbc8927b8408b9e2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INTERRUPT_LINE_INTERNAL_STATE.LineStateDetermined", line_state_determined, 0x0, 0x0, false, 0xf514a8f82f8cd72d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif