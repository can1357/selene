#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "querystatistics_type_t.hpp"
#include "querystatistics_result_t.hpp"
#include "querystatistics_query_node_t.hpp"
#include "querystatistics_query_segment_t.hpp"
#include "querystatistics_query_vidpnsource_t.hpp"

#include "magic/querystatistics_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYSTATISTICS]
    // => WDK 10 (NV)
    //
    struct querystatistics_t                                                              
    {                                                                                     
        using query_vid_pn_source_t =         struct d3dk::mt::querystatistics_query_vidpnsource_t;                            
        using query_process_vid_pn_source_t = struct d3dk::mt::querystatistics_query_vidpnsource_t;                            
                                                                                          
        // WDK 10                                                                         
        //                                                                                
        _m00 enum d3dk::mt::querystatistics_type_t            type;                         //{ +0x0000    } | .Type
        _m01 struct nt::luid_t                                adapter_luid;                 //{ +0x0004    } | .AdapterLuid
        _m02 void*                                            process_handle;               //{ +0x0010    } | .ProcessHandle
        _m03 union d3dk::mt::querystatistics_result_t         query_result;                 //{ +0x0018    } | .QueryResult
        _m04 struct d3dk::mt::querystatistics_query_segment_t query_segment;                //{ +0x0320    } | .QuerySegment
        _m05 struct d3dk::mt::querystatistics_query_segment_t query_process_segment;        //{ +0x0320    } | .QueryProcessSegment
        _m06 struct d3dk::mt::querystatistics_query_node_t    query_node;                   //{ +0x0320    } | .QueryNode
        _m07 struct d3dk::mt::querystatistics_query_node_t    query_process_node;           //{ +0x0320    } | .QueryProcessNode
        _m08 query_vid_pn_source_t                            query_vid_pn_source;          //{ +0x0320    } | .QueryVidPnSource
        _m09 query_process_vid_pn_source_t                    query_process_vid_pn_source;  //{ +0x0320    } | .QueryProcessVidPnSource
                                                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYSTATISTICS.$", 0x0, false, 0x8fed6b0f40f60b70 );                            
        SDK_FIXED_SIZE( querystatistics_t, 0x328 );                                       
    };                                                                                    
};
#include "magic/querystatistics_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::querystatistics_t, 0x328 );
