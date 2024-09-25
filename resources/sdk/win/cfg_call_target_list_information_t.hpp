#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cfg_call_target_list_information_t.start.hpp"
namespace win
{
    struct cfg_call_target_info_t;

    // [struct _CFG_CALL_TARGET_LIST_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cfg_call_target_list_information_t                                
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                   
        _m00 uint32_t                            number_of_entries;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfEntries
        _m01 uint32_t*                           number_of_entries_processed;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfEntriesProcessed
        _m02 struct win::cfg_call_target_info_t* call_target_info;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CallTargetInfo
                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                   
        _m03 void*                               section;                      //{ +0x0018    +0x0018    +0x0018    } | .Section
        _m04 uint64_t                            file_offset;                  //{ +0x0020    +0x0020    +0x0020    } | .FileOffset
                                                                             
        SDK_MAGIC_PROPERTIES( "_CFG_CALL_TARGET_LIST_INFORMATION.$", 0x28, true, 0xdcb1997faca5787b );                            
        SDK_DYNAMIC_SIZE( cfg_call_target_list_information_t );                            
    };                                                                       
};
#include "magic/cfg_call_target_list_information_t.end.hpp"
