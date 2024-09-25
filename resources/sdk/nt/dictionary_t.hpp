#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dictionary_t.start.hpp"
namespace nt
{
    struct dictionary_header_t;

    // [struct _DICTIONARY]
    // => WDK 10 (NV)
    //
    struct dictionary_t                                
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint64_t                        signature;  //{ +0x0000    } | .Signature
        _m01 struct nt::dictionary_header_t* list;       //{ +0x0008    } | .List
        _m02 uint64_t                        spin_lock;  //{ +0x0010    } | .SpinLock
                                                       
        SDK_NONVOL_PROPERTIES( "_DICTIONARY.$", 0x0, false, 0x788403e3d9f57b2 );          
        SDK_FIXED_SIZE( dictionary_t, 0x18 );          
    };                                                 
};
#include "magic/dictionary_t.end.hpp"
SDK_VERIFY( struct nt::dictionary_t, 0x18 );
