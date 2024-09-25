#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_vector_data_t.hpp"

#include "magic/interrupt_tracking_entry_t.start.hpp"
namespace nt
{
    struct kinterrupt_t;
    struct interrupt_tracking_root_t;

    // [struct _INTERRUPT_TRACKING_ENTRY]
    // => Windows 11
    //
    struct interrupt_tracking_entry_t                                     
    {                                                                     
        // Windows 11                                                     
        //                                                                
        _m00 nt::list_entry_t                      list_entry;              //{ +0x0000    } | .ListEntry
        _m01 struct nt::interrupt_tracking_root_t* int_track_root;          //{ +0x0010    } | .IntTrackRoot
        _m02 uint32_t                              interrupt_object_count;  //{ +0x0018    } | .InterruptObjectCount
        _m03 struct nt::kinterrupt_t**             interrupt_object_array;  //{ +0x0020    } | .InterruptObjectArray
        _m04 uint64_t                              isr_time;                //{ +0x0028    } | .IsrTime
        _m05 uint64_t                              dpc_time;                //{ +0x0030    } | .DpcTime
        _m06 uint8_t                               is_primary_interrupt;    //{ +0x0038    } | .IsPrimaryInterrupt
        _m07 struct nt::interrupt_vector_data_t    vector_data;             //{ +0x0040    } | .VectorData
                                                                          
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_TRACKING_ENTRY.$", 0x0, false, 0xd8c9531c8155e3a1 );                       
        SDK_FIXED_SIZE( interrupt_tracking_entry_t, 0x98 );                       
    };                                                                    
};
#include "magic/interrupt_tracking_entry_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_tracking_entry_t, 0x98 );
