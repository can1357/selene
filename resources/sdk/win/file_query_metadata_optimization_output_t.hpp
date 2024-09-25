#pragma once
#include <sdkgen/support_library.hpp>
#include "file_metadata_optimization_state_t.hpp"

#include "magic/file_query_metadata_optimization_output_t.start.hpp"
namespace win
{
    // [struct _FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_query_metadata_optimization_output_t                                       
    {                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                 
        _m00 enum win::file_metadata_optimization_state_t state;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .State
        _m01 uint32_t                                     attribute_list_size;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AttributeListSize
        _m02 uint32_t                                     metadata_space_used;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MetadataSpaceUsed
        _m03 uint32_t                                     metadata_space_allocated;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MetadataSpaceAllocated
        _m04 uint32_t                                     number_of_file_records;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfFileRecords
        _m05 uint32_t                                     number_of_resident_attributes;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumberOfResidentAttributes
        _m06 uint32_t                                     number_of_nonresident_attributes;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberOfNonresidentAttributes
        _m07 uint32_t                                     total_in_progress;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .TotalInProgress
        _m08 uint32_t                                     total_pending;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TotalPending
                                                                                           
        SDK_MAGIC_PROPERTIES( "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.$", 0x24, true, 0x5b7df8ab42956112 );                                 
        SDK_FIXED_SIZE( file_query_metadata_optimization_output_t, 0x24 );                                 
    };                                                                                     
};
#include "magic/file_query_metadata_optimization_output_t.end.hpp"
SDK_VERIFY( struct win::file_query_metadata_optimization_output_t, 0x24 );
