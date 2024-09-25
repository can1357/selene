#pragma once
#include <sdkgen/support_library.hpp>
#include "dirty_vector_operation_t.hpp"

namespace nt { struct ethread_t; }

#include "magic/dirty_vector_log_entry_t.start.hpp"
namespace cm
{
    // [struct _CM_DIRTY_VECTOR_LOG_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dirty_vector_log_entry_t                                                          
    {                                                                                        
        union u0_data_t                                                                      
        {                                                                                    
            struct u4_dirty_vector_modified_context_t                                        
            {                                                                                
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
                //                                                                           
                _m02 uint32_t start;                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
                _m03 uint32_t length;                                                          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
                                                                                             
                SDK_MAGIC_PROPERTIES( "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.DirtyVectorModifiedContext.$", 0x8, true, 0xdea59704f1b2bfa5 );                                               
                SDK_FIXED_SIZE( u4_dirty_vector_modified_context_t, 0x8 );                                               
            };                                                                               
                                                                                             
            struct u8_dirty_data_capture_context_t                                           
            {                                                                                
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
                //                                                                           
                _m05 uint32_t range_count;                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RangeCount
                _m06 uint32_t set_bit_count;                                                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SetBitCount
                                                                                             
                SDK_MAGIC_PROPERTIES( "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.DirtyDataCaptureContext.$", 0x8, true, 0x336e1c4c863b5cc5 );                                                      
                SDK_FIXED_SIZE( u8_dirty_data_capture_context_t, 0x8 );                                                      
            };                                                                               
                                                                                             
            struct u12_raw_t                                                                 
            {                                                                                
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
                //                                                                           
                _m08 uint32_t context1;                                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Context1
                _m09 uint32_t context2;                                                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Context2
                                                                                             
                SDK_MAGIC_PROPERTIES( "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.Raw.$", 0x8, true, 0x789d7e3d64abba2d );                                                 
                SDK_FIXED_SIZE( u12_raw_t, 0x8 );                                                 
            };                                                                               
                                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                                               
            _m04 u4_dirty_vector_modified_context_t  dirty_vector_modified_context;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DirtyVectorModifiedContext
            _m07 u8_dirty_data_capture_context_t     dirty_data_capture_context;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DirtyDataCaptureContext
            _m10 u12_raw_t                           raw;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Raw
                                                                                             
            SDK_MAGIC_PROPERTIES( "_CM_DIRTY_VECTOR_LOG_ENTRY.Data.$", 0x8, true, 0x5229e022f25abe0f );                                        
            SDK_FIXED_SIZE( u0_data_t, 0x8 );                                                
        };                                                                                   
                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                                   
        _m00 struct nt::ethread_t*                                                 thread;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Thread
        _m01 enum cm::dirty_vector_operation_t                                     operation;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Operation
        _m11 u0_data_t                                                             data;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Data
        _m12 sdk::array<void*, 6>                                                  stack;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Stack
                                                                                             
        SDK_MAGIC_PROPERTIES( "_CM_DIRTY_VECTOR_LOG_ENTRY.$", 0x48, true, 0xeb1a78c176c467d7 );          
        SDK_FIXED_SIZE( dirty_vector_log_entry_t, 0x48 );                                    
    };                                                                                       
};
#include "magic/dirty_vector_log_entry_t.end.hpp"
SDK_VERIFY( struct cm::dirty_vector_log_entry_t::u0_data_t::u4_dirty_vector_modified_context_t, 0x8 );
SDK_VERIFY( struct cm::dirty_vector_log_entry_t::u0_data_t::u8_dirty_data_capture_context_t, 0x8 );
SDK_VERIFY( struct cm::dirty_vector_log_entry_t::u0_data_t::u12_raw_t, 0x8 );
SDK_VERIFY( union cm::dirty_vector_log_entry_t::u0_data_t, 0x8 );
SDK_VERIFY( struct cm::dirty_vector_log_entry_t, 0x48 );
