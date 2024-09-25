#pragma once
#include <sdkgen/support_library.hpp>
#include "slot_table_information_t.hpp"
#include "mechanical_status_information_header_t.hpp"

#include "magic/mechanical_status_t.start.hpp"
namespace nt
{
    // [struct _MECHANICAL_STATUS]
    // => WDK 10 (NV)
    //
    struct mechanical_status_t                                    
    {                                                             
        using mechanical_status_header_t = struct nt::mechanical_status_information_header_t;                         
        using slot_table_info_t =          sdk::array<struct nt::slot_table_information_t, 1>;                         
                                                                  
        // WDK 10                                                 
        //                                                        
        _m00 mechanical_status_header_t  mechanical_status_header;  //{ +0x0000    } | .MechanicalStatusHeader
        _m01 slot_table_info_t           slot_table_info;           //{ +0x0008    } | .SlotTableInfo
                                                                  
        SDK_NONVOL_PROPERTIES( "_MECHANICAL_STATUS.$", 0x0, false, 0xbf61af0d9bffd783 );                         
        SDK_FIXED_SIZE( mechanical_status_t, 0xc );                         
    };                                                            
};
#include "magic/mechanical_status_t.end.hpp"
SDK_VERIFY( struct nt::mechanical_status_t, 0xc );
