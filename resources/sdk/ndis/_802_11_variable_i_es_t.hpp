#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_variable_i_es_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_VARIABLE_IEs]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_variable_i_es_t             
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 uint8_t                element_id;  //{ +0x0000    +0x0000    +0x0000    } | .ElementID
        _m01 uint8_t                length;      //{ +0x0001    +0x0001    +0x0001    } | .Length
        _m02 sdk::array<uint8_t, 1> data;        //{ +0x0002    +0x0002    +0x0002    } | .data
                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_VARIABLE_IEs.$", 0x3, true, 0xbca5cf3ded844 );           
        SDK_FIXED_SIZE( _802_11_variable_i_es_t, 0x3 );           
    };                                         
};
#include "magic/_802_11_variable_i_es_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_variable_i_es_t, 0x3 );
