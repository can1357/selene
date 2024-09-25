#pragma once
#include <sdkgen/support_library.hpp>
#include "mmsection_flags_t.hpp"
#include "../rtl/balanced_node_t.hpp"

#include "magic/section_t.start.hpp"
namespace nt
{
    struct file_object_t;
    struct control_area_t;

    // [struct _SECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_t                                               
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                         
        _m00 struct rtl::balanced_node_t  section_node;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionNode
        _m01 uint64_t                     starting_vpn;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StartingVpn
        _m02 uint64_t                     ending_vpn;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EndingVpn
        _m03 struct nt::control_area_t*   control_area;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ControlArea
        _m04 struct nt::file_object_t*    file_object;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FileObject
        _m05 uint1_t                      remote_image_file_object;  //{ +0x0028@0  +0x0028@0  +0x0028@0  +0x0028@0  } | .RemoteImageFileObject
        _m06 uint1_t                      remote_data_file_object;   //{ +0x0028@1  +0x0028@1  +0x0028@1  +0x0028@1  } | .RemoteDataFileObject
        _m07 uint64_t                     size_of_section;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SizeOfSection
        _m08 uint32_t                     long_flags;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LongFlags
        _m09 struct nt::mmsection_flags_t flags;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m10 uint12_t                     initial_page_protection;   //{ +0x003c@0  +0x003c@0  +0x003c@0  +0x003c@0  } | .InitialPageProtection
        _m11 uint19_t                     session_id;                //{ +0x003c@12 +0x003c@12 +0x003c@12 +0x003c@12 } | .SessionId
        _m12 uint1_t                      no_validation_needed;      //{ +0x003c@31 +0x003c@31 +0x003c@31 +0x003c@31 } | .NoValidationNeeded
                                                                   
        SDK_MAGIC_PROPERTIES( "_SECTION.$", 0x40, true, 0x6a009fc524429e16 );                         
        SDK_FIXED_SIZE( section_t, 0x40 );                         
    };                                                             
};
#include "magic/section_t.end.hpp"
SDK_VERIFY( struct nt::section_t, 0x40 );
