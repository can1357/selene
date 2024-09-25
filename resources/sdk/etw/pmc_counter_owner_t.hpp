#pragma once
#include <sdkgen/support_library.hpp>
#include "pmc_counter_owner_type_t.hpp"

#include "magic/pmc_counter_owner_t.start.hpp"
namespace etw
{
    // [struct _ETW_PMC_COUNTER_OWNER]
    // => Windows 11
    //
    struct pmc_counter_owner_t                                 
    {                                                          
        // Windows 11                                          
        //                                                     
        _m00 enum etw::pmc_counter_owner_type_t owner_type;      //{ +0x0000    } | .OwnerType
        _m01 uint32_t                           profile_source;  //{ +0x0004    } | .ProfileSource
        _m02 uint32_t                           owner_tag;       //{ +0x0008    } | .OwnerTag
                                                               
        SDK_MAGIC_PROPERTIES( "_ETW_PMC_COUNTER_OWNER.$", 0x0, false, 0xd89151c05cb5cc68 );               
        SDK_FIXED_SIZE( pmc_counter_owner_t, 0xc );               
    };                                                         
};
#include "magic/pmc_counter_owner_t.end.hpp"
SDK_VERIFY( struct etw::pmc_counter_owner_t, 0xc );
