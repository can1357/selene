#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id_t.hpp"

#include "magic/mutant_owner_information_t.start.hpp"
namespace win
{
    // [struct _MUTANT_OWNER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mutant_owner_information_t         
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 struct nt::client_id_t client_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ClientId
                                              
        SDK_MAGIC_PROPERTIES( "_MUTANT_OWNER_INFORMATION.$", 0x10, true, 0x8e5ee0193286c581 );          
        SDK_FIXED_SIZE( mutant_owner_information_t, 0x10 );          
    };                                        
};
#include "magic/mutant_owner_information_t.end.hpp"
SDK_VERIFY( struct win::mutant_owner_information_t, 0x10 );
