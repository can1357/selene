#pragma once
#include <sdkgen/support_library.hpp>
#include "formatted_capacity_descriptor_t.hpp"

#include "magic/formatted_capacity_list_t.start.hpp"
namespace nt
{
    // [struct _FORMATTED_CAPACITY_LIST]
    // => WDK 10 (NV)
    //
    struct formatted_capacity_list_t             
    {                                            
        using descriptors_t = sdk::array<struct nt::formatted_capacity_descriptor_t>;                     
                                                 
        // WDK 10                                
        //                                       
        _m00 uint8_t        capacity_list_length;  //{ +0x0003    } | .CapacityListLength
        _m01 descriptors_t  descriptors;           //{ +0x0004    } | .Descriptors
                                                 
        SDK_NONVOL_PROPERTIES( "_FORMATTED_CAPACITY_LIST.$", 0x0, false, 0x9ff981d17d5770 );                     
        SDK_FIXED_SIZE( formatted_capacity_list_t, 0x4 );                     
    };                                           
};
#include "magic/formatted_capacity_list_t.end.hpp"
SDK_VERIFY( struct nt::formatted_capacity_list_t, 0x4 );
