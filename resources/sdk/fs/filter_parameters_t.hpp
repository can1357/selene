#pragma once
#include <sdkgen/support_library.hpp>
#include "filter_section_sync_type_t.hpp"
#include "../nt/file_information_class_t.hpp"
#include "filter_stream_fo_notification_type_t.hpp"

namespace nt { struct eresource_t; }
namespace nt { struct irp_t;       }

#include "magic/filter_parameters_t.start.hpp"
namespace fs
{
    struct filter_section_sync_output_t;

    // [union _FS_FILTER_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union filter_parameters_t                                                                                        
    {                                                                                                                
        struct u0_acquire_for_modified_page_writer_t                                                                 
        {                                                                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
            //                                                                                                       
            _m00 int64_t*                 ending_offset;                                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EndingOffset
            _m01 struct nt::eresource_t** resource_to_release;                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ResourceToRelease
                                                                                                                     
            SDK_NONVOL_PROPERTIES( "_FS_FILTER_PARAMETERS.AcquireForModifiedPageWriter.$", 0x10, true, 0x88e35564ba982a79 );                                                        
            SDK_FIXED_SIZE( u0_acquire_for_modified_page_writer_t, 0x10 );                                                        
        };                                                                                                           
                                                                                                                     
        struct u5_release_for_modified_page_writer_t                                                                 
        {                                                                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
            //                                                                                                       
            _m03 struct nt::eresource_t* resource_to_release;                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ResourceToRelease
                                                                                                                     
            SDK_NONVOL_PROPERTIES( "_FS_FILTER_PARAMETERS.ReleaseForModifiedPageWriter.$", 0x8, true, 0xfa2158b7454e3ebc );                                                        
            SDK_FIXED_SIZE( u5_release_for_modified_page_writer_t, 0x8 );                                                        
        };                                                                                                           
                                                                                                                     
        struct u10_acquire_for_section_synchronization_t                                                             
        {                                                                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
            //                                                                                                       
            _m05 enum fs::filter_section_sync_type_t      sync_type;                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SyncType
            _m06 uint32_t                                 page_protection;                                             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .PageProtection
            _m07 struct fs::filter_section_sync_output_t* output_information;                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .OutputInformation
                                                                                                                     
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
            //                                                                                                       
            _m08 uint32_t                                 flags;                                                       //{ +0x0010    +0x0010    +0x0010    } | .Flags
                                                                                                                     
            // Windows 11                                                                                            
            //                                                                                                       
            _m09 uint32_t                                 allocation_attributes;                                       //{ +0x0014    } | .AllocationAttributes
                                                                                                                     
            SDK_NONVOL_PROPERTIES( "_FS_FILTER_PARAMETERS.AcquireForSectionSynchronization.$", 0x18, true, 0x63fed3238012ff18 );                                                          
            SDK_DYNAMIC_SIZE( u10_acquire_for_section_synchronization_t );                                                          
        };                                                                                                           
                                                                                                                     
        struct u15_others_t                                                                                          
        {                                                                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
            //                                                                                                       
            _m11 void* argument1;                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Argument1
            _m12 void* argument2;                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Argument2
            _m13 void* argument3;                                                                                      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Argument3
            _m14 void* argument4;                                                                                      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Argument4
            _m15 void* argument5;                                                                                      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Argument5
                                                                                                                     
            SDK_NONVOL_PROPERTIES( "_FS_FILTER_PARAMETERS.Others.$", 0x28, true, 0x775268ec930d1003 );                                              
            SDK_FIXED_SIZE( u15_others_t, 0x28 );                                                                    
        };                                                                                                           
                                                                                                                     
        struct u20_query_open_t                                                                                      
        {                                                                                                            
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
            //                                                                                                       
            _m17 struct nt::irp_t*                 irp;                                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
            _m18 void*                             file_information;                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileInformation
            _m19 uint32_t*                         length;                                                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
            _m20 enum nt::file_information_class_t file_information_class;                                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileInformationClass
            _m21 int32_t                           completion_status;                                                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CompletionStatus
                                                                                                                     
            SDK_NONVOL_PROPERTIES( "_FS_FILTER_PARAMETERS.QueryOpen.$", 0x20, true, 0x9a42524e4021500c );                                                           
            SDK_FIXED_SIZE( u20_query_open_t, 0x20 );                                                                
        };                                                                                                           
                                                                                                                     
        struct u24_notify_stream_file_object_t                                                                       
        {                                                                                                            
            // Windows 10 v1607                                                                                      
            //                                                                                                       
            _m23 enum fs::filter_stream_fo_notification_type_t notification_type;                                      //{ +0x0000    } | .NotificationType
            _m24 uint8_t                                       safe_to_recurse;                                        //{ +0x0008    } | .SafeToRecurse
                                                                                                                     
            SDK_MAGIC_PROPERTIES( "_FS_FILTER_PARAMETERS.NotifyStreamFileObject.$", 0x0, false, 0xc5cbf9a04fda0281 );                                                      
            SDK_FIXED_SIZE( u24_notify_stream_file_object_t, 0x10 );                                                      
        };                                                                                                           
                                                                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                                           
        _m02 u0_acquire_for_modified_page_writer_t                               acquire_for_modified_page_writer;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AcquireForModifiedPageWriter
        _m04 u5_release_for_modified_page_writer_t                               release_for_modified_page_writer;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReleaseForModifiedPageWriter
        _m10 u10_acquire_for_section_synchronization_t                           acquire_for_section_synchronization;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AcquireForSectionSynchronization
        _m16 u15_others_t                                                        others;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Others
                                                                                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                                           
        _m22 u20_query_open_t                                                    query_open;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryOpen
                                                                                                                     
        // Windows 10 v1607                                                                                          
        //                                                                                                           
        _m25 u24_notify_stream_file_object_t                                     notify_stream_file_object;            //{ +0x0000    } | .NotifyStreamFileObject
                                                                                                                     
        SDK_NONVOL_PROPERTIES( "_FS_FILTER_PARAMETERS.$", 0x28, true, 0x823b6e9d3967d2bd );                                    
        SDK_FIXED_SIZE( filter_parameters_t, 0x28 );                                                                 
    };                                                                                                               
};
#include "magic/filter_parameters_t.end.hpp"
SDK_VERIFY( struct fs::filter_parameters_t::u0_acquire_for_modified_page_writer_t, 0x10 );
SDK_VERIFY( struct fs::filter_parameters_t::u5_release_for_modified_page_writer_t, 0x8 );
SDK_VERIFY( struct fs::filter_parameters_t::u15_others_t, 0x28 );
SDK_VERIFY( struct fs::filter_parameters_t::u20_query_open_t, 0x20 );
SDK_VERIFY( struct fs::filter_parameters_t::u24_notify_stream_file_object_t, 0x10 );
SDK_VERIFY( union fs::filter_parameters_t, 0x28 );
