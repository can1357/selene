#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/storport_context_t.start.hpp"
namespace stor::port
{
    struct raid_unit_extension_t;

    // [struct _STORPORT_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storport_context_t                                                
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 uint32_t                                  signature;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint64_t                                  wait_end_time_in100ns;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WaitEndTimeIn100NS
        _m02 void*                                     old_context;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OldContext
        _m03 nt::list_entry_t                          queue_entry;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .QueueEntry
        _m04 struct nt::irp_t*                         irp;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Irp
        _m05 struct stor::port::raid_unit_extension_t* unit;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Unit
                                                                             
        SDK_MAGIC_PROPERTIES( "_STORPORT_CONTEXT.$", 0x38, true, 0xd271c86ff221da4 );                      
        SDK_FIXED_SIZE( storport_context_t, 0x38 );                          
    };                                                                       
};
#include "magic/storport_context_t.end.hpp"
SDK_VERIFY( struct stor::port::storport_context_t, 0x38 );
