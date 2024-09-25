#pragma once
#include <sdkgen/support_library.hpp>
#include "csv_down_level_file_type_t.hpp"

#include "magic/csv_down_level_open_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct csv_down_level_open_ecp_context_t                         
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                            version;              //{ +0x0000    } | .Version
        _m01 uint8_t                             is_resume;            //{ +0x0004    } | .IsResume
        _m02 enum nt::csv_down_level_file_type_t file_type;            //{ +0x0008    } | .FileType
        _m03 uint32_t                            source_node_id;       //{ +0x000c    } | .SourceNodeId
        _m04 uint32_t                            destination_node_id;  //{ +0x0010    } | .DestinationNodeId
                                                                     
        SDK_NONVOL_PROPERTIES( "_CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT.$", 0x0, false, 0x942302301000672e );                    
        SDK_FIXED_SIZE( csv_down_level_open_ecp_context_t, 0x14 );                    
    };                                                               
};
#include "magic/csv_down_level_open_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::csv_down_level_open_ecp_context_t, 0x14 );
