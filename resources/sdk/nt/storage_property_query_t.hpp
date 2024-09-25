#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_query_type_t.hpp"
#include "storage_property_id_t.hpp"

#include "magic/storage_property_query_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PROPERTY_QUERY]
    // => WDK 10 (NV)
    //
    struct storage_property_query_t                               
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 enum nt::storage_property_id_t property_id;            //{ +0x0000    } | .PropertyId
        _m01 enum nt::storage_query_type_t  query_type;             //{ +0x0004    } | .QueryType
        _m02 sdk::array<uint8_t, 1>         additional_parameters;  //{ +0x0008    } | .AdditionalParameters
                                                                  
        SDK_NONVOL_PROPERTIES( "_STORAGE_PROPERTY_QUERY.$", 0x0, false, 0xbf47377fa7666b33 );                      
        SDK_FIXED_SIZE( storage_property_query_t, 0xc );                      
    };                                                            
};
#include "magic/storage_property_query_t.end.hpp"
SDK_VERIFY( struct nt::storage_property_query_t, 0xc );
