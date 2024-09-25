#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOMMU_SVM_CAPABILITIES.AtsCapability", ats_capability, 0x0, 0x1, true, 0x4aaed4e473f77bdb, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOMMU_SVM_CAPABILITIES.PriCapability", pri_capability, 0x1, 0x1, true, 0x55d4d3c51fd56632, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOMMU_SVM_CAPABILITIES.PasidCapability", pasid_capability, 0x2, 0x1, true, 0xa4b6bfdcf60d61a4, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_IOMMU_SVM_CAPABILITIES.CapReg.PasidMaxWidth", pasid_max_width, 0x0, 0x5, true, 0xf61b82c9d9164f75, 5, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOMMU_SVM_CAPABILITIES.CapReg.PasidExePerm", pasid_exe_perm, 0x5, 0x1, true, 0xa7e5e64f08f51d57, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOMMU_SVM_CAPABILITIES.CapReg.PasidPrivMode", pasid_priv_mode, 0x6, 0x1, true, 0xc944142cd27cca99, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOMMU_SVM_CAPABILITIES.CapReg.AtsPageAlignedRequest", ats_page_aligned_request, 0x7, 0x1, true, 0xc78b9b6a4424f5e1, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOMMU_SVM_CAPABILITIES.CapReg.AtsGlobalInvalidate", ats_global_invalidate, 0x8, 0x1, true, 0xf7a6657b3567a2ee, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_IOMMU_SVM_CAPABILITIES.CapReg.AtsInvalidateQueueDepth", ats_invalidate_queue_depth, 0x9, 0x5, true, 0x5b98cc3b76e58000, 5, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_cap_reg_t), "_IOMMU_SVM_CAPABILITIES.CapReg", cap_reg, 0x20, 0x20, true, 0x8973b90e0a338e81)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_IOMMU_SVM_CAPABILITIES.Rsvd", rsvd, 0x40, 0xf, true, 0x5196e7fff7cc30b5, 15, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_SVM_CAPABILITIES.AsULONG", as_ulong, 0x0, 0x20, true, 0xdaf3d22306e60198)
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
#endif