#pragma once
#include <sdkgen/support_library.hpp>
#include "express_pme_requestor_id_t.hpp"

#include "magic/pme_requestor_id_buffer_t.start.hpp"
namespace pci
{
    // [struct _PME_REQUESTOR_ID_BUFFER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pme_requestor_id_buffer_t
    {                               
        using ids_t = sdk::array<union pci::express_pme_requestor_id_t, 32>;      
                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 ids_t    ids;            //{ +0x0000    +0x0000    +0x0000    } | .Ids
        _m01 uint64_t start;          //{ +0x0040    +0x0040    +0x0040    } | .Start
        _m02 uint64_t end;            //{ +0x0048    +0x0048    +0x0048    } | .End
                                    
        SDK_MAGIC_PROPERTIES( "_PME_REQUESTOR_ID_BUFFER.$", 0x50, true, 0x7288c885c448562b );      
        SDK_FIXED_SIZE( pme_requestor_id_buffer_t, 0x50 );      
    };                              
};
#include "magic/pme_requestor_id_buffer_t.end.hpp"
SDK_VERIFY( struct pci::pme_requestor_id_buffer_t, 0x50 );
