#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/luid_t.hpp"
#include "npi_moduleid_type_t.hpp"

#include "magic/npi_moduleid_t.start.hpp"
namespace ndis
{
    // [struct _NPI_MODULEID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct npi_moduleid_t                           
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                          
        _m00 uint16_t                       length;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 enum ndis::npi_moduleid_type_t type;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 struct nt::guid_t              guid;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Guid
        _m03 struct nt::luid_t              if_luid;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .IfLuid
                                                    
        SDK_NONVOL_PROPERTIES( "_NPI_MODULEID.$", 0x18, true, 0x152579b2169cfb8b );        
        SDK_FIXED_SIZE( npi_moduleid_t, 0x18 );        
    };                                              
};
#include "magic/npi_moduleid_t.end.hpp"
SDK_VERIFY( struct ndis::npi_moduleid_t, 0x18 );
