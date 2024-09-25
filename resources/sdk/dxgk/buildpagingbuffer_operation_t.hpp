#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_BUILDPAGINGBUFFER_OPERATION]
    //  WDK 10
    //
    enum class buildpagingbuffer_operation_t : int32_t
    {                                                 
        transfer =                  0x0,                // WDK 10
        fill =                      0x1,                // WDK 10
        discard_content =           0x2,                // WDK 10
        read_physical =             0x3,                // WDK 10
        write_physical =            0x4,                // WDK 10
        map_aperture_segment =      0x5,                // WDK 10
        unmap_aperture_segment =    0x6,                // WDK 10
        special_lock_transfer =     0x7,                // WDK 10
        virtual_transfer =          0x8,                // WDK 10
        virtual_fill =              0x9,                // WDK 10
        init_context_resource =     0xa,                // WDK 10
        update_page_table =         0xb,                // WDK 10
        flush_tlb =                 0xc,                // WDK 10
        update_context_allocation = 0xd,                // WDK 10
        copy_page_table_entries =   0xe,                // WDK 10
        notify_residency =          0xf,                // WDK 10
        signal_monitored_fence =    0x10,               // WDK 10
    };                                                
};
