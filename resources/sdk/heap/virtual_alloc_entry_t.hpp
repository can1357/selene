#pragma once
#include <sdkgen/support_library.hpp>
#include "entry_t.hpp"
#include "entry_extra_t.hpp"

#include "magic/virtual_alloc_entry_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VIRTUAL_ALLOC_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct virtual_alloc_entry_t                     
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                           
        _m00 nt::list_entry_t           entry;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 struct heap::entry_extra_t extra_stuff;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExtraStuff
        _m02 uint64_t                   commit_size;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CommitSize
        _m03 uint64_t                   reserve_size;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ReserveSize
        _m04 struct heap::entry_t       busy_block;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BusyBlock
                                                     
        SDK_MAGIC_PROPERTIES( "_HEAP_VIRTUAL_ALLOC_ENTRY.$", 0x40, true, 0x5eba306b13123951 );             
        SDK_FIXED_SIZE( virtual_alloc_entry_t, 0x40 );             
    };                                               
};
#include "magic/virtual_alloc_entry_t.end.hpp"
SDK_VERIFY( struct heap::virtual_alloc_entry_t, 0x40 );
