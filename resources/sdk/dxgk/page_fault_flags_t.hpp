#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_PAGE_FAULT_FLAGS]
    //  WDK 10
    //
    enum class page_fault_flags_t : int32_t
    {                                      
        write =                  0x1,        // WDK 10
        fence_invalid =          0x2,        // WDK 10
        adapter_reset_required = 0x4,        // WDK 10
        engine_reset_required =  0x8,        // WDK 10
        fatal_hardware_error =   0x10,       // WDK 10
        iommu =                  0x20,       // WDK 10
        hw_context_valid =       0x40,       // WDK 10
        process_handle_valid =   0x80,       // WDK 10
    };                                     
};
