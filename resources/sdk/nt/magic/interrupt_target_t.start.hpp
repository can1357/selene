#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interrupt_target_type_t), "_INTERRUPT_TARGET.Target", target, 0x0, 0x20, true, 0xb49d9861b5fccb03)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_TARGET.PhysicalTarget", physical_target, 0x40, 0x20, true, 0xef4f23c7b40f1a10)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_TARGET.LogicalFlatTarget", logical_flat_target, 0x40, 0x20, true, 0x4a3f9684daa7f76f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_TARGET.RemapIndex", remap_index, 0x40, 0x20, true, 0x63d325bba9535c3f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_TARGET.ClusterId", cluster_id, 0x40, 0x20, true, 0xe869852aa223d78a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_TARGET.ClusterMask", cluster_mask, 0x60, 0x20, true, 0x1115d8246d21c7b3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_TARGET.HypervisorTarget.Low32", low32, 0x0, 0x20, true, 0xb93c8ed99569645c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_TARGET.HypervisorTarget.High32", high32, 0x20, 0x20, true, 0x577f14e6eefde4bf)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INTERRUPT_TARGET.HypervisorTarget.InterruptData", interrupt_data, 0x40, 0x40, true, 0xebcd59f12d9dd741)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_hypervisor_target_t), "_INTERRUPT_TARGET.HypervisorTarget", hypervisor_target, 0x40, 0x80, true, 0x8c0145ded02d196c)
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
#endif