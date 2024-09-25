#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_load_data_vbs_basic_t.start.hpp"
namespace win
{
    // [struct _ENCLAVE_LOAD_DATA_VBS_BASIC]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_load_data_vbs_basic_t
    {                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t page_type;          //{ +0x0000    +0x0000    +0x0000    } | .PageType
                                        
        SDK_MAGIC_PROPERTIES( "_ENCLAVE_LOAD_DATA_VBS_BASIC.$", 0x4, true, 0x4e4d21a332c1025 );          
        SDK_FIXED_SIZE( enclave_load_data_vbs_basic_t, 0x4 );          
    };                                  
};
#include "magic/enclave_load_data_vbs_basic_t.end.hpp"
SDK_VERIFY( struct win::enclave_load_data_vbs_basic_t, 0x4 );
