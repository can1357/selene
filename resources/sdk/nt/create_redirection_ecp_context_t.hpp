#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "../win/file_id_128_t.hpp"

#include "magic/create_redirection_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _CREATE_REDIRECTION_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct create_redirection_ecp_context_t        
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint16_t                  size;         //{ +0x0000    } | .Size
        _m01 uint16_t                  flags;        //{ +0x0002    } | .Flags
        _m02 struct win::file_id_128_t file_id;      //{ +0x0004    } | .FileId
        _m03 struct nt::guid_t         volume_guid;  //{ +0x0014    } | .VolumeGuid
                                                   
        SDK_NONVOL_PROPERTIES( "_CREATE_REDIRECTION_ECP_CONTEXT.$", 0x0, false, 0x33f110081f7b6876 );            
        SDK_FIXED_SIZE( create_redirection_ecp_context_t, 0x24 );            
    };                                             
};
#include "magic/create_redirection_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::create_redirection_ecp_context_t, 0x24 );
