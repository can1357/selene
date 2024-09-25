#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXT_IOMMU_CAPABILITIES.AsUINT64", as_uint64, 0x0, 0x0, false, 0xe282c6f35c18ad7c)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CAPABILITIES.GeneratesMsiInterrupts", generates_msi_interrupts, 0x0, 0x0, false, 0x1f5ff870a52ad85f, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CAPABILITIES.CoherentTableWalks", coherent_table_walks, 0x0, 0x0, false, 0x5b7e8528f47aab3c, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CAPABILITIES.InterruptsNotSubjectToRemapping", interrupts_not_subject_to_remapping, 0x0, 0x0, false, 0x771f8df9f689d682, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CAPABILITIES.InterruptRemapping", interrupt_remapping, 0x0, 0x0, false, 0x425f59f92873ee21, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CAPABILITIES.Stage2DmaRemapping", stage2_dma_remapping, 0x0, 0x0, false, 0xc2a3a455911c4ead, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CAPABILITIES.Svm", svm, 0x0, 0x0, false, 0x8deb3307f77b3528, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_CAPABILITIES.PcieFunctionBased", pcie_function_based, 0x0, 0x0, false, 0xf2750d57170ac886, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif