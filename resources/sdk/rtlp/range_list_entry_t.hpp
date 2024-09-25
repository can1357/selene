#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/range_list_entry_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_RANGE_LIST_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct range_list_entry_t                             
    {                                                     
        struct u0_allocated_t                             
        {                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                            
            _m02 void* user_data;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UserData
            _m03 void* owner;                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Owner
                                                          
            SDK_MAGIC_PROPERTIES( "_RTLP_RANGE_LIST_ENTRY.Allocated.$", 0x10, true, 0xb1229b3ffca2809e );                        
            SDK_FIXED_SIZE( u0_allocated_t, 0x10 );                        
        };                                                
                                                          
        struct u4_merged_t                                
        {                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                            
            _m05 nt::list_entry_t list_head;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
                                                          
            SDK_MAGIC_PROPERTIES( "_RTLP_RANGE_LIST_ENTRY.Merged.$", 0x10, true, 0xb653101b9c70d4ea );                        
            SDK_FIXED_SIZE( u4_merged_t, 0x10 );                        
        };                                                
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 uint64_t                       start;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
        _m01 uint64_t                       end;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .End
        _m04 u0_allocated_t                 allocated;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Allocated
        _m06 u4_merged_t                    merged;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Merged
        _m07 uint8_t                        attributes;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Attributes
        _m08 uint8_t                        public_flags;   //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .PublicFlags
        _m09 uint16_t                       private_flags;  //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .PrivateFlags
        _m10 nt::list_entry_t               list_entry;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ListEntry
                                                          
        SDK_MAGIC_PROPERTIES( "_RTLP_RANGE_LIST_ENTRY.$", 0x38, true, 0x359008b79d58bd31 );              
        SDK_FIXED_SIZE( range_list_entry_t, 0x38 );              
    };                                                    
};
#include "magic/range_list_entry_t.end.hpp"
SDK_VERIFY( struct rtlp::range_list_entry_t::u0_allocated_t, 0x10 );
SDK_VERIFY( struct rtlp::range_list_entry_t::u4_merged_t, 0x10 );
SDK_VERIFY( struct rtlp::range_list_entry_t, 0x38 );
