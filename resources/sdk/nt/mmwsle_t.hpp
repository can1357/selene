#pragma once
#include <sdkgen/support_library.hpp>
#include "mmwslentry_t.hpp"
#include "mmwsle_free_entry_t.hpp"

#include "magic/mmwsle_t.start.hpp"
namespace nt
{
    // [struct _MMWSLE]
    // => Windows 10 v1607
    //
    struct mmwsle_t                                         
    {                                                       
        // Windows 10 v1607                                 
        //                                                  
        _m00 void*                          virtual_address;  //{ +0x0000    } | .VirtualAddress
        _m01 uint64_t                       _long;            //{ +0x0000    } | .Long
        _m02 struct nt::mmwslentry_t        e1;               //{ +0x0000    } | .e1
        _m03 struct nt::mmwsle_free_entry_t e2;               //{ +0x0000    } | .e2
                                                            
        SDK_MAGIC_PROPERTIES( "_MMWSLE.$", 0x0, false, 0x113a4d7f4da04c5 );                
        SDK_FIXED_SIZE( mmwsle_t, 0x8 );                    
    };                                                      
};
#include "magic/mmwsle_t.end.hpp"
SDK_VERIFY( struct nt::mmwsle_t, 0x8 );
