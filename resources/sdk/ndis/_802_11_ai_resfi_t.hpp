#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_ai_resfi_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_AI_RESFI]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_ai_resfi_t        
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t capabilities;    //{ +0x0000    +0x0000    +0x0000    } | .Capabilities
        _m01 uint16_t status_code;     //{ +0x0002    +0x0002    +0x0002    } | .StatusCode
        _m02 uint16_t association_id;  //{ +0x0004    +0x0004    +0x0004    } | .AssociationId
                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_AI_RESFI.$", 0x6, true, 0x29389cac53891f8c );               
        SDK_FIXED_SIZE( _802_11_ai_resfi_t, 0x6 );               
    };                               
};
#include "magic/_802_11_ai_resfi_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_ai_resfi_t, 0x6 );
