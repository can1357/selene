#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ucr_descriptor_t.start.hpp"
namespace heap
{
    // [struct _HEAP_UCR_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ucr_descriptor_t                 
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                  
        _m00 nt::list_entry_t list_entry;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 nt::list_entry_t segment_entry;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SegmentEntry
        _m02 void*            address;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Address
        _m03 uint64_t         size;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Size
                                            
        SDK_MAGIC_PROPERTIES( "_HEAP_UCR_DESCRIPTOR.$", 0x30, true, 0x631a2843bf606a3b );              
        SDK_FIXED_SIZE( ucr_descriptor_t, 0x30 );              
    };                                      
};
#include "magic/ucr_descriptor_t.end.hpp"
SDK_VERIFY( struct heap::ucr_descriptor_t, 0x30 );
