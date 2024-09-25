#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mdl_t.start.hpp"
namespace nt
{
    struct mdl_t;
    struct eprocess_t;

    // [struct _MDL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mdl_t                                                
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                      
        _m00 struct nt::mdl_t*      next;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 int16_t                size;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 int16_t                mdl_flags;                    //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .MdlFlags
        _m03 struct nt::eprocess_t* process;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Process
        _m04 void*                  mapped_system_va;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MappedSystemVa
        _m05 void*                  start_va;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .StartVa
        _m06 uint32_t               byte_count;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ByteCount
        _m07 uint32_t               byte_offset;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .ByteOffset
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                      
        _m08 uint16_t               allocation_processor_number;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AllocationProcessorNumber
                                                                
        SDK_NONVOL_PROPERTIES( "_MDL.$", 0x30, true, 0x8c1cfb929e65364a );                            
        SDK_FIXED_SIZE( mdl_t, 0x30 );                            
    };                                                          
};
#include "magic/mdl_t.end.hpp"
SDK_VERIFY( struct nt::mdl_t, 0x30 );
