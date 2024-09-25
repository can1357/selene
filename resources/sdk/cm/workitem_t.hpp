#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/workitem_t.start.hpp"
namespace cm
{
    // [struct _CM_WORKITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct workitem_t                                   
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2               
        //                                              
        _m00 nt::list_entry_t            list_entry;      //{ +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint32_t                    _private;        //{ +0x0010    +0x0010    +0x0010    } | .Private
        _m02 sdk::function<void(void*)>* worker_routine;  //{ +0x0018    +0x0018    +0x0018    } | .WorkerRoutine
        _m03 void*                       parameter;       //{ +0x0020    +0x0020    +0x0020    } | .Parameter
                                                        
        SDK_MAGIC_PROPERTIES( "_CM_WORKITEM.$", 0x28, true, 0x6579934c4c937e32 );               
        SDK_FIXED_SIZE( workitem_t, 0x28 );               
    };                                                  
};
#include "magic/workitem_t.end.hpp"
SDK_VERIFY( struct cm::workitem_t, 0x28 );
