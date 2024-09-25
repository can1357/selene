#pragma once
#include <sdkgen/support_library.hpp>
#include "segment_flags_t.hpp"
#include "../ex/push_lock_t.hpp"

namespace mi { struct section_image_information_t; }

#include "magic/segment_t.start.hpp"
namespace nt
{
    struct mmpte_t;
    struct eprocess_t;
    struct control_area_t;
    struct mmextend_info_t;

    // [struct _SEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct segment_t                                                           
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                     
        _m00 struct nt::control_area_t*              control_area;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlArea
        _m01 uint32_t                                total_number_of_ptes;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalNumberOfPtes
        _m02 struct nt::segment_flags_t              segment_flags;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SegmentFlags
        _m03 uint64_t                                number_of_committed_pages;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfCommittedPages
        _m04 uint64_t                                size_of_segment;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SizeOfSegment
        _m05 struct nt::mmextend_info_t*             extend_info;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExtendInfo
        _m06 void*                                   based_address;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BasedAddress
        _m07 struct ex::push_lock_t                  segment_lock;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SegmentLock
        _m08 uint64_t                                image_commitment;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ImageCommitment
        _m09 struct mi::section_image_information_t* image_information;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ImageInformation
        _m10 void*                                   first_mapped_va;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FirstMappedVa
        _m11 struct nt::mmpte_t*                     prototype_pte;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .PrototypePte
                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                     
        _m12 uint32_t                                creating_process_id;        //{ +0x0030    +0x0030    +0x0030    } | .CreatingProcessId
                                                                               
        // Windows 10 v1607                                                    
        //                                                                     
        _m13 struct nt::eprocess_t*                  creating_process;           //{ +0x0030    } | .CreatingProcess
                                                                               
        SDK_MAGIC_PROPERTIES( "_SEGMENT.$", 0x48, true, 0x2f3b5cd4510b9c80 );                          
        SDK_FIXED_SIZE( segment_t, 0x48 );                                     
    };                                                                         
};
#include "magic/segment_t.end.hpp"
SDK_VERIFY( struct nt::segment_t, 0x48 );
