#pragma once
#include <sdkgen/support_library.hpp>
#include "gp_log_page_descriptor_t.hpp"

#include "magic/devicedump_public_subsection_t.start.hpp"
namespace nt
{
    // [struct _DEVICEDUMP_PUBLIC_SUBSECTION]
    // => WDK 10 (NV)
    //
    struct devicedump_public_subsection_t          
    {                                              
        using gp_log_table_t = sdk::array<struct nt::gp_log_page_descriptor_t, 16>;               
                                                   
        // WDK 10                                  
        //                                         
        _m00 uint32_t               dw_flags;        //{ +0x0000    } | .dwFlags
        _m01 gp_log_table_t         gp_log_table;    //{ +0x0004    } | .GPLogTable
        _m02 sdk::array<char, 16>   sz_description;  //{ +0x0044    } | .szDescription
        _m03 sdk::array<uint8_t, 1> b_data;          //{ +0x0054    } | .bData
                                                   
        SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_PUBLIC_SUBSECTION.$", 0x0, false, 0x8a8929fc5e9525bc );               
        SDK_FIXED_SIZE( devicedump_public_subsection_t, 0x55 );               
    };                                             
};
#include "magic/devicedump_public_subsection_t.end.hpp"
SDK_VERIFY( struct nt::devicedump_public_subsection_t, 0x55 );
