#pragma once
#include <sdkgen/support_library.hpp>
#include "ksemaphore_t.hpp"

#include "magic/mmdereference_segment_header_t.start.hpp"
namespace nt
{
    // [struct _MMDEREFERENCE_SEGMENT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmdereference_segment_header_t                            
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                           
        _m00 struct nt::ksemaphore_t semaphore;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Semaphore
                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                           
        _m01 nt::list_entry_t        control_area_delete_list_head;    //{ +0x0020    +0x0020    +0x0020    } | .ControlAreaDeleteListHead
        _m02 nt::list_entry_t        unused_segment_delete_list_head;  //{ +0x0030    +0x0030    +0x0030    } | .UnusedSegmentDeleteListHead
        _m03 nt::list_entry_t        pagefile_extension_list_head;     //{ +0x0040    +0x0040    +0x0040    } | .PagefileExtensionListHead
                                                                     
        // Windows 10 v1607                                          
        //                                                           
        _m04 nt::list_entry_t        list_head;                        //{ +0x0020    } | .ListHead
                                                                     
        SDK_MAGIC_PROPERTIES( "_MMDEREFERENCE_SEGMENT_HEADER.$", 0x50, true, 0x26caed0c0628cae );                                
        SDK_DYNAMIC_SIZE( mmdereference_segment_header_t );                                
    };                                                               
};
#include "magic/mmdereference_segment_header_t.end.hpp"
