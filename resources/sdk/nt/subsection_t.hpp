#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_tree_t.hpp"
#include "mmsubsection_flags_t.hpp"
#include "../mi/subsection_entry1_t.hpp"

namespace mi { struct control_area_wait_block_t; }
namespace mi { struct per_session_protos_t;      }

#include "magic/subsection_t.start.hpp"
namespace nt
{
    struct mmpte_t;
    struct subsection_t;
    struct control_area_t;

    // [struct _SUBSECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct subsection_t                                                    
    {                                                                      
        struct u0_u2_t                                                     
        {                                                                  
            // Windows 10 v1607                                                 
            //                                                             
            _m17 uint31_t alignment_no_access_ptes;                          //{ +0x0000@0  } | .AlignmentNoAccessPtes
            _m18 uint1_t  dirty_pages;                                       //{ +0x0000@31 } | .DirtyPages
                                                                           
            SDK_MAGIC_PROPERTIES( "_SUBSECTION.u2.$", 0x0, false, 0xfc1e1b7f62f29168 );                                                 
            SDK_FIXED_SIZE( u0_u2_t, 0x4 );                                                 
        };                                                                 
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                 
        _m00 struct nt::control_area_t*            control_area;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlArea
        _m01 struct nt::mmpte_t*                   subsection_base;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubsectionBase
        _m02 struct nt::subsection_t*              next_subsection;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextSubsection
        _m03 struct rtl::avl_tree_t                global_per_session_head;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GlobalPerSessionHead
        _m04 struct mi::control_area_wait_block_t* creation_wait_list;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CreationWaitList
        _m05 struct mi::per_session_protos_t*      session_driver_protos;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SessionDriverProtos
        _m06 uint32_t                              long_flags;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LongFlags
        _m07 struct nt::mmsubsection_flags_t       subsection_flags;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SubsectionFlags
        _m08 uint32_t                              starting_sector;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .StartingSector
        _m09 uint32_t                              number_of_full_sectors;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NumberOfFullSectors
        _m10 uint32_t                              ptes_in_subsection;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PtesInSubsection
        _m11 varuint_t                             unused_ptes;              //{ +0x0034@0  +0x0034@0  +0x0034@0  +0x0034@0  } | .UnusedPtes
        _m12 uint1_t                               dirty_pages;              //{ +0x0034@31 +0x0034@31 +0x0034@31 +0x0034@31 } | .DirtyPages
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                 
        _m13 struct mi::subsection_entry1_t        e1;                       //{ +0x0030    +0x0030    +0x0030    } | .e1
        _m14 uint32_t                              entire_field;             //{ +0x0030    +0x0030    +0x0030    } | .EntireField
        _m15 uint1_t                               extent_query_needed;      //{ +0x0034@30 +0x0034@30 +0x0034@30 } | .ExtentQueryNeeded
                                                                           
        // Windows 10 v1607                                                
        //                                                                 
        _m16 uint32_t                              number_of_child_views;    //{ +0x0030    } | .NumberOfChildViews
        _m19 u0_u2_t                               u2;                       //{ +0x0034    } | .u2
                                                                           
        SDK_MAGIC_PROPERTIES( "_SUBSECTION.$", 0x38, true, 0xfbbda44774fe40e5 );                        
        SDK_FIXED_SIZE( subsection_t, 0x38 );                              
    };                                                                     
};
#include "magic/subsection_t.end.hpp"
SDK_VERIFY( struct nt::subsection_t::u0_u2_t, 0x4 );
SDK_VERIFY( struct nt::subsection_t, 0x38 );
