#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "gpu_preference_query_type_t.hpp"
#include "gpu_preference_query_state_t.hpp"

#include "magic/hybrid_list_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_HYBRID_LIST]
    // => WDK 10 (NV)
    //
    struct hybrid_list_t                                                         
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 enum d3dk::mt::gpu_preference_query_state_t state;                    //{ +0x0000    } | .State
        _m01 struct nt::luid_t                           adapter_luid;             //{ +0x0004    } | .AdapterLuid
        _m02 int32_t                                     b_user_preference_query;  //{ +0x000c    } | .bUserPreferenceQuery
        _m03 enum d3dk::mt::gpu_preference_query_type_t  query_type;               //{ +0x0010    } | .QueryType
                                                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_HYBRID_LIST.$", 0x0, false, 0xe70d4b257eccdbe );                        
        SDK_FIXED_SIZE( hybrid_list_t, 0x14 );                                   
    };                                                                           
};
#include "magic/hybrid_list_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::hybrid_list_t, 0x14 );
