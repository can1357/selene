#pragma once
#include <sdkgen/support_library.hpp>
#include "error_history_directory_entry_t.hpp"

#include "magic/error_history_directory_t.start.hpp"
namespace nt
{
    // [struct _ERROR_HISTORY_DIRECTORY]
    // => WDK 10 (NV)
    //
    struct error_history_directory_t                                      
    {                                                                     
        using error_history_directory_list_t = sdk::array<struct nt::error_history_directory_entry_t, 1>;                             
                                                                          
        // WDK 10                                                         
        //                                                                
        _m00 sdk::array<uint8_t, 8>          t10_vendor_id;                 //{ +0x0000    } | .T10VendorId
        _m01 uint8_t                         error_history_version;         //{ +0x0008    } | .ErrorHistoryVersion
        _m02 uint1_t                         clear_support;                 //{ +0x0009@0  } | .ClearSupport
        _m03 uint2_t                         error_history_source;          //{ +0x0009@1  } | .ErrorHistorySource
        _m04 uint2_t                         error_history_retrieved;       //{ +0x0009@3  } | .ErrorHistoryRetrieved
        _m05 sdk::array<uint8_t, 2>          directory_length;              //{ +0x001e    } | .DirectoryLength
        _m06 error_history_directory_list_t  error_history_directory_list;  //{ +0x0020    } | .ErrorHistoryDirectoryList
                                                                          
        SDK_NONVOL_PROPERTIES( "_ERROR_HISTORY_DIRECTORY.$", 0x0, false, 0x6606fc52ec6977ee );                             
        SDK_FIXED_SIZE( error_history_directory_t, 0x28 );                             
    };                                                                    
};
#include "magic/error_history_directory_t.end.hpp"
SDK_VERIFY( struct nt::error_history_directory_t, 0x28 );
