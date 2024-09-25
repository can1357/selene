#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_interface_state_change_t.hpp"

#include "magic/iommu_interface_callback_record_t.start.hpp"
namespace nt
{
    struct iommu_dma_device_t;

    // [struct _IOMMU_INTERFACE_CALLBACK_RECORD]
    // => Windows 11
    //
    struct iommu_interface_callback_record_t                               
    {                                                                      
        using callback_routine_t = sdk::function<void(struct nt::iommu_interface_state_change_t*, void*)>*;                    
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m00 nt::list_entry_t                          list_entry;           //{ +0x0000    } | .ListEntry
        _m01 callback_routine_t                        callback_routine;     //{ +0x0010    } | .CallbackRoutine
        _m02 void*                                     callback_context;     //{ +0x0018    } | .CallbackContext
        _m03 struct nt::iommu_dma_device_t*            dma_device;           //{ +0x0020    } | .DmaDevice
        _m04 struct nt::iommu_interface_state_change_t last_reported_state;  //{ +0x0028    } | .LastReportedState
                                                                           
        SDK_MAGIC_PROPERTIES( "_IOMMU_INTERFACE_CALLBACK_RECORD.$", 0x0, false, 0x8b20411d143caa82 );                    
        SDK_FIXED_SIZE( iommu_interface_callback_record_t, 0x30 );                    
    };                                                                     
};
#include "magic/iommu_interface_callback_record_t.end.hpp"
SDK_VERIFY( struct nt::iommu_interface_callback_record_t, 0x30 );
