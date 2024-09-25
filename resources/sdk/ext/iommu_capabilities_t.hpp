#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_capabilities_t.start.hpp"
namespace ext
{
    // [union _EXT_IOMMU_CAPABILITIES]
    // => Windows 11
    //
    union iommu_capabilities_t                            
    {                                                     
        // Windows 11                                     
        //                                                
        _m00 uint64_t as_uint64;                            //{ +0x0000    } | .AsUINT64
        _m01 uint1_t  generates_msi_interrupts;             //{ +0x0000@0  } | .GeneratesMsiInterrupts
        _m02 uint1_t  coherent_table_walks;                 //{ +0x0000@1  } | .CoherentTableWalks
        _m03 uint1_t  interrupts_not_subject_to_remapping;  //{ +0x0000@2  } | .InterruptsNotSubjectToRemapping
        _m04 uint1_t  interrupt_remapping;                  //{ +0x0000@3  } | .InterruptRemapping
        _m05 uint1_t  stage2_dma_remapping;                 //{ +0x0000@4  } | .Stage2DmaRemapping
        _m06 uint1_t  svm;                                  //{ +0x0000@5  } | .Svm
        _m07 uint1_t  pcie_function_based;                  //{ +0x0000@6  } | .PcieFunctionBased
                                                          
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_CAPABILITIES.$", 0x0, false, 0x54edbe578d9d9bf8 );                                    
        SDK_FIXED_SIZE( iommu_capabilities_t, 0x8 );                                    
    };                                                    
};
#include "magic/iommu_capabilities_t.end.hpp"
SDK_VERIFY( union ext::iommu_capabilities_t, 0x8 );
