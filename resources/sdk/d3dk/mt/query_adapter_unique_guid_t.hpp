#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_adapter_unique_guid_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERY_ADAPTER_UNIQUE_GUID]
    // => WDK 10 (NV)
    //
    struct query_adapter_unique_guid_t                   
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 sdk::array<wchar_t, 40> adapter_unique_guid;  //{ +0x0000    } | .AdapterUniqueGUID
                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERY_ADAPTER_UNIQUE_GUID.$", 0x0, false, 0x524744d738b495d0 );                    
        SDK_FIXED_SIZE( query_adapter_unique_guid_t, 0x50 );                    
    };                                                   
};
#include "magic/query_adapter_unique_guid_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::query_adapter_unique_guid_t, 0x50 );
