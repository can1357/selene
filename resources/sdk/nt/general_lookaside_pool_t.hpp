#pragma once
#include <sdkgen/support_library.hpp>
#include "pool_type_t.hpp"
#include "slist_header_t.hpp"
#include "single_list_entry_t.hpp"

#include "magic/general_lookaside_pool_t.start.hpp"
namespace nt
{
    struct lookaside_list_ex_t;

    // [struct _GENERAL_LOOKASIDE_POOL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct general_lookaside_pool_t                              
    {                                                            
        using pallocate_function_ex_t = sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t, struct nt::lookaside_list_ex_t*)>*;                     
        using pallocate_function_t =    sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t)>*;                     
        using pfree_function_ex_t =     sdk::function<void(void*, struct nt::lookaside_list_ex_t*)>*;                     
                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 union nt::slist_header_t       list_head;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 struct nt::single_list_entry_t single_list_head;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SingleListHead
        _m02 uint16_t                       depth;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Depth
        _m03 uint16_t                       maximum_depth;         //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .MaximumDepth
        _m04 uint32_t                       total_allocates;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TotalAllocates
        _m05 uint32_t                       allocate_misses;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocateMisses
        _m06 uint32_t                       allocate_hits;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocateHits
        _m07 uint32_t                       total_frees;           //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .TotalFrees
        _m08 uint32_t                       free_misses;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeMisses
        _m09 uint32_t                       free_hits;             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeHits
        _m10 enum nt::pool_type_t           type;                  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .Type
        _m11 uint32_t                       tag;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Tag
        _m12 uint32_t                       size;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Size
        _m13 pallocate_function_ex_t        allocate_ex;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .AllocateEx
        _m14 pallocate_function_t           allocate;              //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Allocate
        _m15 pfree_function_ex_t            free_ex;               //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .FreeEx
        _m16 sdk::function<void(void*)>*    free;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Free
        _m17 nt::list_entry_t               list_entry;            //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ListEntry
        _m18 uint32_t                       last_total_allocates;  //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .LastTotalAllocates
        _m19 uint32_t                       last_allocate_misses;  //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .LastAllocateMisses
        _m20 uint32_t                       last_allocate_hits;    //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .LastAllocateHits
        _m21 sdk::array<uint32_t, 2>        future;                //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .Future
                                                                 
        SDK_NONVOL_PROPERTIES( "_GENERAL_LOOKASIDE_POOL.$", 0x60, true, 0xca289c65cda54308 );                     
        SDK_FIXED_SIZE( general_lookaside_pool_t, 0x60 );                     
    };                                                           
};
#include "magic/general_lookaside_pool_t.end.hpp"
SDK_VERIFY( struct nt::general_lookaside_pool_t, 0x60 );
