#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muilanglist_t.start.hpp"
namespace win
{
    struct muilanglistnode_t;
    struct muiregistryinfo_t;

    // [struct _MUILANGLIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muilanglist_t                                                  
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 uint32_t                       total_size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalSize
        _m01 uint16_t                       num_languages;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumLanguages
        _m02 uint16_t                       max_num_languages;              //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MaxNumLanguages
        _m03 uint8_t                        b_use_use_machine_config_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bUseUseMachineConfigList
        _m04 struct win::muiregistryinfo_t* reg_info;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RegInfo
        _m05 struct win::muilanglistnode_t* languages;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Languages
        _m06 uint64_t                       ull_mask;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ullMask
        _m07 uint32_t                       u_console_flag;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .uConsoleFlag
        _m08 sdk::array<wchar_t, 10>        checksum;                       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Checksum
                                                                          
        SDK_MAGIC_PROPERTIES( "_MUILANGLIST.$", 0x40, true, 0xef7c6de563807e49 );                              
        SDK_FIXED_SIZE( muilanglist_t, 0x40 );                              
    };                                                                    
};
#include "magic/muilanglist_t.end.hpp"
SDK_VERIFY( struct win::muilanglist_t, 0x40 );
