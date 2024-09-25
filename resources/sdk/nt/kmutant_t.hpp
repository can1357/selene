#pragma once
#include <sdkgen/support_library.hpp>
#include "dispatcher_header_t.hpp"

#include "magic/kmutant_t.start.hpp"
namespace nt
{
    struct kthread_t;

    // [struct _KMUTANT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kmutant_t                                          
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 struct nt::dispatcher_header_t header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 nt::list_entry_t               mutant_list_entry;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MutantListEntry
        _m02 struct nt::kthread_t*          owner_thread;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .OwnerThread
        _m03 varuint_t                      abandoned;          //{ +0x0030@0  +0x0030    +0x0030@0  +0x0030@0  +0x0030@0  } | .Abandoned
        _m04 uint8_t                        apc_disable;        //{ +0x0031    +0x0031    +0x0031    +0x0031    +0x0031    } | .ApcDisable
                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m05 uint8_t                        mutant_flags;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MutantFlags
                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m06 uint1_t                        abandoned2;         //{ +0x0030@0  +0x0030@0  +0x0030@0  } | .Abandoned2
        _m07 uint1_t                        ab_enabled;         //{ +0x0030@1  +0x0030@1  +0x0030@1  } | .AbEnabled
                                                              
        SDK_NONVOL_PROPERTIES( "_KMUTANT.$", 0x38, true, 0x9cb49f7d677fa551 );                  
        SDK_FIXED_SIZE( kmutant_t, 0x38 );                    
    };                                                        
};
#include "magic/kmutant_t.end.hpp"
SDK_VERIFY( struct nt::kmutant_t, 0x38 );
