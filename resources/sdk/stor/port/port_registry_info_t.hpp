#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_registry_info_t.start.hpp"
namespace stor::port
{
    // [struct _PORT_REGISTRY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_registry_info_t                
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                     
        _m00 uint32_t         size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 nt::list_entry_t list_entry;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ListEntry
        _m02 uint64_t         spin_lock;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SpinLock
        _m03 uint8_t*         buffer;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Buffer
        _m04 uint32_t         allocated_length;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AllocatedLength
        _m05 uint32_t         current_length;    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .CurrentLength
        _m06 uint32_t         length_needed;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LengthNeeded
        _m07 uint32_t         offset;            //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Offset
        _m08 uint32_t         flags;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m09 int32_t          internal_status;   //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .InternalStatus
                                               
        SDK_MAGIC_PROPERTIES( "_PORT_REGISTRY_INFO.$", 0x40, true, 0x7077711ac407dc1a );                 
        SDK_FIXED_SIZE( port_registry_info_t, 0x40 );                 
    };                                         
};
#include "magic/port_registry_info_t.end.hpp"
SDK_VERIFY( struct stor::port::port_registry_info_t, 0x40 );
