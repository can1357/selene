#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/open_reparse_list_entry_t.start.hpp"
namespace nt
{
    // [struct _OPEN_REPARSE_LIST_ENTRY]
    // => WDK 10 (NV)
    //
    struct open_reparse_list_entry_t                   
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 nt::list_entry_t  open_reparse_list_entry;  //{ +0x0000    } | .OpenReparseListEntry
        _m01 uint32_t          reparse_tag;              //{ +0x0010    } | .ReparseTag
        _m02 uint32_t          flags;                    //{ +0x0014    } | .Flags
        _m03 struct nt::guid_t reparse_guid;             //{ +0x0018    } | .ReparseGuid
        _m04 uint16_t          size;                     //{ +0x0028    } | .Size
        _m05 uint16_t          remaining_length;         //{ +0x002a    } | .RemainingLength
                                                       
        SDK_NONVOL_PROPERTIES( "_OPEN_REPARSE_LIST_ENTRY.$", 0x0, false, 0x174aa3c9cd7c898a );                        
        SDK_FIXED_SIZE( open_reparse_list_entry_t, 0x30 );                        
    };                                                 
};
#include "magic/open_reparse_list_entry_t.end.hpp"
SDK_VERIFY( struct nt::open_reparse_list_entry_t, 0x30 );
