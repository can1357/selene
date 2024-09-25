#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bulk_security_test_data_t.start.hpp"
namespace win
{
    // [struct BULK_SECURITY_TEST_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bulk_security_test_data_t                
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint32_t                desired_access;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DesiredAccess
        _m01 sdk::array<uint32_t, 1> security_ids;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SecurityIds
                                                    
        SDK_MAGIC_PROPERTIES( "BULK_SECURITY_TEST_DATA.$", 0x8, true, 0xd3de731e524f41b1 );               
        SDK_FIXED_SIZE( bulk_security_test_data_t, 0x8 );               
    };                                              
};
#include "magic/bulk_security_test_data_t.end.hpp"
SDK_VERIFY( struct win::bulk_security_test_data_t, 0x8 );
