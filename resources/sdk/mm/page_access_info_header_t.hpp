#pragma once
#include <sdkgen/support_library.hpp>
#include "page_access_type_t.hpp"
#include "../nt/single_list_entry_t.hpp"

namespace nt { struct eprocess_t; }

#include "magic/page_access_info_header_t.start.hpp"
namespace mm
{
    struct page_access_info_t;

    // [struct _MM_PAGE_ACCESS_INFO_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct page_access_info_header_t                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                        
        _m00 struct nt::single_list_entry_t link;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 enum mm::page_access_type_t    type;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m02 uint32_t                       empty_sequence_number;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .EmptySequenceNumber
        _m03 uint32_t                       current_file_index;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CurrentFileIndex
        _m04 uint64_t                       create_time;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CreateTime
        _m05 uint64_t                       empty_time;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EmptyTime
        _m06 struct mm::page_access_info_t* temp_entry;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TempEntry
        _m07 struct mm::page_access_info_t* page_entry;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PageEntry
        _m08 uint64_t*                      file_entry;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FileEntry
        _m09 uint64_t*                      first_file_entry;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FirstFileEntry
        _m10 struct nt::eprocess_t*         process;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Process
        _m11 uint32_t                       session_id;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SessionId
        _m12 uint64_t*                      page_frame_entry;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PageFrameEntry
        _m13 uint64_t*                      last_page_frame_entry;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LastPageFrameEntry
                                                                  
        SDK_MAGIC_PROPERTIES( "_MM_PAGE_ACCESS_INFO_HEADER.$", 0x48, true, 0xf63493c88810683f );                      
        SDK_FIXED_SIZE( page_access_info_header_t, 0x48 );                      
    };                                                            
};
#include "magic/page_access_info_header_t.end.hpp"
SDK_VERIFY( struct mm::page_access_info_header_t, 0x48 );
