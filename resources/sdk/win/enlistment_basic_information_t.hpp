#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/enlistment_basic_information_t.start.hpp"
namespace win
{
    // [struct _ENLISTMENT_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enlistment_basic_information_t          
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 struct nt::guid_t enlistment_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EnlistmentId
        _m01 struct nt::guid_t transaction_id;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TransactionId
        _m02 struct nt::guid_t resource_manager_id;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ResourceManagerId
                                                   
        SDK_NONVOL_PROPERTIES( "_ENLISTMENT_BASIC_INFORMATION.$", 0x30, true, 0x13bc89efe02b11dd );                    
        SDK_FIXED_SIZE( enlistment_basic_information_t, 0x30 );                    
    };                                             
};
#include "magic/enlistment_basic_information_t.end.hpp"
SDK_VERIFY( struct win::enlistment_basic_information_t, 0x30 );
