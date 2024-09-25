#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/iommu_page_handling_data_t.start.hpp"
namespace nt
{
    // [struct _IOMMU_PAGE_HANDLING_DATA]
    // => Windows 11
    //
    struct iommu_page_handling_data_t                                 
    {                                                                 
        using get_page_fault_t =     sdk::function<uint32_t(void*, uint32_t*, uint64_t*, uint16_t*, void**, uint64_t*)>*;                                  
        using dismiss_page_fault_t = sdk::function<void(void*, uint32_t, uint64_t, uint16_t, int32_t)>*;                                  
                                                                      
        // Windows 11                                                 
        //                                                            
        _m00 struct ex::push_lock_t reset_lock;                         //{ +0x0000    } | .ResetLock
        _m01 uint64_t               lock;                               //{ +0x0008    } | .Lock
        _m02 uint32_t               valid_group_fault_sequence_number;  //{ +0x0010    } | .ValidGroupFaultSequenceNumber
        _m03 get_page_fault_t       get_page_fault;                     //{ +0x0018    } | .GetPageFault
        _m04 dismiss_page_fault_t   dismiss_page_fault;                 //{ +0x0020    } | .DismissPageFault
                                                                      
        SDK_MAGIC_PROPERTIES( "_IOMMU_PAGE_HANDLING_DATA.$", 0x0, false, 0x52a1a461ce80a08 );                                  
        SDK_FIXED_SIZE( iommu_page_handling_data_t, 0x28 );                                  
    };                                                                
};
#include "magic/iommu_page_handling_data_t.end.hpp"
SDK_VERIFY( struct nt::iommu_page_handling_data_t, 0x28 );
