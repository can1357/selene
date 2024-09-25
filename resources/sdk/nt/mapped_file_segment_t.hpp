#pragma once
#include <sdkgen/support_library.hpp>
#include "segment_flags_t.hpp"
#include "../ex/push_lock_t.hpp"

#include "magic/mapped_file_segment_t.start.hpp"
namespace nt
{
    struct control_area_t;
    struct mmextend_info_t;

    // [struct _MAPPED_FILE_SEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mapped_file_segment_t                                   
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                         
        _m00 struct nt::control_area_t*  control_area;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlArea
        _m01 uint32_t                    total_number_of_ptes;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalNumberOfPtes
        _m02 struct nt::segment_flags_t  segment_flags;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SegmentFlags
        _m03 uint64_t                    number_of_committed_pages;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfCommittedPages
        _m04 uint64_t                    size_of_segment;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SizeOfSegment
        _m05 struct nt::mmextend_info_t* extend_info;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExtendInfo
        _m06 void*                       based_address;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BasedAddress
        _m07 struct ex::push_lock_t      segment_lock;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SegmentLock
                                                                   
        SDK_MAGIC_PROPERTIES( "_MAPPED_FILE_SEGMENT.$", 0x30, true, 0x688bfaef3883d47a );                          
        SDK_FIXED_SIZE( mapped_file_segment_t, 0x30 );                          
    };                                                             
};
#include "magic/mapped_file_segment_t.end.hpp"
SDK_VERIFY( struct nt::mapped_file_segment_t, 0x30 );
