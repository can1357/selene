#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_offload_token_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_OFFLOAD_TOKEN]
    // => WDK 10 (NV)
    //
    struct storage_offload_token_t                                                 
    {                                                                              
        struct u0_storage_offload_zero_data_token_t                                
        {                                                                          
                                                                                   
            SDK_NONVOL_PROPERTIES( "_STORAGE_OFFLOAD_TOKEN.StorageOffloadZeroDataToken.$", 0x0, false, 0x3bd7cfd17f715558 );                                
            SDK_FIXED_SIZE( u0_storage_offload_zero_data_token_t, 0x1f8 );                                
        };                                                                         
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m00 sdk::array<uint8_t, 4>                token_type;                       //{ +0x0000    } | .TokenType
        _m01 sdk::array<uint8_t, 2>                token_id_length;                  //{ +0x0006    } | .TokenIdLength
        _m02 u0_storage_offload_zero_data_token_t  storage_offload_zero_data_token;  //{ +0x0008    } | .StorageOffloadZeroDataToken
        _m03 sdk::array<uint8_t, 504>              token;                            //{ +0x0008    } | .Token
                                                                                   
        SDK_NONVOL_PROPERTIES( "_STORAGE_OFFLOAD_TOKEN.$", 0x0, false, 0xacb8be499ca42538 );                                
        SDK_FIXED_SIZE( storage_offload_token_t, 0x200 );                                
    };                                                                             
};
#include "magic/storage_offload_token_t.end.hpp"
SDK_VERIFY( struct nt::storage_offload_token_t::u0_storage_offload_zero_data_token_t, 0x1f8 );
SDK_VERIFY( struct nt::storage_offload_token_t, 0x200 );
