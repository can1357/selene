#pragma once
#include <sdkgen/support_library.hpp>
#include "slist_entry_t.hpp"
#include "../rtl/balanced_node_t.hpp"

#include "magic/mmclone_descriptor_t.start.hpp"
namespace nt
{
    struct mmclone_block_t;
    struct mmclone_header_t;
    struct mmclone_descriptor_t;

    // [struct _MMCLONE_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmclone_descriptor_t                                           
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                
        _m00 struct rtl::balanced_node_t      clone_node;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CloneNode
        _m01 struct nt::mmclone_descriptor_t* next;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m02 struct nt::mmclone_block_t*      starting_clone_block;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StartingCloneBlock
        _m03 struct nt::mmclone_block_t*      ending_clone_block;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EndingCloneBlock
        _m04 uint64_t                         number_of_ptes;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NumberOfPtes
        _m05 volatile uint64_t                number_of_references;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NumberOfReferences
        _m06 struct nt::mmclone_header_t*     clone_header;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CloneHeader
        _m07 uint64_t                         non_paged_pool_quota_charge;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NonPagedPoolQuotaCharge
        _m08 uint64_t                         nesting_level;                //{ +0x0048    +0x0060    +0x0060    +0x0060    } | .NestingLevel
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                
        _m09 struct nt::slist_entry_t         delete_list;                  //{ +0x0050    +0x0050    +0x0050    } | .DeleteList
                                                                          
        SDK_MAGIC_PROPERTIES( "_MMCLONE_DESCRIPTOR.$", 0x70, true, 0x32662ce6d2743b0 );                            
        SDK_DYNAMIC_SIZE( mmclone_descriptor_t );                            
    };                                                                    
};
#include "magic/mmclone_descriptor_t.end.hpp"
