#pragma once
#include <sdkgen/support_library.hpp>
#include "traffic_secret_type_t.hpp"

#include "magic/traffic_secrets_t.start.hpp"
namespace sec
{
    // [struct _SEC_TRAFFIC_SECRETS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct traffic_secrets_t                                     
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                       
        _m00 sdk::array<wchar_t, 64>         symmetric_alg_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SymmetricAlgId
        _m01 sdk::array<wchar_t, 64>         chaining_mode;        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ChainingMode
        _m02 sdk::array<wchar_t, 64>         hash_alg_id;          //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .HashAlgId
        _m03 uint16_t                        key_size;             //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .KeySize
        _m04 uint16_t                        iv_size;              //{ +0x0182    +0x0182    +0x0182    +0x0182    } | .IvSize
        _m05 uint16_t                        msg_sequence_start;   //{ +0x0184    +0x0184    +0x0184    +0x0184    } | .MsgSequenceStart
        _m06 uint16_t                        msg_sequence_end;     //{ +0x0186    +0x0186    +0x0186    +0x0186    } | .MsgSequenceEnd
        _m07 enum sec::traffic_secret_type_t traffic_secret_type;  //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .TrafficSecretType
        _m08 uint16_t                        traffic_secret_size;  //{ +0x018c    +0x018c    +0x018c    +0x018c    } | .TrafficSecretSize
        _m09 sdk::array<uint8_t, 1>          traffic_secret;       //{ +0x018e    +0x018e    +0x018e    +0x018e    } | .TrafficSecret
                                                                 
        SDK_NONVOL_PROPERTIES( "_SEC_TRAFFIC_SECRETS.$", 0x190, true, 0xc89f5877a76dcfb9 );                    
        SDK_FIXED_SIZE( traffic_secrets_t, 0x190 );                    
    };                                                           
};
#include "magic/traffic_secrets_t.end.hpp"
SDK_VERIFY( struct sec::traffic_secrets_t, 0x190 );
