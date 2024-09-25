#pragma once
#include <sdkgen/support_library.hpp>
#include "queryregistry_type_t.hpp"
#include "queryregistry_flags_t.hpp"
#include "queryregistry_status_t.hpp"

#include "magic/queryregistry_info_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_QUERYREGISTRY_INFO]
    // => WDK 10 (NV)
    //
    struct queryregistry_info_t                                            
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 enum d3d::ddi::queryregistry_type_t    query_type;              //{ +0x0000    } | .QueryType
        _m01 struct d3d::ddi::queryregistry_flags_t query_flags;             //{ +0x0004    } | .QueryFlags
        _m02 sdk::array<wchar_t, 260>               value_name;              //{ +0x0008    } | .ValueName
        _m03 uint32_t                               value_type;              //{ +0x0210    } | .ValueType
        _m04 uint32_t                               physical_adapter_index;  //{ +0x0214    } | .PhysicalAdapterIndex
        _m05 uint32_t                               output_value_size;       //{ +0x0218    } | .OutputValueSize
        _m06 enum d3d::ddi::queryregistry_status_t  status;                  //{ +0x021c    } | .Status
        _m07 uint32_t                               output_dword;            //{ +0x0220    } | .OutputDword
        _m08 uint64_t                               output_qword;            //{ +0x0220    } | .OutputQword
        _m09 sdk::array<wchar_t, 1>                 output_string;           //{ +0x0220    } | .OutputString
        _m10 sdk::array<uint8_t, 1>                 output_binary;           //{ +0x0220    } | .OutputBinary
                                                                           
        SDK_NONVOL_PROPERTIES( "_D3DDDI_QUERYREGISTRY_INFO.$", 0x0, false, 0x2afbf8e4fc1162b1 );                       
        SDK_FIXED_SIZE( queryregistry_info_t, 0x228 );                       
    };                                                                     
};
#include "magic/queryregistry_info_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::queryregistry_info_t, 0x228 );
