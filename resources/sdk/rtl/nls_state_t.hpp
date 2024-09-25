#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/cptableinfo_t.hpp"

#include "magic/nls_state_t.start.hpp"
namespace rtl
{
    // [struct _RTL_NLS_STATE]
    // => Windows 11
    //
    struct nls_state_t                                           
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct nt::cptableinfo_t default_acp_table_info;      //{ +0x0000    } | .DefaultAcpTableInfo
        _m01 struct nt::cptableinfo_t default_oem_table_info;      //{ +0x0040    } | .DefaultOemTableInfo
        _m02 uint16_t*                active_code_page_data;       //{ +0x0080    } | .ActiveCodePageData
        _m03 uint16_t*                oem_code_page_data;          //{ +0x0088    } | .OemCodePageData
        _m04 uint16_t*                lead_byte_info;              //{ +0x0090    } | .LeadByteInfo
        _m05 uint16_t*                oem_lead_byte_info;          //{ +0x0098    } | .OemLeadByteInfo
        _m06 uint16_t*                case_mapping_data;           //{ +0x00a0    } | .CaseMappingData
        _m07 uint16_t*                unicode_upcase_table844;     //{ +0x00a8    } | .UnicodeUpcaseTable844
        _m08 uint16_t*                unicode_lowercase_table844;  //{ +0x00b0    } | .UnicodeLowercaseTable844
                                                                 
        SDK_MAGIC_PROPERTIES( "_RTL_NLS_STATE.$", 0x0, false, 0xc9caa5916b5b3c51 );                           
        SDK_FIXED_SIZE( nls_state_t, 0xb8 );                           
    };                                                           
};
#include "magic/nls_state_t.end.hpp"
SDK_VERIFY( struct rtl::nls_state_t, 0xb8 );
