#pragma once
#include <sdkgen/support_library.hpp>
#include "cmsi_rw_lock_t.hpp"

#include "magic/cmsi_process_tuple_t.start.hpp"
namespace nt
{
    // [struct _CMSI_PROCESS_TUPLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsi_process_tuple_t                            
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                 
        _m00 void*                     process_handle;       //{ +0x0000    +0x0000    +0x0000    } | .ProcessHandle
        _m01 void*                     process_reference;    //{ +0x0008    +0x0008    +0x0008    } | .ProcessReference
                                                           
        // Windows 11                                      
        //                                                 
        _m02 struct nt::cmsi_rw_lock_t working_set_lock;     //{ +0x0010    } | .WorkingSetLock
        _m03 uint64_t                  locked_page_charges;  //{ +0x0018    } | .LockedPageCharges
        _m04 uint64_t                  working_set_minimum;  //{ +0x0020    } | .WorkingSetMinimum
        _m05 uint64_t                  working_set_maximum;  //{ +0x0028    } | .WorkingSetMaximum
                                                           
        SDK_MAGIC_PROPERTIES( "_CMSI_PROCESS_TUPLE.$", 0x10, true, 0x10515e7a01b58a31 );                    
        SDK_DYNAMIC_SIZE( cmsi_process_tuple_t );                    
    };                                                     
};
#include "magic/cmsi_process_tuple_t.end.hpp"
